// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cpp_pubsub:srv/ModifyMessage.idl
// generated code does not contain a copyright notice
#include "cpp_pubsub/srv/detail/modify_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `new_message`
#include "rosidl_runtime_c/string_functions.h"

bool
cpp_pubsub__srv__ModifyMessage_Request__init(cpp_pubsub__srv__ModifyMessage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // new_message
  if (!rosidl_runtime_c__String__init(&msg->new_message)) {
    cpp_pubsub__srv__ModifyMessage_Request__fini(msg);
    return false;
  }
  return true;
}

void
cpp_pubsub__srv__ModifyMessage_Request__fini(cpp_pubsub__srv__ModifyMessage_Request * msg)
{
  if (!msg) {
    return;
  }
  // new_message
  rosidl_runtime_c__String__fini(&msg->new_message);
}

bool
cpp_pubsub__srv__ModifyMessage_Request__are_equal(const cpp_pubsub__srv__ModifyMessage_Request * lhs, const cpp_pubsub__srv__ModifyMessage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // new_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->new_message), &(rhs->new_message)))
  {
    return false;
  }
  return true;
}

bool
cpp_pubsub__srv__ModifyMessage_Request__copy(
  const cpp_pubsub__srv__ModifyMessage_Request * input,
  cpp_pubsub__srv__ModifyMessage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // new_message
  if (!rosidl_runtime_c__String__copy(
      &(input->new_message), &(output->new_message)))
  {
    return false;
  }
  return true;
}

cpp_pubsub__srv__ModifyMessage_Request *
cpp_pubsub__srv__ModifyMessage_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__srv__ModifyMessage_Request * msg = (cpp_pubsub__srv__ModifyMessage_Request *)allocator.allocate(sizeof(cpp_pubsub__srv__ModifyMessage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_pubsub__srv__ModifyMessage_Request));
  bool success = cpp_pubsub__srv__ModifyMessage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_pubsub__srv__ModifyMessage_Request__destroy(cpp_pubsub__srv__ModifyMessage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_pubsub__srv__ModifyMessage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_pubsub__srv__ModifyMessage_Request__Sequence__init(cpp_pubsub__srv__ModifyMessage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__srv__ModifyMessage_Request * data = NULL;

  if (size) {
    data = (cpp_pubsub__srv__ModifyMessage_Request *)allocator.zero_allocate(size, sizeof(cpp_pubsub__srv__ModifyMessage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_pubsub__srv__ModifyMessage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_pubsub__srv__ModifyMessage_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cpp_pubsub__srv__ModifyMessage_Request__Sequence__fini(cpp_pubsub__srv__ModifyMessage_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cpp_pubsub__srv__ModifyMessage_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cpp_pubsub__srv__ModifyMessage_Request__Sequence *
cpp_pubsub__srv__ModifyMessage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__srv__ModifyMessage_Request__Sequence * array = (cpp_pubsub__srv__ModifyMessage_Request__Sequence *)allocator.allocate(sizeof(cpp_pubsub__srv__ModifyMessage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_pubsub__srv__ModifyMessage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_pubsub__srv__ModifyMessage_Request__Sequence__destroy(cpp_pubsub__srv__ModifyMessage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_pubsub__srv__ModifyMessage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_pubsub__srv__ModifyMessage_Request__Sequence__are_equal(const cpp_pubsub__srv__ModifyMessage_Request__Sequence * lhs, const cpp_pubsub__srv__ModifyMessage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_pubsub__srv__ModifyMessage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_pubsub__srv__ModifyMessage_Request__Sequence__copy(
  const cpp_pubsub__srv__ModifyMessage_Request__Sequence * input,
  cpp_pubsub__srv__ModifyMessage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_pubsub__srv__ModifyMessage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_pubsub__srv__ModifyMessage_Request * data =
      (cpp_pubsub__srv__ModifyMessage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_pubsub__srv__ModifyMessage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_pubsub__srv__ModifyMessage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_pubsub__srv__ModifyMessage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
cpp_pubsub__srv__ModifyMessage_Response__init(cpp_pubsub__srv__ModifyMessage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
cpp_pubsub__srv__ModifyMessage_Response__fini(cpp_pubsub__srv__ModifyMessage_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
cpp_pubsub__srv__ModifyMessage_Response__are_equal(const cpp_pubsub__srv__ModifyMessage_Response * lhs, const cpp_pubsub__srv__ModifyMessage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
cpp_pubsub__srv__ModifyMessage_Response__copy(
  const cpp_pubsub__srv__ModifyMessage_Response * input,
  cpp_pubsub__srv__ModifyMessage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

cpp_pubsub__srv__ModifyMessage_Response *
cpp_pubsub__srv__ModifyMessage_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__srv__ModifyMessage_Response * msg = (cpp_pubsub__srv__ModifyMessage_Response *)allocator.allocate(sizeof(cpp_pubsub__srv__ModifyMessage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_pubsub__srv__ModifyMessage_Response));
  bool success = cpp_pubsub__srv__ModifyMessage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_pubsub__srv__ModifyMessage_Response__destroy(cpp_pubsub__srv__ModifyMessage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_pubsub__srv__ModifyMessage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_pubsub__srv__ModifyMessage_Response__Sequence__init(cpp_pubsub__srv__ModifyMessage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__srv__ModifyMessage_Response * data = NULL;

  if (size) {
    data = (cpp_pubsub__srv__ModifyMessage_Response *)allocator.zero_allocate(size, sizeof(cpp_pubsub__srv__ModifyMessage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_pubsub__srv__ModifyMessage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_pubsub__srv__ModifyMessage_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cpp_pubsub__srv__ModifyMessage_Response__Sequence__fini(cpp_pubsub__srv__ModifyMessage_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cpp_pubsub__srv__ModifyMessage_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cpp_pubsub__srv__ModifyMessage_Response__Sequence *
cpp_pubsub__srv__ModifyMessage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__srv__ModifyMessage_Response__Sequence * array = (cpp_pubsub__srv__ModifyMessage_Response__Sequence *)allocator.allocate(sizeof(cpp_pubsub__srv__ModifyMessage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_pubsub__srv__ModifyMessage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_pubsub__srv__ModifyMessage_Response__Sequence__destroy(cpp_pubsub__srv__ModifyMessage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_pubsub__srv__ModifyMessage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_pubsub__srv__ModifyMessage_Response__Sequence__are_equal(const cpp_pubsub__srv__ModifyMessage_Response__Sequence * lhs, const cpp_pubsub__srv__ModifyMessage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_pubsub__srv__ModifyMessage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_pubsub__srv__ModifyMessage_Response__Sequence__copy(
  const cpp_pubsub__srv__ModifyMessage_Response__Sequence * input,
  cpp_pubsub__srv__ModifyMessage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_pubsub__srv__ModifyMessage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_pubsub__srv__ModifyMessage_Response * data =
      (cpp_pubsub__srv__ModifyMessage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_pubsub__srv__ModifyMessage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_pubsub__srv__ModifyMessage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_pubsub__srv__ModifyMessage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
