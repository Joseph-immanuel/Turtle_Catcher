import rclpy
import time
from rclpy.node import Node
from turtlesim_custom_msg.msg import AliveTurtleArray
from turtlesim_custom_msg.srv import KillTurtle
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from functools import partial
from math import pi, atan2, sqrt

class MainTurle(Node):
    def __init__(self):
        super().__init__("Turtle_Controller")

        self.declare_parameter('Linear_Gain', 0.7)
        self.declare_parameter('Angular_Gain', 0.2)

        self.declare_parameter('Position_Tolerance', 0.5)
        turtle_array_subscriber = self.create_subscription(AliveTurtleArray, "turtle_directory", self.turtle_array_subscriber_callback, 10)

        self.turtle1_pose_subscriber = self.create_subscription(Pose, '/turtle1/pose', self.turtle1_pose_subscriber_callback, 10)
        self.turtle1_pose = None
        self.target_pose = None

        self.turtle1_cmd_vel_publisher = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)

        self.turtle_array = [] 

        self.prev_linear_velocity, self.prev_angular_velocity = 0.0, 0.0

        self.catch_turtle_timer = self.create_timer(1.0, self.catch_turtle)

    def turtle_array_subscriber_callback(self, turtle_array):
        if list(turtle_array.turtles) == self.turtle_array:
            pass
        else:
            self.turtle_array = list(turtle_array.turtles)
            self.get_logger().info("Turtle Array Updated ... ")

    def turtle1_pose_subscriber_callback(self, pose):
        self.turtle1_pose = pose
    
    def kill_request(self, turtle_name):
        kill_client = self.create_client(KillTurtle, 'kill_turtle')

        while not  kill_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().info("Waiting for the Kill Server to be online ... ")
        
        kill_request = KillTurtle.Request()
        kill_request.name = turtle_name

        future_obj = kill_client.call_async(kill_request)
        future_obj.add_done_callback(partial(self.kill_client_callback, turtle_name=turtle_name))
    
    def kill_client_callback(self, future_response, turtle_name):
        kill_response = future_response.result()

        if kill_response.success:
            self.get_logger().info(f"{turtle_name} killed !! ")

        else:
            self.get_logger().info(f"{turtle_name} kill failed ... ")
    
    def generate_twist_msg(self, current_pose, target_pose):

        dx = target_pose.x_pose - current_pose.x
        dy = target_pose.y_pose - current_pose.y

        distance = sqrt((dx**2) + (dy ** 2))

        if distance > self.get_parameter('Position_Tolerance').value:
            # position
            linear_velocity = self.get_parameter("Linear_Gain").value * distance

            # orientation
            goal_theta =atan2(dy, dx)
            diff = goal_theta - current_pose.theta
            if diff > pi:
                diff -= 2 * pi
            elif diff < -pi:
                diff += 2 * pi

            angular_velocity = self.get_parameter('Angular_Gain').value * diff
        else:
            # target reached!
            linear_velocity = 0.0
            angular_velocity = 0.0

        return linear_velocity, angular_velocity

    def catch_turtle(self):

        if len(self.turtle_array) == 0:
            return
        linear_velocity, angular_velocity = self.generate_twist_msg(self.turtle1_pose, self.turtle_array[0])

        if linear_velocity == 0.0 and angular_velocity == 0.0:
            self.get_logger().info("CAUGHT A TURTLE")
            
            self.kill_request(self.turtle_array[0].name)
        else:
            cmd_vel = Twist()
            cmd_vel.linear.x = linear_velocity
            cmd_vel.angular.z = angular_velocity
            self.turtle1_cmd_vel_publisher.publish(cmd_vel)

def main(args=None): 
    rclpy.init(args=args)

    try:
        node = MainTurle()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
    
if __name__ == '__main__':
    main()

