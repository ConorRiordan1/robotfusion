# robotfusion
Fusion of LiDAR and Computer Vision for Autonomous Navigation in Gazebo

notes:
- everything within the "turtlebot3_ws" folder should be enough for simulation in gazebo. everything outside of the folder is mainly related to real world application, with the exception of the gazebo models I made myself.
- ROS2 Foxy will not run on a raspberry pi 4 w/ GUI. Use Humble instead.
- If you cannot get the camera to connect to the raspberry pi, it is likley an issue with the permissions on your ports
- I found using opencv darknet to be the easiest method to apply computer vision. Ultralytics YOLOv5 is also good, but i struggled to implement on raspberry pi.
- use Groot when dealing with behaviour trees. This can be difficult to set up.
- I trained YOLO using google colab. you can also do if you have a GPU.
- to visualize LiDAR in RVIZ, make sure laserscan is set to best_attempt
- Use openCV to capture images with a raspberry pi camera on an ubuntu operating system. Other methods often require raspberry pi OS. This method will not work with all raspberry pi camera versions. It might only work on a raspberry pi cam v.2 or v.3

Here are some sources to check out:
- https://docs.ros.org/en/humble/index.html
- 
-https://emanual.robotis.com/docs/en/platform/turtlebot3/overview/

- https://www.youtube.com/watch?v=8w3xhG1GPdo - good quick start video

- https://automaticaddison.com/set-up-lidar-for-a-simulated-mobile-robot-in-ros-2/ This author in author/website in general is useful. I found his code has errors and is difficult to run, but it gives a good general idea.

- https://www.youtube.com/watch?v=594Gmkdo-_s - good video showing how to get YOLO working in gazebo

- https://app.theconstructsim.com/ - very useful general source. Have to pay for all their information and they have full length courses. Lots of information here about how to apply ML. This also explans behaviour trees very well. Gives instructions on how to use Groot. I probably would have started here if I were to do it over.

- https://navigation.ros.org/ - navigation2 documentation

- https://ros2-industrial-workshop.readthedocs.io/en/latest/_source/navigation/ROS2-Cartographer.html - you need this for nav2 to work. Make sure your map.yaml files contain the correct information.

- https://aws.amazon.com/robomaker/resources/train-a-robot-using-reinforcement-learning-project/ - amazon has some resorces on this topic


areas I am interested in exploring in the future:
- Combining everything into one behaviour tree and running the robot would only require running navigation2
- Taking a machine learning approach
- examining advisarial AI as applied to an ML approach
- comparing a behavior tree approach to a ML approach

