from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
import os

this_dir = os.path.dirname(os.path.realpath(__file__))

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='beginner_01_hello',
            executable='my_node',
            name='my_node',
            output='screen'
        ),
        ExecuteProcess(
            cmd=['python3', os.path.join(this_dir, '../src/publisher.py')],
            output='screen'
        )
    ])
