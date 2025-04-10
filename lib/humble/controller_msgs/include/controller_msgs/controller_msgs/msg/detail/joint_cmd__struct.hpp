// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_msgs:msg/JointCmd.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD__STRUCT_HPP_
#define CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD__STRUCT_HPP_

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
# define DEPRECATED__controller_msgs__msg__JointCmd __attribute__((deprecated))
#else
# define DEPRECATED__controller_msgs__msg__JointCmd __declspec(deprecated)
#endif

namespace controller_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointCmd_
{
  using Type = JointCmd_<ContainerAllocator>;

  explicit JointCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->na = 0ul;
    }
  }

  explicit JointCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->na = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _q_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _q_type q;
  using _v_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _v_type v;
  using _tau_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _tau_type tau;
  using _kp_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kp_type kp;
  using _kd_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kd_type kd;
  using _mode_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _mode_type mode;
  using _na_type =
    uint32_t;
  _na_type na;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__q(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__v(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__tau(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->tau = _arg;
    return *this;
  }
  Type & set__kp(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__mode(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__na(
    const uint32_t & _arg)
  {
    this->na = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_msgs::msg::JointCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_msgs::msg::JointCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_msgs::msg::JointCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_msgs::msg::JointCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_msgs::msg::JointCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_msgs::msg::JointCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_msgs::msg::JointCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_msgs::msg::JointCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_msgs::msg::JointCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_msgs::msg::JointCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_msgs__msg__JointCmd
    std::shared_ptr<controller_msgs::msg::JointCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_msgs__msg__JointCmd
    std::shared_ptr<controller_msgs::msg::JointCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->tau != other.tau) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->na != other.na) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointCmd_

// alias to use template instance with default allocator
using JointCmd =
  controller_msgs::msg::JointCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controller_msgs

#endif  // CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD__STRUCT_HPP_
