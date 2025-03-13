import rclpy
import math
import time

from rclpy.node import Node
from turtle_pursuit_custom_interfaces.msg import AliveTurtleArray
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from turtle_pursuit_custom_interfaces.srv import KillTurtle
from functools import partial

class TurtleController(Node):
    def __init__(self):
        super().__init__("Turtle_Controller")

        self.declare_parameter('Linear_Gain', 1.5)
        self.declare_parameter('Angular_Gain', 1.0)

        self.kd_linear = 1.0
        self.kd_angular = 0.5

        self.previous_distance = 0.0
        self.previous_angle_error = 0.0
        self.previous_time = time.time()

        self.declare_parameter('Position_Tolerance', 0.7)

        self.declare_parameter("catch_closest_turtle_first", True)

        self.catch_closest_turtle_first_ = self.get_parameter("catch_closest_turtle_first").value
        self.turtle1_pose_subscriber = self.create_subscription(Pose, '/turtle1/pose', self.turtle1_pose_subscriber_callback, 10)

        self.Alive_Turtles_Subscriber = self.create_subscription(AliveTurtleArray, "AliveTurtles", self.Alive_Turtles_Subscriber_Callback, 10)
        self.AliveTurtleArray = None

        self.turtle1_pose = None
        self.turtle_to_catch_ = None
        self.turtle1_cmd_vel_publisher = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)

        self.main_turtle_controller_timer = self.create_timer(1.0, self.main_turtle_controller)

        self.get_logger().info("Turtle Controller Node setup has Completed ... ")


    def Alive_Turtles_Subscriber_Callback(self, msg):
        alive_turtles = list(msg.turtles)

        if self.turtle1_pose == None:
            return

        if len(alive_turtles) > 0:
            if self.catch_closest_turtle_first_:
                closest_turtle = None
                closest_turtle_distance = None

                for turtle in alive_turtles:
                    dist_x = turtle.x_pose - self.turtle1_pose.x
                    dist_y = turtle.y_pose - self.turtle1_pose.y
                    distance = math.sqrt(dist_x*dist_x + dist_y*dist_y)
                    if closest_turtle == None or distance < closest_turtle_distance:
                        closest_turtle = turtle
                        closest_turtle_distance = distance
                self.turtle_to_catch_ = closest_turtle
            else:
                self.turtle_to_catch_ = msg.turtles[0]

    def turtle1_pose_subscriber_callback(self, pose):
        self.turtle1_pose = pose

    def kill_request(self, turtle_name):
        kill_client = self.create_client(KillTurtle, 'kill_turtle')

        while not  kill_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().warn("Waiting for the Kill Server to be online ... ")
        
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
    
    def main_turtle_controller(self):
        if self.turtle1_pose == None or self.turtle_to_catch_ == None:
            return

        dist_x = self.turtle_to_catch_.x_pose - self.turtle1_pose.x
        dist_y = self.turtle_to_catch_.y_pose - self.turtle1_pose.y
        distance = math.sqrt(dist_x * dist_x + dist_y * dist_y)

        msg = Twist()

        if distance > self.get_parameter("Position_Tolerance").value:
            
            # Get current time
            current_time = time.time()
            dt = current_time - self.previous_time
            if dt == 0: dt = 1e-6  # Prevent division by zero

            # Compute errors
            distance_error = distance
            goal_theta = math.atan2(dist_y, dist_x)
            angle_error = goal_theta - self.turtle1_pose.theta

            # Normalize angle error to [-π, π]
            if angle_error > math.pi:
                angle_error -= 2 * math.pi
            elif angle_error < -math.pi:
                angle_error += 2 * math.pi

            # Compute Derivative Terms
            d_distance = (distance_error - self.previous_distance) / dt
            d_angle = (angle_error - self.previous_angle_error) / dt

            # PD Control Equations
            msg.linear.x = (self.get_parameter("Linear_Gain").value * distance_error) + (self.kd_linear * d_distance)
            msg.angular.z = (self.get_parameter("Angular_Gain").value * angle_error) + (self.kd_angular * d_angle)

            # Update previous errors and time
            self.previous_distance = distance_error
            self.previous_angle_error = angle_error
            self.previous_time = current_time
        else:
            # Target reached!
            msg.linear.x = 0.0
            msg.angular.z = 0.0
            self.kill_request(self.turtle_to_catch_.name)
            self.turtle_to_catch_ = None

        self.turtle1_cmd_vel_publisher.publish(msg)

def main(args=None): 
    rclpy.init(args=args)

    try:
        node = TurtleController()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
    
if __name__ == '__main__':
    main()