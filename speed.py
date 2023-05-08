import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import time

class VelocityPublisher(Node):
    def __init__(self):
        super().__init__('velocity_publisher')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.timer_ = self.create_timer(0.1, self.publish_velocity)
        self.velocity_ = Twist()
        self.velocity_.linear.x = 0.0
        self.velocity_.angular.z = 0.5
        self.velocity_ = Twist()
        self.velocity_.linear.x = 0.0
        self.velocity_.angular.z = 0.0

    def publish_velocity(self):
        self.publisher_.publish(self.velocity_)
        time.sleep(1)
        self.publisher_.publish(self.velocity2_)

def main(args=None):
    rclpy.init(args=args)
    velocity_publisher = VelocityPublisher()
    rclpy.spin(velocity_publisher)
    velocity_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
