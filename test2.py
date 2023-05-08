import rclpy
from rclpy.node import Node
import time
from geometry_msgs.msg import Twist
list1=[]

class MinimalPublisher(Node):

    def __init__(self):
        with open('data1.txt') as file:
            for line in file:
                line=line.strip()
                line=line.split(',')
                list1.append(line)
            print(list1)
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0.0

    def timer_callback(self):
        self.i= self.i
        for element in list1:
            twist = Twist()
            twist.linear.x = self.i
            try:
                twist.linear.x = float(element[0])
                twist.linear.y = float(element[1])
                twist.linear.z = float(element[2])
                twist.angular.x = float(element[3])
                twist.angular.y = float(element[4])
                twist.angular.z = float(element[5])
                self.publisher_.publish(twist)
                time.sleep(0.1)
                

            except:
                pass


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()