// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from upper_body:msg/arm_servo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "upper_body/msg/arm_servo.hpp"


#ifndef UPPER_BODY__MSG__DETAIL__ARM_SERVO__STRUCT_HPP_
#define UPPER_BODY__MSG__DETAIL__ARM_SERVO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__upper_body__msg__arm_servo __attribute__((deprecated))
#else
# define DEPRECATED__upper_body__msg__arm_servo __declspec(deprecated)
#endif

namespace upper_body
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct arm_servo_
{
  using Type = arm_servo_<ContainerAllocator>;

  explicit arm_servo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_type = "";
      std::fill<typename std::array<float, 7>::iterator, float>(this->left_arm_pos.begin(), this->left_arm_pos.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->right_arm_pos.begin(), this->right_arm_pos.end(), 0.0f);
    }
  }

  explicit arm_servo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : servo_type(_alloc),
    left_arm_pos(_alloc),
    right_arm_pos(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_type = "";
      std::fill<typename std::array<float, 7>::iterator, float>(this->left_arm_pos.begin(), this->left_arm_pos.end(), 0.0f);
      std::fill<typename std::array<float, 7>::iterator, float>(this->right_arm_pos.begin(), this->right_arm_pos.end(), 0.0f);
    }
  }

  // field types and members
  using _servo_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _servo_type_type servo_type;
  using _left_arm_joints_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _left_arm_joints_type left_arm_joints;
  using _right_arm_joints_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _right_arm_joints_type right_arm_joints;
  using _left_arm_pos_type =
    std::array<float, 7>;
  _left_arm_pos_type left_arm_pos;
  using _right_arm_pos_type =
    std::array<float, 7>;
  _right_arm_pos_type right_arm_pos;

  // setters for named parameter idiom
  Type & set__servo_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->servo_type = _arg;
    return *this;
  }
  Type & set__left_arm_joints(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->left_arm_joints = _arg;
    return *this;
  }
  Type & set__right_arm_joints(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->right_arm_joints = _arg;
    return *this;
  }
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
    upper_body::msg::arm_servo_<ContainerAllocator> *;
  using ConstRawPtr =
    const upper_body::msg::arm_servo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<upper_body::msg::arm_servo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<upper_body::msg::arm_servo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      upper_body::msg::arm_servo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<upper_body::msg::arm_servo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      upper_body::msg::arm_servo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<upper_body::msg::arm_servo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<upper_body::msg::arm_servo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<upper_body::msg::arm_servo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__upper_body__msg__arm_servo
    std::shared_ptr<upper_body::msg::arm_servo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__upper_body__msg__arm_servo
    std::shared_ptr<upper_body::msg::arm_servo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const arm_servo_ & other) const
  {
    if (this->servo_type != other.servo_type) {
      return false;
    }
    if (this->left_arm_joints != other.left_arm_joints) {
      return false;
    }
    if (this->right_arm_joints != other.right_arm_joints) {
      return false;
    }
    if (this->left_arm_pos != other.left_arm_pos) {
      return false;
    }
    if (this->right_arm_pos != other.right_arm_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const arm_servo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct arm_servo_

// alias to use template instance with default allocator
using arm_servo =
  upper_body::msg::arm_servo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace upper_body

#endif  // UPPER_BODY__MSG__DETAIL__ARM_SERVO__STRUCT_HPP_
