该项目基于开源的小车，由于我在这个方案里自己添加了SLAM和NAV2，我也就基于这个项目把小车改成了waffle


启动仿真：
source /opt/ros/humble/setup.bash
conda deactivate
source ~/ackermann_ws/install/setup.bash
export LIBGL_ALWAYS_SOFTWARE=1

ros2 launch ackermann_simulation sim.launch.py
启动 SLAM 和 Nav2：
source /opt/ros/humble/setup.bash
conda deactivate
source ~/ackermann_ws/install/setup.bash

ros2 launch ackermann_bringup slam_nav.launch.py
键盘控制：
ros2 run teleop_twist_keyboard teleop_twist_keyboard
三点自动导航：
ros2 run ackermann_bringup waypoint_follow.py

原来的小车：ros2 launch ackermann_simulation sim.launch.py robot_model:=waffle
