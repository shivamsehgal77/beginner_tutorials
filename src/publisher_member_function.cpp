// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "cpp_pubsub/srv/modify_message.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;
/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node {
 public:
  MinimalPublisher() : Node("minimal_publisher"), count_(0) {
    this->declare_parameter<double>("publish_frequency",
                                    2.0);  // Default frequency: 2.0 Hz
    double publish_frequency =
        this->get_parameter("publish_frequency").as_double();

    publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
    timer_ = this->create_wall_timer(
        std::chrono::duration<double>(1.0 / publish_frequency),
        std::bind(&MinimalPublisher::timer_callback, this));
    service_ = this->create_service<cpp_pubsub::srv::ModifyMessage>(
        "modify_message",
        std::bind(&MinimalPublisher::modifyMessageCallback, this, _1, _2));

    // Use DEBUG logging level
    RCLCPP_DEBUG_STREAM(this->get_logger(), "Debug message in constructor");

    // Use INFO logging level
    RCLCPP_INFO_STREAM(this->get_logger(), "Node initialized");

    // Use WARN logging level
    RCLCPP_WARN_STREAM(this->get_logger(), "Warning message in constructor");

    // Use ERROR logging level
    RCLCPP_ERROR_STREAM(this->get_logger(), "Error message in constructor");

    // Use FATAL logging level
    RCLCPP_FATAL_STREAM(this->get_logger(),
                        "Fatal error message in constructor");
  }

 private:
  void timer_callback() {
    auto message = std_msgs::msg::String();
    message.data = "Hi, I am Shivam Sehgal! " + std::to_string(count_++);
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    publisher_->publish(message);
  }

  bool modifyMessageCallback(
      const std::shared_ptr<cpp_pubsub::srv::ModifyMessage::Request> request,
      std::shared_ptr<cpp_pubsub::srv::ModifyMessage::Response> response) {
    auto message = std_msgs::msg::String();
    message.data = request->new_message;

    // Use DEBUG logging level
    RCLCPP_DEBUG_STREAM(this->get_logger(),
                        "Debug message in modifyMessageCallback");

    // Use ERROR logging level
    RCLCPP_ERROR_STREAM(this->get_logger(),
                        "Error message in modifyMessageCallback");

    // Use FATAL logging level
    RCLCPP_FATAL_STREAM(this->get_logger(),
                        "Fatal error message in modifyMessageCallback");

    // Use INFO logging level
    RCLCPP_INFO_STREAM(this->get_logger(),
                       "Message modified: '" << message.data << "'");

    publisher_->publish(message);

    response->success = true;
    return true;
  }

  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Service<cpp_pubsub::srv::ModifyMessage>::SharedPtr service_;
  size_t count_;
};

int main(int argc, char* argv[]) {
  rclcpp::init(argc, argv);
  // Use INFO logging level
  RCLCPP_INFO(rclcpp::get_logger("minimal_publisher_main"),
              "Starting MinimalPublisher node");

  rclcpp::spin(std::make_shared<MinimalPublisher>());

  // Use INFO logging level
  RCLCPP_INFO(rclcpp::get_logger("minimal_publisher_main"),
              "Shutting down MinimalPublisher node");

  rclcpp::shutdown();
  return 0;
}
