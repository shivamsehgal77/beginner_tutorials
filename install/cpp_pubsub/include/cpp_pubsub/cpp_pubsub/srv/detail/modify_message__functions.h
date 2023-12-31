// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cpp_pubsub:srv/ModifyMessage.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__FUNCTIONS_H_
#define CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cpp_pubsub/msg/rosidl_generator_c__visibility_control.h"

#include "cpp_pubsub/srv/detail/modify_message__struct.h"

/// Initialize srv/ModifyMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_pubsub__srv__ModifyMessage_Request
 * )) before or use
 * cpp_pubsub__srv__ModifyMessage_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__srv__ModifyMessage_Request__init(cpp_pubsub__srv__ModifyMessage_Request * msg);

/// Finalize srv/ModifyMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
void
cpp_pubsub__srv__ModifyMessage_Request__fini(cpp_pubsub__srv__ModifyMessage_Request * msg);

/// Create srv/ModifyMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_pubsub__srv__ModifyMessage_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
cpp_pubsub__srv__ModifyMessage_Request *
cpp_pubsub__srv__ModifyMessage_Request__create();

/// Destroy srv/ModifyMessage message.
/**
 * It calls
 * cpp_pubsub__srv__ModifyMessage_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
void
cpp_pubsub__srv__ModifyMessage_Request__destroy(cpp_pubsub__srv__ModifyMessage_Request * msg);

/// Check for srv/ModifyMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__srv__ModifyMessage_Request__are_equal(const cpp_pubsub__srv__ModifyMessage_Request * lhs, const cpp_pubsub__srv__ModifyMessage_Request * rhs);

/// Copy a srv/ModifyMessage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__srv__ModifyMessage_Request__copy(
  const cpp_pubsub__srv__ModifyMessage_Request * input,
  cpp_pubsub__srv__ModifyMessage_Request * output);

/// Initialize array of srv/ModifyMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_pubsub__srv__ModifyMessage_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__srv__ModifyMessage_Request__Sequence__init(cpp_pubsub__srv__ModifyMessage_Request__Sequence * array, size_t size);

/// Finalize array of srv/ModifyMessage messages.
/**
 * It calls
 * cpp_pubsub__srv__ModifyMessage_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
void
cpp_pubsub__srv__ModifyMessage_Request__Sequence__fini(cpp_pubsub__srv__ModifyMessage_Request__Sequence * array);

/// Create array of srv/ModifyMessage messages.
/**
 * It allocates the memory for the array and calls
 * cpp_pubsub__srv__ModifyMessage_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
cpp_pubsub__srv__ModifyMessage_Request__Sequence *
cpp_pubsub__srv__ModifyMessage_Request__Sequence__create(size_t size);

/// Destroy array of srv/ModifyMessage messages.
/**
 * It calls
 * cpp_pubsub__srv__ModifyMessage_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
void
cpp_pubsub__srv__ModifyMessage_Request__Sequence__destroy(cpp_pubsub__srv__ModifyMessage_Request__Sequence * array);

/// Check for srv/ModifyMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__srv__ModifyMessage_Request__Sequence__are_equal(const cpp_pubsub__srv__ModifyMessage_Request__Sequence * lhs, const cpp_pubsub__srv__ModifyMessage_Request__Sequence * rhs);

/// Copy an array of srv/ModifyMessage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__srv__ModifyMessage_Request__Sequence__copy(
  const cpp_pubsub__srv__ModifyMessage_Request__Sequence * input,
  cpp_pubsub__srv__ModifyMessage_Request__Sequence * output);

/// Initialize srv/ModifyMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_pubsub__srv__ModifyMessage_Response
 * )) before or use
 * cpp_pubsub__srv__ModifyMessage_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__srv__ModifyMessage_Response__init(cpp_pubsub__srv__ModifyMessage_Response * msg);

/// Finalize srv/ModifyMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
void
cpp_pubsub__srv__ModifyMessage_Response__fini(cpp_pubsub__srv__ModifyMessage_Response * msg);

/// Create srv/ModifyMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_pubsub__srv__ModifyMessage_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
cpp_pubsub__srv__ModifyMessage_Response *
cpp_pubsub__srv__ModifyMessage_Response__create();

/// Destroy srv/ModifyMessage message.
/**
 * It calls
 * cpp_pubsub__srv__ModifyMessage_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
void
cpp_pubsub__srv__ModifyMessage_Response__destroy(cpp_pubsub__srv__ModifyMessage_Response * msg);

/// Check for srv/ModifyMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__srv__ModifyMessage_Response__are_equal(const cpp_pubsub__srv__ModifyMessage_Response * lhs, const cpp_pubsub__srv__ModifyMessage_Response * rhs);

/// Copy a srv/ModifyMessage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__srv__ModifyMessage_Response__copy(
  const cpp_pubsub__srv__ModifyMessage_Response * input,
  cpp_pubsub__srv__ModifyMessage_Response * output);

/// Initialize array of srv/ModifyMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_pubsub__srv__ModifyMessage_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__srv__ModifyMessage_Response__Sequence__init(cpp_pubsub__srv__ModifyMessage_Response__Sequence * array, size_t size);

/// Finalize array of srv/ModifyMessage messages.
/**
 * It calls
 * cpp_pubsub__srv__ModifyMessage_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
void
cpp_pubsub__srv__ModifyMessage_Response__Sequence__fini(cpp_pubsub__srv__ModifyMessage_Response__Sequence * array);

/// Create array of srv/ModifyMessage messages.
/**
 * It allocates the memory for the array and calls
 * cpp_pubsub__srv__ModifyMessage_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
cpp_pubsub__srv__ModifyMessage_Response__Sequence *
cpp_pubsub__srv__ModifyMessage_Response__Sequence__create(size_t size);

/// Destroy array of srv/ModifyMessage messages.
/**
 * It calls
 * cpp_pubsub__srv__ModifyMessage_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
void
cpp_pubsub__srv__ModifyMessage_Response__Sequence__destroy(cpp_pubsub__srv__ModifyMessage_Response__Sequence * array);

/// Check for srv/ModifyMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__srv__ModifyMessage_Response__Sequence__are_equal(const cpp_pubsub__srv__ModifyMessage_Response__Sequence * lhs, const cpp_pubsub__srv__ModifyMessage_Response__Sequence * rhs);

/// Copy an array of srv/ModifyMessage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__srv__ModifyMessage_Response__Sequence__copy(
  const cpp_pubsub__srv__ModifyMessage_Response__Sequence * input,
  cpp_pubsub__srv__ModifyMessage_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__FUNCTIONS_H_
