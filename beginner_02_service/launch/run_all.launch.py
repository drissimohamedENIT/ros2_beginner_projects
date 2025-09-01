from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
import os

this_dir = os.path.dirname(os.path.realpath(__file__))

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='beginner_02_service',
            executable='add_two_ints_server',
            name='service_server',
            output='screen'
        ),
        # On lance le client Python via python3 pour éviter les soucis d'exécutable
        ExecuteProcess(
            cmd=['python3', os.path.join(this_dir, '../scripts/add_two_ints_client.py')],
            output='screen'
        )
    ])
