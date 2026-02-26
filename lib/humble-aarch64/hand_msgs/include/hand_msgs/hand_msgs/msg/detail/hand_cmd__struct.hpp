// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hand_msgs:msg/HandCmd.idl
// generated code does not contain a copyright notice

#ifndef HAND_MSGS__MSG__DETAIL__HAND_CMD__STRUCT_HPP_
#define HAND_MSGS__MSG__DETAIL__HAND_CMD__STRUCT_HPP_

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
// Member 'hand_cmd'
#include "hand_msgs/msg/detail/hand_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hand_msgs__msg__HandCmd __attribute__((deprecated))
#else
# define DEPRECATED__hand_msgs__msg__HandCmd __declspec(deprecated)
#endif

namespace hand_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandCmd_
{
  using Type = HandCmd_<ContainerAllocator>;

  explicit HandCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand_type = "";
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->ctrl_mode.begin(), this->ctrl_mode.end(), 0);
      this->hand_cmd.fill(hand_msgs::msg::HandMsg_<ContainerAllocator>{_init});
    }
  }

  explicit HandCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    hand_type(_alloc),
    ctrl_mode(_alloc),
    hand_cmd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand_type = "";
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->ctrl_mode.begin(), this->ctrl_mode.end(), 0);
      this->hand_cmd.fill(hand_msgs::msg::HandMsg_<ContainerAllocator>{_alloc, _init});
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
  using _hand_cmd_type =
    std::array<hand_msgs::msg::HandMsg_<ContainerAllocator>, 2>;
  _hand_cmd_type hand_cmd;

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
  Type & set__hand_cmd(
    const std::array<hand_msgs::msg::HandMsg_<ContainerAllocator>, 2> & _arg)
  {
    this->hand_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hand_msgs::msg::HandCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const hand_msgs::msg::HandCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hand_msgs::msg::HandCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hand_msgs::msg::HandCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hand_msgs::msg::HandCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hand_msgs::msg::HandCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hand_msgs::msg::HandCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hand_msgs::msg::HandCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hand_msgs::msg::HandCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hand_msgs::msg::HandCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hand_msgs__msg__HandCmd
    std::shared_ptr<hand_msgs::msg::HandCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hand_msgs__msg__HandCmd
    std::shared_ptr<hand_msgs::msg::HandCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandCmd_ & other) const
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
    if (this->hand_cmd != other.hand_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandCmd_

// alias to use template instance with default allocator
using HandCmd =
  hand_msgs::msg::HandCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hand_msgs

#endif  // HAND_MSGS__MSG__DETAIL__HAND_CMD__STRUCT_HPP_
