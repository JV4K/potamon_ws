from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='potamon-rpi',
            executable='potamon_rpi',
            output='screen',
        )
    ])
