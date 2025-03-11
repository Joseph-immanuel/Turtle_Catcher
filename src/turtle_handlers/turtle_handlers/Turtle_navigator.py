import rclpy
from rclpy.node import Node
from turtlesim_custom_msg.srv import NavigateTurtle
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from math import sqrt, atan2, pi


class TurtleNavigator(Node):
    def __init__(self):
        super().__init__("TurtleNavigator")

        navigator_service = self.create_service(NavigateTurtle, 'navigate_turtle', self.turtle_navigation)

        self.declare_parameter('Linear_Gain', 2)
        self.declare_parameter('Angular_Gain', 0.5)

        self.declare_parameter('Position_Tolerance', 0.5)
        self.turtle1_pose_subscriber = self.create_subscription(Pose, '/turtle1/pose', self.turtle1_pose_subscriber_callback, 10)
        self.turtle1_cmd_vel_publisher = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        self.turtle1_pose = None
        self.target_pose = None

    def turtle1_pose_subscriber_callback(self, turtle_pose):
        self.turtle1_pose = turtle_pose
    
    def generate_twist_msg(self, current_pose, target_pose):

        dx = target_pose.x - current_pose.x
        dy = target_pose.y  - current_pose.y

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

    def navigate(self, target_pose):
        if linear_velocity == 0.0 and angular_velocity == 0.0:
            return True
        else:
            linear_velocity, angular_velocity = self.generate_twist_msg(self.turtle1_pose, target_pose)
            cmd_vel = Twist()
            cmd_vel.linear.x = linear_velocity
            cmd_vel.angular.z = angular_velocity
            self.turtle1_cmd_vel_publisher.publish(cmd_vel)
    
    def turtle_navigation(self, request, response):
        target_pose = Pose()
        target_pose.x = request.x_pose
        target_pose.y = request.y_pose
        target_pose.theta = request.theta 

        result = self.navigate(target_pose)

        while not result:
            self.navigate

