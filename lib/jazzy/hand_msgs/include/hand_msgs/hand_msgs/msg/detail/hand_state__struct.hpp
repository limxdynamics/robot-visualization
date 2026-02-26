// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hand_msgs:msg/HandState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hand_msgs/msg/hand_state.hpp"


#ifndef HAND_MSGS__MSG__DETAIL__HAND_STATE__STRUCT_HPP_
#define HAND_MSGS__MSG__DETAIL__HAND_STATE__STRUCT_HPP_

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
// Member 'hand_state'
#include "hand_msgs/msg/detail/hand_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hand_msgs__msg__HandState __attribute__((deprecated))
#else
# define DEPRECATED__hand_msgs__msg__HandState __declspec(deprecated)
#endif

namespace hand_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandState_
{
  using Type = HandState_<ContainerAllocator>;

  explicit HandState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand_type = "";
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->ctrl_mode.begin(), this->ctrl_mode.end(), 0);
      this->hand_state.fill(hand_msgs::msg::HandMsg_<ContainerAllocator>{_init});
    }
  }

  explicit HandState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    hand_type(_alloc),
    ctrl_mode(_alloc),
    hand_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand_type = "";
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->ctrl_mode.begin(), this->ctrl_mode.end(), 0);
      this->hand_state.fill(hand_msgs::msg::HandMsg_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hand_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hand_type_type hand_type;
  using _ctrl_mode_type =
    std::array<uint8_t, 2>;
  _ctrl_mode_type ctrl_mode;
  using _hand_state_type =
    std::array<hand_msgs::msg::HandMsg_<ContainerAllocator>, 2>;
  _hand_state_type hand_state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hand_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hand_type = _arg;
    return *this;
  }
  Type & set__ctrl_mode(
    const std::array<uint8_t, 2> & _arg)
  {
    this->ctrl_mode = _arg;
    return *this;
  }
  Type & set__hand_state(
    const std::array<hand_msgs::msg::HandMsg_<ContainerAllocator>, 2> & _arg)
  {
    this->hand_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hand_msgs::msg::HandState_<ContainerAllocator> *;
  using ConstRawPtr =
    const hand_msgs::msg::HandState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hand_msgs::msg::HandState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hand_msgs::msg::HandState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hand_msgs::msg::HandState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hand_msgs::msg::HandState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hand_msgs::msg::HandState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hand_msgs::msg::HandState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hand_msgs::msg::HandState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hand_msgs::msg::HandState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hand_msgs__msg__HandState
    std::shared_ptr<hand_msgs::msg::HandState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hand_msgs__msg__HandState
    std::shared_ptr<hand_msgs::msg::HandState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hand_type != other.hand_type) {
      return false;
    }
    if (this->ctrl_mode != other.ctrl_mode) {
      return false;
    }
    if (this->hand_state != other.hand_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandState_

// alias to use template instance with default allocator
using HandState =
  hand_msgs::msg::HandState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hand_msgs

#endif  // HAND_MSGS__MSG__DETAIL__HAND_STATE__STRUCT_HPP_
