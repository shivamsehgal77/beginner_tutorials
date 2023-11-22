// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cpp_pubsub:srv/ModifyMessage.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__STRUCT_HPP_
#define CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cpp_pubsub__srv__ModifyMessage_Request __attribute__((deprecated))
#else
# define DEPRECATED__cpp_pubsub__srv__ModifyMessage_Request __declspec(deprecated)
#endif

namespace cpp_pubsub
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ModifyMessage_Request_
{
  using Type = ModifyMessage_Request_<ContainerAllocator>;

  explicit ModifyMessage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_message = "";
    }
  }

  explicit ModifyMessage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : new_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->new_message = "";
    }
  }

  // field types and members
  using _new_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _new_message_type new_message;

  // setters for named parameter idiom
  Type & set__new_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->new_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_pubsub::srv::ModifyMessage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_pubsub::srv::ModifyMessage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_pubsub::srv::ModifyMessage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_pubsub::srv::ModifyMessage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_pubsub::srv::ModifyMessage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_pubsub::srv::ModifyMessage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_pubsub::srv::ModifyMessage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_pubsub::srv::ModifyMessage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_pubsub::srv::ModifyMessage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_pubsub::srv::ModifyMessage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_pubsub__srv__ModifyMessage_Request
    std::shared_ptr<cpp_pubsub::srv::ModifyMessage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_pubsub__srv__ModifyMessage_Request
    std::shared_ptr<cpp_pubsub::srv::ModifyMessage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModifyMessage_Request_ & other) const
  {
    if (this->new_message != other.new_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModifyMessage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModifyMessage_Request_

// alias to use template instance with default allocator
using ModifyMessage_Request =
  cpp_pubsub::srv::ModifyMessage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cpp_pubsub


#ifndef _WIN32
# define DEPRECATED__cpp_pubsub__srv__ModifyMessage_Response __attribute__((deprecated))
#else
# define DEPRECATED__cpp_pubsub__srv__ModifyMessage_Response __declspec(deprecated)
#endif

namespace cpp_pubsub
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ModifyMessage_Response_
{
  using Type = ModifyMessage_Response_<ContainerAllocator>;

  explicit ModifyMessage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ModifyMessage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_pubsub::srv::ModifyMessage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_pubsub::srv::ModifyMessage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_pubsub::srv::ModifyMessage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_pubsub::srv::ModifyMessage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_pubsub::srv::ModifyMessage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_pubsub::srv::ModifyMessage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_pubsub::srv::ModifyMessage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_pubsub::srv::ModifyMessage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_pubsub::srv::ModifyMessage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_pubsub::srv::ModifyMessage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_pubsub__srv__ModifyMessage_Response
    std::shared_ptr<cpp_pubsub::srv::ModifyMessage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_pubsub__srv__ModifyMessage_Response
    std::shared_ptr<cpp_pubsub::srv::ModifyMessage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModifyMessage_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModifyMessage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModifyMessage_Response_

// alias to use template instance with default allocator
using ModifyMessage_Response =
  cpp_pubsub::srv::ModifyMessage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cpp_pubsub

namespace cpp_pubsub
{

namespace srv
{

struct ModifyMessage
{
  using Request = cpp_pubsub::srv::ModifyMessage_Request;
  using Response = cpp_pubsub::srv::ModifyMessage_Response;
};

}  // namespace srv

}  // namespace cpp_pubsub

#endif  // CPP_PUBSUB__SRV__DETAIL__MODIFY_MESSAGE__STRUCT_HPP_
