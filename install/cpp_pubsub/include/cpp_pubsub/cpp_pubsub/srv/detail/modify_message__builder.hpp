// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_pubsub:srv/ModifyMessage.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__BUILDER_HPP_
#define CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cpp_pubsub/srv/detail/modify_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace cpp_pubsub {

namespace srv {

namespace builder {

class Init_ModifyMessage_Request_new_message {
 public:
  Init_ModifyMessage_Request_new_message()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  ::cpp_pubsub::srv::ModifyMessage_Request new_message(
      ::cpp_pubsub::srv::ModifyMessage_Request::_new_message_type arg) {
    msg_.new_message = std::move(arg);
    return std::move(msg_);
  }

 private:
  ::cpp_pubsub::srv::ModifyMessage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template <typename MessageType>
auto build();

template <>
inline auto build<::cpp_pubsub::srv::ModifyMessage_Request>() {
  return cpp_pubsub::srv::builder::Init_ModifyMessage_Request_new_message();
}

}  // namespace cpp_pubsub

namespace cpp_pubsub {

namespace srv {

namespace builder {

class Init_ModifyMessage_Response_success {
 public:
  Init_ModifyMessage_Response_success()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  ::cpp_pubsub::srv::ModifyMessage_Response success(
      ::cpp_pubsub::srv::ModifyMessage_Response::_success_type arg) {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

 private:
  ::cpp_pubsub::srv::ModifyMessage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template <typename MessageType>
auto build();

template <>
inline auto build<::cpp_pubsub::srv::ModifyMessage_Response>() {
  return cpp_pubsub::srv::builder::Init_ModifyMessage_Response_success();
}

}  // namespace cpp_pubsub

#endif  // CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__BUILDER_HPP_
