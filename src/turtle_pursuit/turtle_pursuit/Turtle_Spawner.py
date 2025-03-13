import rclpy
from rclpy.node import Node
from turtlesim.srv import Spawn, Kill
from turtle_pursuit_custom_interfaces.msg import Turtle, AliveTurtleArray
from turtle_pursuit_custom_interfaces.srv import KillTurtle

from random import randint
from functools import partial

class TurtleSpawner(Node):
    def __init__(self):
        super().__init__("Turtle_Spawner")

        self.alive_turtle_array = []

        self.declare_parameter("max_turtles", 10)

        self.declare_parameter("turtle_name_prefix", "Turtle")
        self.spawn_number = 2

        self.declare_parameter("alive_turtle_array_publisher_frequency", 0.5)
        self.turtle_alive_array_publisher = self.create_publisher(AliveTurtleArray, 'AliveTurtles', 10)
        self.turtle_alive_array_publisher_timer = self.create_timer(self.get_parameter("alive_turtle_array_publisher_frequency").value, self.publish_turtle_alive_array)

        self.turtle_kill_server = self.create_service(KillTurtle, 'kill_turtle', self.kill_server_callback)
        self.get_logger().info("Turtle Kill Server is up and ready to accept Request ... ")

        self.declare_parameter("Spawn_Frequency", 2.0)
        self.turtle_spawner_timer = self.create_timer(self.get_parameter("Spawn_Frequency").value, self.turtle_spawner)
    
    def publish_turtle_alive_array(self):
        if len(self.alive_turtle_array) == 0:
            #self.get_logger().warn("No Alive Turtle Found ... ")
            return 
        alive_turtle_array = AliveTurtleArray()
        alive_turtle_array.turtles = self.alive_turtle_array
        self.turtle_alive_array_publisher.publish(alive_turtle_array)

    def create_turtle_msg(self, turtle_name, x_pose, y_pose, theta):
        turtle_msg = Turtle()
        turtle_msg.name = turtle_name
        turtle_msg.x_pose = x_pose
        turtle_msg.y_pose = y_pose
        turtle_msg.theta = theta

        return turtle_msg

    def spawn_client(self, turtle_name, x_pose, y_pose, theta):
        spawn_client = self.create_client(Spawn, 'spawn')

        while not spawn_client.wait_for_service(timeout_sec=1.5):
            self.get_logger().warn("Waiting for the Turtlesim Spawn Server to be online ... ")
        
        spawn_request = Spawn.Request()

        spawn_request.x = x_pose
        spawn_request.y = y_pose
        spawn_request.theta = theta
        spawn_request.name = turtle_name

        spawn_future = spawn_client.call_async(spawn_request)
        spawn_future.add_done_callback(partial(self.spawn_client_callback, turtle_name=turtle_name, x_pose=x_pose, y_pose=y_pose, theta=theta))

    def spawn_client_callback(self, spawn_future, turtle_name, x_pose, y_pose, theta):

        response = spawn_future.result()

        if response:
            self.get_logger().info(f"{response.name} Spawned Successfully ... ")
            self.spawn_number += 1
            self.alive_turtle_array.append(self.create_turtle_msg(turtle_name, x_pose, y_pose, theta))
        else:
            self.get_logger().warn(f"{turtle_name} spawn failed ! ")
    
    def remove_turtle_from_array(self, turtle_name):
        for turtle in self.alive_turtle_array:
            if turtle.name == turtle_name:
                self.alive_turtle_array.remove(turtle)
                return True
    
    def kill_request(self, turtle_name):
        kill_client = self.create_client(Kill, 'kill')

        while not kill_client.wait_for_service(timeout_sec=1.5):
            self.get_logger().warn("Waiting for the Turtlesim Kill Server to be online ... ")
        
        kill_request = Kill.Request()
        kill_request.name = turtle_name

        kill_future = kill_client.call_async(kill_request)

        kill_future.add_done_callback(partial(self.kill_request_future_callback, turtle_name=turtle_name))

    def kill_request_future_callback(self, kill_future_response, turtle_name):
        kill_response = kill_future_response.result()

        if kill_future_response:
            self.get_logger().info(f"{turtle_name} Killed !!! ")
            self.remove_turtle_from_array(turtle_name)
        else:
            self.get_logger().warn("Turtle Kill Failed !!! ")
    
    def kill_server_callback(self, request, response):
        turtle_name = request.name

        self.kill_request(turtle_name=turtle_name)
        response.success = True
        return response

    def turtle_spawner(self):
        if len(self.alive_turtle_array) < self.get_parameter("max_turtles").value:
            self.get_logger().info(f"Spawning Turtle{self.spawn_number}")

            x_pose = randint(0, 11) / 1.0
            y_pose = randint(0, 11) / 1.0
            theta = randint(0, 4) / 1.0
            turtle_name = self.get_parameter("turtle_name_prefix").value + str(self.spawn_number)
            self.spawn_client(turtle_name=turtle_name,
                              x_pose=x_pose, y_pose=y_pose,
                              theta=theta)
        else:
            self.get_logger().info("Spawn_limit Reached ... ")

def main(args=None):
    rclpy.init(args=args)
    
    try:
        node = TurtleSpawner()
        rclpy.spin(node)
    
    except KeyboardInterrupt:
        pass

    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()


