import launch
import launch.actions
import launch.substitutions
import launch_ros.actions

def generate_launch_description():
    # Define dynamic parameters for publishing frequency
    pub_freq_param = launch.substitutions.LaunchConfiguration('pub_freq', default='2.0')
    pub_freq_arg = launch.actions.DeclareLaunchArgument('pub_freq', default_value=pub_freq_param, description='Publishing frequency')

    # Create a node for the publisher
    pub_node = launch_ros.actions.Node(
        package='cpp_pubsub',
        executable='talker',
        name='minimal_publisher',
        parameters=[{'publish_frequency': pub_freq_param}]  # Corrected parameter key
    )

    # Create a node for the subscriber
    sub_node = launch_ros.actions.Node(
        package='cpp_pubsub',
        executable='listener',
        name='minimal_subscriber'
    )

    # Group the nodes together
    nodes = [pub_node, sub_node]
    ld = launch.LaunchDescription([pub_freq_arg] + nodes)
    return ld
