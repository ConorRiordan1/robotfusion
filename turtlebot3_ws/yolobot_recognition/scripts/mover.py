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
class ObjectSubscriber(Node):
    global list_of_objects
    list_of_objects = []
    def __init__(self):
        #super().__init__('Object_subscriber')
        #self.publisher_ = self.create_publisher(PoseStamped,'/goal_pose',10) # This is node final X and Y will be published to

        self.subscription2 = self.create_subscription(
            LaserScan,
            '/scan',
            self.listener_callback2,
            10)
        #LiDAR data

        self.subscription = self.create_subscription(
            String,
            '/objects',
            self.listener_callback,
            10)
        self.subscription2
        self.subscription
         # This should get a list of seen objects from ros_recognition_yolo.py

    
        


        self.subscription3 = self.create_subscription(
            Odometry,
            '/odom',
            self.listener_callback3,
            10)
        self.subscription3



    
        
            
    def listener_callback(self, msg): # objects
        #self.get_logger().info('I heard: "%s"' % msg.data)
        data_recieved = msg.data
        #self.data_parser(data_recieved)#### PARSING OBJECT DATA BECAUSE?- not formatted correctly#####
        print(data_recieved)


    def listener_callback2(self,msg): # for LiDar
        print("here")
        range_data_raw=msg.ranges
        range_data_1=list(range_data_raw[315:360])
        range_data_2=list(range_data_raw[0:45])
        for element in range_data_2:
            range_data_1.append(element)
        global range_data
        range_data=range_data_1
        print(range_data,"range") ### RANGE DATA PRINTED AND READY TO GO #####

    def listener_callback3(self,msg):
        global current_pos
        current_pos = msg.pose.pose
        print(current_pos) ### CURRENT POSE NEEDS TO BE PARSED - long string. See if possible to just get raw x and y####

'''
    def data_parser(self,data1,tuple_of_objects=list_of_objects):
        n1=10
        #print(data1)
        def x1_maker(n1,data,real_x1=''):
            while data[n1]!= '.':
                real_x1 += data1[n1]
                n1=n1+1
            return int(real_x1)
        
        n2=24
        def y1_maker(n2,data,real_y1=''):
            while data[n2]!= '.':
                real_y1 += data1[n2]
                n2=n2+1
            return real_y1

        n3=36
        def x2_maker(n3,data,real_x2=''):
            while data[n3]!= '.':
                real_x2 =real_x2+data1[n3]
                n3=n3+1
            return real_x2
        n4=50
        def y2_maker(n4,data,real_y2=''):
            while data[n4]!= '.':
                real_y2 += data1[n4]
                n4=n4+1
            return real_y2
        n5=-8
        def name_maker(n5,data,real_name=''):
            while data[n5]!='"':
                real_name += data1[n5]
                n5=n5+1
            return real_name
        ###print('X1:',x1_maker(n1,data1),'y1:',y1_maker(n2,data1),'X2:',x2_maker(n3,data1),'Y2:',y2_maker(n4,data1),'name:',name_maker(n5,data1))### COORIDINATES OF BOX AND NAME
        global destinations
        destinations=(x1_maker(n1,data1),x2_maker(n3,data1))### COMPUTER VISION X COORDINATES
        global named_object
        named_object=name_maker(n5,data1)##NAme of object
        list_of_objects=[(name_maker(n5,data1),x1_maker(n1,data1),x2_maker(n3,data1))]

        try:
            #print(list_of_objects,'lists')
            #print(range_data,'range')
            positions = mover(list_of_objects,range_data)
            #print(list_of_objects,'lists2')
            #print(range_data,'range')
            #print(list_of_objects)
            #print(positions,'positions')
            goal_pose = PoseStamped()
            goal_pose.header.frame_id = 'map'
            goal_pose.header.stamp = self.get_clock().now().to_msg()
            goal_pose.pose.position.x = positions[0]
            goal_pose.pose.position.y = positions[1]
            goal_pose.pose.position.z = 0.0
            goal_pose.pose.orientation.w = 1.0
            #print(goal_pose)
            time.sleep(5)
            self.publisher_.publish(goal_pose)
        except:
            pass
    
        for tuple in list_of_objects:
            if tuple[0] == named_object:
                    break#### IF same objecy is detected and within 5% distance disregard it- likley a copy
            else:
                list_of_objects.append((named_object,x1_maker(n1,data1),x2_maker(n3,data1))) # Else add it to running list of objects
                print(named_object)
                time.sleep(5)
    

'''
    





        
   

def main(args=None):
    rclpy.init(args=args)

    Object_Subscriber = ObjectSubscriber()

    rclpy.spin(Object_Subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    Object_Subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()