import rclpy # Import the ROS client library for Python
from rclpy.node import Node # Enables the use of rclpy's Node class
from std_msgs.msg import Float64MultiArray # Enable use of std_msgs/Float64MultiArray message
  
class GoalPublisher(Node):
  """
  Create a GoalPublisher class, which is a subclass of the Node class.
  The class publishes the goal positions (x,y) for a mobile robot in a Gazebo maze world.
  """
   
  def __init__(self):
    """
    Class constructor to set up the node
    """
    
    # Initiate the Node class's constructor and give it a name
    super().__init__('goal_publisher')
      
    # Create publisher(s)      
    self.publisher_goal_x_values = self.create_publisher(Float64MultiArray, '/goal_x_values', 10)
    self.publisher_goal_y_values = self.create_publisher(Float64MultiArray, '/goal_y_values', 10)
      
    # Call the callback functions every 0.5 seconds
    timer_period = 0.5
    self.timer1 = self.create_timer(timer_period, self.get_x_values)
    self.timer2 = self.create_timer(timer_period, self.get_y_values)
     
    # Initialize a counter variable
    self.i = 0 
    self.j = 0
      
    # List the goal destinations
    # We create a list of the (x,y) coordinate goals
    self.goal_x_coordinates = [ 0.0, 3.0, 0.0, -1.5, -1.5,  4.5, 0.0]
    self.goal_y_coordinates = [-4.0, 1.0, 1.5,  1.0, -3.0, -4.0, 0.0] 
    
  def get_x_values(self):
    """
    Callback function.
    """
    msg = Float64MultiArray()
    msg.data = self.goal_x_coordinates
     
    # Publish the x coordinates to the topic
    self.publisher_goal_x_values.publish(msg)
      
    # Increment counter variable
    self.i += 1
      
  def get_y_values(self):
    """
    Callback function.
    """
    msg = Float64MultiArray()
    msg.data = self.goal_y_coordinates
     
    # Publish the y coordinates to the topic
    self.publisher_goal_y_values.publish(msg)
      
    # Increment counter variable
    self.j += 1
      
def main(args=None):
  
  # Initialize the rclpy library
  rclpy.init(args=args)
  
  # Create the node
  goal_publisher = GoalPublisher()
  
  # Spin the node so the callback function is called.
  # Publish any pending messages to the topics.
  rclpy.spin(goal_publisher)
  
  # Destroy the node explicitly
  # (optional - otherwise it will be done automatically
  # when the garbage collector destroys the node object)
  goal_publisher.destroy_node()
  
  # Shutdown the ROS client library for Python
  rclpy.shutdown()
  
if __name__ == '__main__':
  main()
