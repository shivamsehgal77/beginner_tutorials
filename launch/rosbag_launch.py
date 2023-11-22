from launch_ros.actions import Node
from launch import LaunchDescription
from launch.conditions import IfCondition
from launch.actions import ExecuteProcess
from launch.actions import DeclareLaunchArgument
from launch.substitutions import TextSubstitution
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    freq_arg = DeclareLaunchArgument('pub_freq', default_value = TextSubstitution(text="500"))
    ros_bag_arg = DeclareLaunchArgument('rosbag_record', default_value = TextSubstitution(text = "True"), choices = ['True', 'False'], description = "Bool for switching ros bag recording on/off")
    
    publisher = Node(
            package='cpp_pubsub',
            executable='talker',
            parameters=[
                {"pub_freq" : LaunchConfiguration('pub_freq')}
            ]
    )
    
    subscriber = Node(
            package='cpp_pubsub',
            executable='listener'
    )
    
    recorder = ExecuteProcess(
        condition=IfCondition(LaunchConfiguration('rosbag_record')),
            cmd=['ros2', 'bag', 'record', '-a'],
        shell=True
    )
    
    return LaunchDescription([
        freq_arg,
        ros_bag_arg,
        publisher,
        subscriber,
        recorder
        
    ])