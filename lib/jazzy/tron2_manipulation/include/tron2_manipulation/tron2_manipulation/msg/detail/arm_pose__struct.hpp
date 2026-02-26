// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tron2_manipulation:msg/arm_pose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tron2_manipulation/msg/arm_pose.hpp"


#ifndef TRON2_MANIPULATION__MSG__DETAIL__ARM_POSE__STRUCT_HPP_
#define TRON2_MANIPULATION__MSG__DETAIL__ARM_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tron2_manipulation__msg__arm_pose __attribute__((deprecated))
#else
# define DEPRECATED__tron2_manipulation__msg__arm_pose __declspec(deprecated)
#endif

namespace tron2_manipulation
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct arm_pose_
{
  using Type = arm_pose_<ContainerAllocator>;

  explicit arm_pose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 7>::iterator, float>(this->left_arm_pos.begin(), this->left_arm_pos.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->right_arm_pos.begin(), this->right_arm_pos.end(), 0.0f);
    }
  }

  explicit arm_pose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_arm_pos(_alloc),
    right_arm_pos(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 7>::iterator, float>(this->left_arm_pos.begin(), this->left_arm_pos.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->right_arm_pos.begin(), this->right_arm_pos.end(), 0.0f);
    }
  }

  // field types and members
  using _left_arm_pos_type =
    std::array<float, 7>;
  _left_arm_pos_type left_arm_pos;
  using _right_arm_pos_type =
    std::array<float, 7>;
  _right_arm_pos_type right_arm_pos;

  // setters for named parameter idiom
  Type & set__left_arm_pos(
    const std::array<float, 7> & _arg)
  {
    this->left_arm_pos = _arg;
    return *this;
  }
  Type & set__right_arm_pos(
    const std::array<float, 7> & _arg)
  {
    this->right_arm_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tron2_manipulation::msg::arm_pose_<ContainerAllocator> *;
  using ConstRawPtr =
    const tron2_manipulation::msg::arm_pose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tron2_manipulation::msg::arm_pose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tron2_manipulation::msg::arm_pose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tron2_manipulation::msg::arm_pose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tron2_manipulation::msg::arm_pose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tron2_manipulation::msg::arm_pose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tron2_manipulation::msg::arm_pose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tron2_manipulation::msg::arm_pose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tron2_manipulation::msg::arm_pose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tron2_manipulation__msg__arm_pose
    std::shared_ptr<tron2_manipulation::msg::arm_pose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tron2_manipulation__msg__arm_pose
    std::shared_ptr<tron2_manipulation::msg::arm_pose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const arm_pose_ & other) const
  {
    if (this->left_arm_pos != other.left_arm_pos) {
      return false;
    }
    if (this->right_arm_pos != other.right_arm_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const arm_pose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct arm_pose_

// alias to use template instance with default allocator
using arm_pose =
  tron2_manipulation::msg::arm_pose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tron2_manipulation

#endif  // TRON2_MANIPULATION__MSG__DETAIL__ARM_POSE__STRUCT_HPP_
