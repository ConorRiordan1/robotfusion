import rclpy
import math
from rclpy.node import Node

from std_msgs.msg import String
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry
global masterlist

masterlist =[] #master list holds yolo data for each new detection. does not work for repeats.
global objectnames
objectnames = [] # temporary holding list


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.listener_callback,
            10)
          # prevent unused variable warning
        self.publisher_ = self.create_publisher(String, 'topic', 10)
     

        self.subscription2 = self.create_subscription(
            String,
            "/objects",
            self.listener_callback2,
            10)

        self.subscription2
        self.subscription

        self.subscription3 = self.create_subscription(
            Odometry,
            '/odom',
            self.listener_callback3,
            10)
        self.subscription3

    
        self.object_creator()




        


        


    def object_creator(self):
            print('hi')



    def timer_callback(self):
        print("timer_callback")
        msg = String()
        msg.data = "Hello World"
        self.publisher_.publish(msg)


    def listener_callback(self, msg):
        range_data_raw=msg.ranges
        #print(range_data_raw,"\n")
        range_data_1=list(range_data_raw[315:360])
        range_data_2=list(range_data_raw[0:45])
        for element in range_data_2:
            range_data_1.append(element)
        global range_data
        range_data=range_data_1
        print(len(range_data))
        #print(range_data) ### RANGE DATA PRINTED AND READY TO GO ####
        for element in range_data:
            if element < 100: # no infinity
                for list1 in masterlist:
                    if len(list1)<4:
                        distanceofobject = float(range_data[lidarindex-1])
                        list1.append(distanceofobject)
                        angle = float((float(lidarindex)-45) * 3.14/180)
                        x_new = float(xcoordinate) + float(distanceofobject)* math.cos(angle)
                        y_new = float(ycoordinate) + float(distanceofobject) * math.sin(angle)
                        list1.append(str(x_new))
                        list1.append(str(y_new))
                        self.timer_callback()
                #print(float(range_data.index(element))-45,'+',element) #prints angle of detection and distance
                global lidar_location
                lidar_location = (float(range_data.index(element)),element)
                #print(range_data)
                ##print(lidar_location)
        



    def listener_callback2(self,msg):
        string_msg = str(msg)
        real_string=""
        #print(string_msg)
        for element in range(0, len(string_msg)):
            if string_msg[element].isdigit():
                    #print(string_msg[element])
                    real_string = real_string + string_msg[element]
            if string_msg[element] == '.':
                real_string=real_string + ','
                last_period = element + 7
        real_string = real_string[2:]
        real_string = real_string.split(',')
        #print(real_string[0],real_string[2],'relevent yolo coordinates') # 2d coordiantes
        math_variable1 = float(real_string[0])##hold in variables for math because I was getting errors
        math_variable2 = float(real_string[2])
        average_yolo_position = (math_variable1 + math_variable2)/2
        #average_yolo_position = (float((real_string[0]) + float(real_string[2]))/2)
        name = string_msg[last_period:-4]
        #print(name)#name. This works with frisbee and fire hydarn
        global final_camera_data
        final_camera_data = [name,average_yolo_position]
        #print(final_camera_data)
        if name not in objectnames:
            objectnames.append(name)
            global lidarindex
            lidarindex = (-int((average_yolo_position -320) * (27/320)))+45
            print(lidarindex, "lidarindex")
            if lidarindex <45:
                lidarindex = lidarindex -3
            final_camera_data.append(lidarindex)
            masterlist.append(final_camera_data)
        ##print(masterlist) 
    

    def listener_callback3(self,msg):
        global current_pos
        global xcoordinate
        global ycoordinate
        current_pos = str(msg.pose.pose)
        relevence = 0
        xcoordinate = ''
        for element in range(0,len(current_pos)):
            if current_pos[element] == "x":
                relevence = 1
            elif current_pos[element] == ",":
                relevence = 0
                ycoordinate = current_pos[element+4:element+12]
                break
            elif relevence == 1:
                xcoordinate = xcoordinate + current_pos[element]
        #print(current_pos) ### CURRENT POSE NEEDS TO BE PARSED - long string. See if possible to just get raw x and y####
        xcoordinate = xcoordinate[1:]
        ##print(xcoordinate,'xcoordiante AT PRESENT')
        ##print(ycoordinate,'ycoordinate at present' ) # I have x and Y cooridnate

        

    


    


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()
    minimal_subscriber.object_creator()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()