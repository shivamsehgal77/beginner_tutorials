// generated from
// rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em with input
// from cpp_pubsub:srv/ModifyMessage.idl generated code does not contain a
// copyright notice
#include <limits>
#include <stdexcept>
#include <string>

#include "cpp_pubsub/srv/detail/modify_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cpp_pubsub/srv/detail/modify_message__struct.hpp"
#include "fastcdr/Cdr.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions

namespace cpp_pubsub {

namespace srv {

namespace typesupport_fastrtps_cpp {

bool ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_pubsub
cdr_serialize(const cpp_pubsub::srv::ModifyMessage_Request &ros_message,
              eprosima::fastcdr::Cdr &cdr) {
  // Member: new_message
  cdr << ros_message.new_message;
  return true;
}

bool ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_pubsub
cdr_deserialize(eprosima::fastcdr::Cdr &cdr,
                cpp_pubsub::srv::ModifyMessage_Request &ros_message) {
  // Member: new_message
  cdr >> ros_message.new_message;

  return true;
}

size_t ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_pubsub
get_serialized_size(const cpp_pubsub::srv::ModifyMessage_Request &ros_message,
                    size_t current_alignment) {
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: new_message
  current_alignment +=
      padding + eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
      (ros_message.new_message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_pubsub
max_serialized_size_ModifyMessage_Request(bool &full_bounded, bool &is_plain,
                                          size_t current_alignment) {
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: new_message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
          padding +
          eprosima::fastcdr::Cdr::alignment(current_alignment, padding) + 1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ModifyMessage_Request__cdr_serialize(
    const void *untyped_ros_message, eprosima::fastcdr::Cdr &cdr) {
  auto typed_message =
      static_cast<const cpp_pubsub::srv::ModifyMessage_Request *>(
          untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ModifyMessage_Request__cdr_deserialize(eprosima::fastcdr::Cdr &cdr,
                                                    void *untyped_ros_message) {
  auto typed_message = static_cast<cpp_pubsub::srv::ModifyMessage_Request *>(
      untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ModifyMessage_Request__get_serialized_size(
    const void *untyped_ros_message) {
  auto typed_message =
      static_cast<const cpp_pubsub::srv::ModifyMessage_Request *>(
          untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ModifyMessage_Request__max_serialized_size(char &bounds_info) {
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val =
      max_serialized_size_ModifyMessage_Request(full_bounded, is_plain, 0);

  bounds_info = is_plain
                    ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE
                    : full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE
                                   : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ModifyMessage_Request__callbacks = {
    "cpp_pubsub::srv",
    "ModifyMessage_Request",
    _ModifyMessage_Request__cdr_serialize,
    _ModifyMessage_Request__cdr_deserialize,
    _ModifyMessage_Request__get_serialized_size,
    _ModifyMessage_Request__max_serialized_size};

static rosidl_message_type_support_t _ModifyMessage_Request__handle = {
    rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    &_ModifyMessage_Request__callbacks,
    get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cpp_pubsub

namespace rosidl_typesupport_fastrtps_cpp {

template <>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cpp_pubsub const
    rosidl_message_type_support_t *
    get_message_type_support_handle<cpp_pubsub::srv::ModifyMessage_Request>() {
  return &cpp_pubsub::srv::typesupport_fastrtps_cpp::
      _ModifyMessage_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C" {
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_fastrtps_cpp, cpp_pubsub, srv, ModifyMessage_Request)() {
  return &cpp_pubsub::srv::typesupport_fastrtps_cpp::
      _ModifyMessage_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"

// forward declaration of message dependencies and their conversion functions

namespace cpp_pubsub {

namespace srv {

namespace typesupport_fastrtps_cpp {

bool ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_pubsub
cdr_serialize(const cpp_pubsub::srv::ModifyMessage_Response &ros_message,
              eprosima::fastcdr::Cdr &cdr) {
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_pubsub
cdr_deserialize(eprosima::fastcdr::Cdr &cdr,
                cpp_pubsub::srv::ModifyMessage_Response &ros_message) {
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_pubsub
get_serialized_size(const cpp_pubsub::srv::ModifyMessage_Response &ros_message,
                    size_t current_alignment) {
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size + eprosima::fastcdr::Cdr::alignment(
                                         current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_pubsub
max_serialized_size_ModifyMessage_Response(bool &full_bounded, bool &is_plain,
                                           size_t current_alignment) {
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ModifyMessage_Response__cdr_serialize(
    const void *untyped_ros_message, eprosima::fastcdr::Cdr &cdr) {
  auto typed_message =
      static_cast<const cpp_pubsub::srv::ModifyMessage_Response *>(
          untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ModifyMessage_Response__cdr_deserialize(
    eprosima::fastcdr::Cdr &cdr, void *untyped_ros_message) {
  auto typed_message = static_cast<cpp_pubsub::srv::ModifyMessage_Response *>(
      untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ModifyMessage_Response__get_serialized_size(
    const void *untyped_ros_message) {
  auto typed_message =
      static_cast<const cpp_pubsub::srv::ModifyMessage_Response *>(
          untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ModifyMessage_Response__max_serialized_size(char &bounds_info) {
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val =
      max_serialized_size_ModifyMessage_Response(full_bounded, is_plain, 0);

  bounds_info = is_plain
                    ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE
                    : full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE
                                   : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ModifyMessage_Response__callbacks = {
    "cpp_pubsub::srv",
    "ModifyMessage_Response",
    _ModifyMessage_Response__cdr_serialize,
    _ModifyMessage_Response__cdr_deserialize,
    _ModifyMessage_Response__get_serialized_size,
    _ModifyMessage_Response__max_serialized_size};

static rosidl_message_type_support_t _ModifyMessage_Response__handle = {
    rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    &_ModifyMessage_Response__callbacks,
    get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cpp_pubsub

namespace rosidl_typesupport_fastrtps_cpp {

template <>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cpp_pubsub const
    rosidl_message_type_support_t *
    get_message_type_support_handle<cpp_pubsub::srv::ModifyMessage_Response>() {
  return &cpp_pubsub::srv::typesupport_fastrtps_cpp::
      _ModifyMessage_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C" {
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_fastrtps_cpp, cpp_pubsub, srv,
    ModifyMessage_Response)() {
  return &cpp_pubsub::srv::typesupport_fastrtps_cpp::
      _ModifyMessage_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace cpp_pubsub {

namespace srv {

namespace typesupport_fastrtps_cpp {

static service_type_support_callbacks_t _ModifyMessage__callbacks = {
    "cpp_pubsub::srv",
    "ModifyMessage",
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_cpp, cpp_pubsub, srv,
        ModifyMessage_Request)(),
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_cpp, cpp_pubsub, srv,
        ModifyMessage_Response)(),
};

static rosidl_service_type_support_t _ModifyMessage__handle = {
    rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    &_ModifyMessage__callbacks,
    get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cpp_pubsub

namespace rosidl_typesupport_fastrtps_cpp {

template <>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cpp_pubsub const
    rosidl_service_type_support_t *
    get_service_type_support_handle<cpp_pubsub::srv::ModifyMessage>() {
  return &cpp_pubsub::srv::typesupport_fastrtps_cpp::_ModifyMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C" {
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_fastrtps_cpp, cpp_pubsub, srv, ModifyMessage)() {
  return &cpp_pubsub::srv::typesupport_fastrtps_cpp::_ModifyMessage__handle;
}

#ifdef __cplusplus
}
#endif
