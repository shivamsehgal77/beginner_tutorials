// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_pubsub:srv/ModifyMessage.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__TRAITS_HPP_
#define CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cpp_pubsub/srv/detail/modify_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cpp_pubsub
{

namespace srv
{

inline void to_flow_style_yaml(
  const ModifyMessage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: new_message
  {
    out << "new_message: ";
    rosidl_generator_traits::value_to_yaml(msg.new_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ModifyMessage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: new_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_message: ";
    rosidl_generator_traits::value_to_yaml(msg.new_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ModifyMessage_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cpp_pubsub

namespace rosidl_generator_traits
{

[[deprecated("use cpp_pubsub::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_pubsub::srv::ModifyMessage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_pubsub::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_pubsub::srv::to_yaml() instead")]]
inline std::string to_yaml(const cpp_pubsub::srv::ModifyMessage_Request & msg)
{
  return cpp_pubsub::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_pubsub::srv::ModifyMessage_Request>()
{
  return "cpp_pubsub::srv::ModifyMessage_Request";
}

template<>
inline const char * name<cpp_pubsub::srv::ModifyMessage_Request>()
{
  return "cpp_pubsub/srv/ModifyMessage_Request";
}

template<>
struct has_fixed_size<cpp_pubsub::srv::ModifyMessage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cpp_pubsub::srv::ModifyMessage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cpp_pubsub::srv::ModifyMessage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cpp_pubsub
{

namespace srv
{

inline void to_flow_style_yaml(
  const ModifyMessage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ModifyMessage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ModifyMessage_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cpp_pubsub

namespace rosidl_generator_traits
{

[[deprecated("use cpp_pubsub::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_pubsub::srv::ModifyMessage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_pubsub::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_pubsub::srv::to_yaml() instead")]]
inline std::string to_yaml(const cpp_pubsub::srv::ModifyMessage_Response & msg)
{
  return cpp_pubsub::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_pubsub::srv::ModifyMessage_Response>()
{
  return "cpp_pubsub::srv::ModifyMessage_Response";
}

template<>
inline const char * name<cpp_pubsub::srv::ModifyMessage_Response>()
{
  return "cpp_pubsub/srv/ModifyMessage_Response";
}

template<>
struct has_fixed_size<cpp_pubsub::srv::ModifyMessage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cpp_pubsub::srv::ModifyMessage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cpp_pubsub::srv::ModifyMessage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_pubsub::srv::ModifyMessage>()
{
  return "cpp_pubsub::srv::ModifyMessage";
}

template<>
inline const char * name<cpp_pubsub::srv::ModifyMessage>()
{
  return "cpp_pubsub/srv/ModifyMessage";
}

template<>
struct has_fixed_size<cpp_pubsub::srv::ModifyMessage>
  : std::integral_constant<
    bool,
    has_fixed_size<cpp_pubsub::srv::ModifyMessage_Request>::value &&
    has_fixed_size<cpp_pubsub::srv::ModifyMessage_Response>::value
  >
{
};

template<>
struct has_bounded_size<cpp_pubsub::srv::ModifyMessage>
  : std::integral_constant<
    bool,
    has_bounded_size<cpp_pubsub::srv::ModifyMessage_Request>::value &&
    has_bounded_size<cpp_pubsub::srv::ModifyMessage_Response>::value
  >
{
};

template<>
struct is_service<cpp_pubsub::srv::ModifyMessage>
  : std::true_type
{
};

template<>
struct is_service_request<cpp_pubsub::srv::ModifyMessage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cpp_pubsub::srv::ModifyMessage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__TRAITS_HPP_
