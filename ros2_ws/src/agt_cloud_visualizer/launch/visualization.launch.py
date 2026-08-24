from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='agt_cloud_visualizer',
            executable='cloud_republisher',
            name='cloud_republisher',
            output='screen',
            remappings=[
                ('input_cloud', '/livox/lidar'),
                ('output_cloud', '/agt/cloud/visualization'),
            ],
        ),
    ])
