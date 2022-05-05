sudo chmod 777 /dev/ttyUSB0

## start IMU driver
source /home/xaiver/fasatlio_SLAM/IMU/catkin_ws/devel/setup.bash
gnome-terminal -t "IMU_driver" -x bash -c "roslaunch pa_gs02 pa_gs02_driver.launch"

## start Lidar driver
sleep 5s
source /home/agx/SLAMhh/RS_SDK/catkin_ws/devel/setup.bash
gnome-terminal -t "Lidar_driver" -x bash -c "roslaunch rslidar_sdk start.launch"

## start RS_to_Velodyne
sleep 5s
source /home/agx/SLAMhh/LIO-SAM_rslidar22/catkin_ws/devel/setup.bash
gnome-terminal -t "RS_to_Velodyne" -x bash -c "rosrun rs_to_velodyne rs_to_velodyne XYZIRT XYZIRT"

## start LIO_SAM
sleep 5s
source /home/agx/SLAMhh/LIO-SAM_rslidar22/catkin_ws/devel/setup.bash
gnome-terminal -t "LIO_SAM" -x bash -c "roslaunch lio_sam run.launch"

## start Fast_LIO2
sleep 5s
source /home/agx/LIVOX_agx/FAST_LIO/catkin_ws/devel/setup.bash
gnome-terminal -t "Fast_LIO2" -x bash -c "roslaunch fast_lio mapping_avia.launch"

## start Lidar driver
sleep 5s
source /home/agx/LIVOX_agx/livox_ros_driver/catkin_ws/devel/setup.bash
gnome-terminal -t "Lidar_driver" -x bash -c "roslaunch livox_ros_driver livox_lidar_msg.launch"
