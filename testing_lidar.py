#!/usr/bin/env python
from cmath import isinf
import rclpy
import math
import time
import signal
import subprocess
from rclpy.node import Node
import os

from std_msgs.msg import String
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry
from geometry_msgs.msg import *
from geometry_msgs.msg import PoseStamped

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.listener_callback,
            10)
        self.subscription2 = self.create_subscription(
            Odometry,
            '/odom',
            self.listener_callback2,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        range_data_raw=msg.ranges
        range_data_1=list(range_data_raw[315:360])
        range_data_2=list(range_data_raw[0:45])
        for element in range_data_2:
            range_data_1.append(element)
        global range_data
        range_data=range_data_1
        print('range',range_data,'END') ### RANGE DATA PRINTED AND READY TO GO #####

    def listener_callback2(self, msg):
        current_pos = msg.pose.pose
        print('current pose',current_pos,'end') ### CURRENT POSE NEEDS TO BE PARSED - long string. See if possible to just get raw x and y####



def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()