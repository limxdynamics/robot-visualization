// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from upper_body:msg/servoJ.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__MSG__DETAIL__SERVO_J__STRUCT_HPP_
#define UPPER_BODY__MSG__DETAIL__SERVO_J__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__upper_body__msg__servoJ __attribute__((deprecated))
#else
# define DEPRECATED__upper_body__msg__servoJ __declspec(deprecated)
#endif

namespace upper_body
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct servoJ_
{
  using Type = servoJ_<ContainerAllocator>;

  explicit servoJ_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit servoJ_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joints_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _joints_type joints;

  // setters for named parameter idiom
  Type & set__joints(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->joints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    upper_body::msg::servoJ_<ContainerAllocator> *;
  using ConstRawPtr =
    const upper_body::msg::servoJ_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<upper_body::msg::servoJ_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<upper_body::msg::servoJ_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      upper_body::msg::servoJ_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<upper_body::msg::servoJ_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      upper_body::msg::servoJ_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<upper_body::msg::servoJ_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<upper_body::msg::servoJ_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<upper_body::msg::servoJ_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__upper_body__msg__servoJ
    std::shared_ptr<upper_body::msg::servoJ_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__upper_body__msg__servoJ
    std::shared_ptr<upper_body::msg::servoJ_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const servoJ_ & other) const
  {
    if (this->joints != other.joints) {
      return false;
    }
    return true;
  }
  bool operator!=(const servoJ_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct servoJ_

// alias to use template instance with default allocator
using servoJ =
  upper_body::msg::servoJ_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace upper_body

#endif  // UPPER_BODY__MSG__DETAIL__SERVO_J__STRUCT_HPP_
