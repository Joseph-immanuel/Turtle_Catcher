import rclpy
import time

from rclpy.node import Node
from turtlesim.srv import Spawn, Kill
from random import randint
from functools import partial
from turtlesim_custom_msg.srv import GetTurtleAlive, KillTurtle
from turtlesim_custom_msg.msg import AliveTurtleArray, Turtle

class TurtleManager(Node):
    def __init__(self):
        super().__init__("Turtle_Manager")

        self.declare_parameter("spawn_turtle_prefix", "Turtle")
        self.declare_parameter("max_turtles", 5)
        self.declare_parameter("spawn_frequency", 3)

        self.kill_turtle = self.create_service(KillTurtle, 'kill_turtle', self.turtle_kill_callback)

        self.spawn_count = 2

        self.alive_turtles = 1

        self.alive_turtle_directory = []

        self.turtle_publisher = self.create_publisher(AliveTurtleArray, 'turtle_directory', 10)

    def turtle_array_publisher(self):
        Turtle_Array_msg = AliveTurtleArray()
        Turtle_Array_msg.turtles = self.alive_turtle_directory
        self.turtle_publisher.publish(Turtle_Array_msg)

        return True

    def create_turtle_msg(self, name, x_pose, y_pose, theta):
        turtle = Turtle()
        turtle.name = name
        turtle.x_pose = x_pose
        turtle.y_pose = y_pose
        turtle.theta = theta

        return turtle
    
    def get_turtle_alive_request(self):
        turtle_alive_client = self.create_client(GetTurtleAlive, 'alive_turtles')

        while not turtle_alive_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().info("Waiting for the Turtle Alive Service to be available ... ")
        
        turtle_alive_request = GetTurtleAlive.Request()
        turtle_alive_request.request = True

        turtle_alive_future_obj = turtle_alive_client.call_async(turtle_alive_request)
        turtle_alive_future_obj.add_done_callback(self.get_turtle_alive_callback)

    def get_turtle_alive_callback(self, future_response):

        try:
            service_response = future_response.result()  
            if service_response is not None:
                self.alive_turtles = service_response.alive_turtles
                self.get_logger().info(f"Alive Turtles Updated: {self.alive_turtles}")

                if self.alive_turtles < self.get_parameter("max_turtles").get_parameter_value().integer_value:
                    self.spawn_count += 1
                    self.alive_turtles += 1
                    self.spawn_request()
                    time.sleep(self.get_parameter("spawn_frequency").get_parameter_value().integer_value)
                else:
                    self.turtle_array_publisher()
                    self.get_logger().info("Spawn Limit Reached ... Rechecking Alive Turtle Count ....")
                    time.sleep(5)

                    self.get_turtle_alive_request()
                    
            else:
                self.get_logger().warn("Received an empty response from Alive Turtles service.")

        except Exception as e:
            self.get_logger().error(f"Failed to get response from Alive Turtles service: {str(e)}")

    def spawn_request(self):
        spawn_client = self.create_client(Spawn, 'spawn')

        while not spawn_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().info("Waiting for the turtlesim spawn service to be available ... ")
        
        ## Creating Request

        spawn_request = Spawn.Request()
        spawn_request.x = randint(0, 10) / 1.0
        spawn_request.y = randint(0, 10) / 1.0
        spawn_request.theta = randint(0, 4) / 1.0

        spawn_request.name = self.get_parameter("spawn_turtle_prefix").get_parameter_value().string_value + str(self.spawn_count)

        spawn_future_obj = spawn_client.call_async(spawn_request)
        spawn_future_obj.add_done_callback(partial(self.spawn_request_callback, x=spawn_request.x, y = spawn_request.y, theta=spawn_request.theta))
    
    def spawn_request_callback(self, response, x, y, theta):

        service_response = response.result()

        turtle_msg = self.create_turtle_msg(service_response.name, x, y, theta)

        self.alive_turtle_directory.append(turtle_msg)

        self.turtle_array_publisher()

        self.get_logger().info(f"{service_response.name} spawned Successfully")

        self.get_turtle_alive_request()
    
    def kill_request(self, turtle_name):
        kill_client = self.create_client(Kill, 'kill')

        while not  kill_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().info("Waiting for the Kill Server to be online ... ")
        
        kill_request = Kill.Request()
        kill_request.name = turtle_name

        future_obj = kill_client.call_async(kill_request)
        future_obj.add_done_callback(partial(self.kill_client_callback, turtle_name=turtle_name))
    
    def kill_client_callback(self, future_response, turtle_name):
        kill_response = future_response.result()

        self.get_logger().info(f"{turtle_name} killed !! ")
    
    def del_from_alive_turtle_directory(self, turtle_name):
        for turtle in self.alive_turtle_directory:
            if turtle.name == turtle_name:
                self.alive_turtle_directory.remove(turtle)
    
    def turtle_kill_callback(self, request, response):
        turtle_name = request.name
        self.kill_request(turtle_name)

        self.del_from_alive_turtle_directory(turtle_name)

        response.success = True

        return response


def main(args=None):
    rclpy.init(args=args)
    try:
        node = TurtleManager()
        node.spawn_request()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
    
if __name__ == '__main__':
    main()

