// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from std_msgs:msg/Float64Array.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_msgs/msg/float64_array.hpp"


#ifndef STD_MSGS__MSG__DETAIL__FLOAT64_ARRAY__STRUCT_HPP_
#define STD_MSGS__MSG__DETAIL__FLOAT64_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__std_msgs__msg__Float64Array __attribute__((deprecated))
#else
# define DEPRECATED__std_msgs__msg__Float64Array __declspec(deprecated)
#endif

namespace std_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Float64Array_
{
  using Type = Float64Array_<ContainerAllocator>;

  explicit Float64Array_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Float64Array_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    std_msgs::msg::Float64Array_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_msgs::msg::Float64Array_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_msgs::msg::Float64Array_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_msgs::msg::Float64Array_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      std_msgs::msg::Float64Array_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_msgs::msg::Float64Array_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      std_msgs::msg::Float64Array_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_msgs::msg::Float64Array_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_msgs::msg::Float64Array_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_msgs::msg::Float64Array_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__std_msgs__msg__Float64Array
    std::shared_ptr<std_msgs::msg::Float64Array_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__std_msgs__msg__Float64Array
    std::shared_ptr<std_msgs::msg::Float64Array_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Float64Array_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Float64Array_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Float64Array_

// alias to use template instance with default allocator
using Float64Array =
  std_msgs::msg::Float64Array_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__FLOAT64_ARRAY__STRUCT_HPP_
