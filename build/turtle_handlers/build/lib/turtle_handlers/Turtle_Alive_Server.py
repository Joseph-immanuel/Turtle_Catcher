import rclpy
from rclpy.node import Node
from turtlesim_custom_msg.srv import GetTurtleAlive

class Turtle_Alive_Server(Node):
    def __init__(self):
        super().__init__("Turtle_Alive_Server")

        self.get_logger().info("Turtle Alive Server initialized and waiting for request !!!! ")

        self.create_service(GetTurtleAlive, "alive_turtles", self.server_callback)
    
    def get_turtle_count(self):
        active_topics_types = self.get_topic_names_and_types()
        active_topics = [topics[0] for topics in active_topics_types]

        active_topics = filter(lambda x: True if x[-1: -5: -1] == "esop" else False, active_topics)
    
        return len(list(active_topics))
    
    def server_callback(self, service_request, service_response):
        if service_request.request == True:
            self.get_logger().info("Incoming Service Request Recieved for Getting Alive Turtles...")

            service_response.alive_turtles = self.get_turtle_count()

            self.get_logger().info("Service Executed")
            
            return service_response
        else:
            self.get_logger().info("Incoming Empty service request .. Ignoring ... ")
            pass

def main(args=None):
    rclpy.init(args=args)
    try:
        node = Turtle_Alive_Server()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
    