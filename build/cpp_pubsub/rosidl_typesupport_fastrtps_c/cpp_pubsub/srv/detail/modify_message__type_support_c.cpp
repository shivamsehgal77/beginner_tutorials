// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cpp_pubsub:srv/ModifyMessage.idl
// generated code does not contain a copyright notice
#include "cpp_pubsub/srv/detail/modify_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cpp_pubsub/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cpp_pubsub/srv/detail/modify_message__struct.h"
#include "cpp_pubsub/srv/detail/modify_message__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // new_message
#include "rosidl_runtime_c/string_functions.h"  // new_message

// forward declare type support functions


using _ModifyMessage_Request__ros_msg_type = cpp_pubsub__srv__ModifyMessage_Request;

static bool _ModifyMessage_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ModifyMessage_Request__ros_msg_type * ros_message = static_cast<const _ModifyMessage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: new_message
  {
    const rosidl_runtime_c__String * str = &ros_message->new_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ModifyMessage_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ModifyMessage_Request__ros_msg_type * ros_message = static_cast<_ModifyMessage_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: new_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->new_message.data) {
      rosidl_runtime_c__String__init(&ros_message->new_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->new_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'new_message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_pubsub
size_t get_serialized_size_cpp_pubsub__srv__ModifyMessage_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ModifyMessage_Request__ros_msg_type * ros_message = static_cast<const _ModifyMessage_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name new_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->new_message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ModifyMessage_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cpp_pubsub__srv__ModifyMessage_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_pubsub
size_t max_serialized_size_cpp_pubsub__srv__ModifyMessage_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: new_message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ModifyMessage_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cpp_pubsub__srv__ModifyMessage_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ModifyMessage_Request = {
  "cpp_pubsub::srv",
  "ModifyMessage_Request",
  _ModifyMessage_Request__cdr_serialize,
  _ModifyMessage_Request__cdr_deserialize,
  _ModifyMessage_Request__get_serialized_size,
  _ModifyMessage_Request__max_serialized_size
};

static rosidl_message_type_support_t _ModifyMessage_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ModifyMessage_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_pubsub, srv, ModifyMessage_Request)() {
  return &_ModifyMessage_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cpp_pubsub/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cpp_pubsub/srv/detail/modify_message__struct.h"
// already included above
// #include "cpp_pubsub/srv/detail/modify_message__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ModifyMessage_Response__ros_msg_type = cpp_pubsub__srv__ModifyMessage_Response;

static bool _ModifyMessage_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ModifyMessage_Response__ros_msg_type * ros_message = static_cast<const _ModifyMessage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _ModifyMessage_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ModifyMessage_Response__ros_msg_type * ros_message = static_cast<_ModifyMessage_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_pubsub
size_t get_serialized_size_cpp_pubsub__srv__ModifyMessage_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ModifyMessage_Response__ros_msg_type * ros_message = static_cast<const _ModifyMessage_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ModifyMessage_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cpp_pubsub__srv__ModifyMessage_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_pubsub
size_t max_serialized_size_cpp_pubsub__srv__ModifyMessage_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ModifyMessage_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cpp_pubsub__srv__ModifyMessage_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ModifyMessage_Response = {
  "cpp_pubsub::srv",
  "ModifyMessage_Response",
  _ModifyMessage_Response__cdr_serialize,
  _ModifyMessage_Response__cdr_deserialize,
  _ModifyMessage_Response__get_serialized_size,
  _ModifyMessage_Response__max_serialized_size
};

static rosidl_message_type_support_t _ModifyMessage_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ModifyMessage_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_pubsub, srv, ModifyMessage_Response)() {
  return &_ModifyMessage_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "cpp_pubsub/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cpp_pubsub/srv/modify_message.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ModifyMessage__callbacks = {
  "cpp_pubsub::srv",
  "ModifyMessage",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_pubsub, srv, ModifyMessage_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_pubsub, srv, ModifyMessage_Response)(),
};

static rosidl_service_type_support_t ModifyMessage__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ModifyMessage__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_pubsub, srv, ModifyMessage)() {
  return &ModifyMessage__handle;
}

#if defined(__cplusplus)
}
#endif
