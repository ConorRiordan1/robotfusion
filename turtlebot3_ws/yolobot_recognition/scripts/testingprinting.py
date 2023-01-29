x_pose = str(1.0)
y_pose = str(1.0)
z_pose = str(0.0)
message_final= '''ros2 topic pub /goal_pose geometry_msgs/PoseStamped "{header: {stamp: ''' + '''{sec: 0}, frame_id: 'map'}, pose: ''' + '''{position: {x: ''' + x_pose + ''', y: ''' + y_pose + ''', z: ''' + z_pose + '''}, orientation: {w: 1.0}}}"'''
print(message_final)