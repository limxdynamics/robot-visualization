// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hand_msgs:msg/HandMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hand_msgs/msg/hand_msg.hpp"


#ifndef HAND_MSGS__MSG__DETAIL__HAND_MSG__STRUCT_HPP_
#define HAND_MSGS__MSG__DETAIL__HAND_MSG__STRUCT_HPP_

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
# define DEPRECATED__hand_msgs__msg__HandMsg __attribute__((deprecated))
#else
# define DEPRECATED__hand_msgs__msg__HandMsg __declspec(deprecated)
#endif

namespace hand_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandMsg_
{
  using Type = HandMsg_<ContainerAllocator>;

  explicit HandMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit HandMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;
  using _pos_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _pos_type pos;
  using _vel_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _vel_type vel;
  using _current_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _current_type current;
  using _time_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _time_type time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->names = _arg;
    return *this;
  }
  Type & set__pos(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__vel(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__current(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__time(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hand_msgs::msg::HandMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const hand_msgs::msg::HandMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hand_msgs::msg::HandMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hand_msgs::msg::HandMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hand_msgs::msg::HandMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hand_msgs::msg::HandMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hand_msgs::msg::HandMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hand_msgs::msg::HandMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hand_msgs::msg::HandMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hand_msgs::msg::HandMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hand_msgs__msg__HandMsg
    std::shared_ptr<hand_msgs::msg::HandMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hand_msgs__msg__HandMsg
    std::shared_ptr<hand_msgs::msg::HandMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->names != other.names) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandMsg_

// alias to use template instance with default allocator
using HandMsg =
  hand_msgs::msg::HandMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hand_msgs

#endif  // HAND_MSGS__MSG__DETAIL__HAND_MSG__STRUCT_HPP_
