from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='agt_cloud_visualizer',
            executable='cloud_republisher',
            name='cloud_republisher',
            output='screen',
            parameters=[{
                'input_topic': '/livox/lidar',
                'output_topic': '/agt/cloud/visualization'
            }]
        )
    ])
