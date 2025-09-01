from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="beginner_03_params",
            executable="param_publisher",
            name="param_publisher",
            parameters=[{"message": "Hello initial ROS2 param!"}]
        )
    ])
