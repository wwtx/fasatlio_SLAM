sudo chmod 777 /dev/ttyUSB0

## start IMU driver
source /home/agx/SLAMhh/IMU/catkin_ws/devel/setup.bash
gnome-terminal -t "IMU_driver" -x bash -c "roslaunch pa_gs02 pa_gs02_driver.launch"

## start Fast_LIO2
sleep 5s
source /home/agx/LIVOX_agx/FAST_LIO/catkin_ws/devel/setup.bash
gnome-terminal -t "Fast_LIO2" -x bash -c "roslaunch fast_lio mapping_avia.launch"

## start Lidar driver
sleep 5s
source /home/agx/LIVOX_agx/livox_ros_driver/catkin_ws/devel/setup.bash
gnome-terminal -t "Lidar_driver" -x bash -c "roslaunch livox_ros_driver livox_lidar_msg.launch"
