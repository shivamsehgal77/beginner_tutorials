// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cpp_pubsub:srv/ModifyMessage.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__STRUCT_H_
#define CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'new_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ModifyMessage in the package cpp_pubsub.
typedef struct cpp_pubsub__srv__ModifyMessage_Request
{
  rosidl_runtime_c__String new_message;
} cpp_pubsub__srv__ModifyMessage_Request;

// Struct for a sequence of cpp_pubsub__srv__ModifyMessage_Request.
typedef struct cpp_pubsub__srv__ModifyMessage_Request__Sequence
{
  cpp_pubsub__srv__ModifyMessage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_pubsub__srv__ModifyMessage_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ModifyMessage in the package cpp_pubsub.
typedef struct cpp_pubsub__srv__ModifyMessage_Response
{
  bool success;
} cpp_pubsub__srv__ModifyMessage_Response;

// Struct for a sequence of cpp_pubsub__srv__ModifyMessage_Response.
typedef struct cpp_pubsub__srv__ModifyMessage_Response__Sequence
{
  cpp_pubsub__srv__ModifyMessage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_pubsub__srv__ModifyMessage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__STRUCT_H_
