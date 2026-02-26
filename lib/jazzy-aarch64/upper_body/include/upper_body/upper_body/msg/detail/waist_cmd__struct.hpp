// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from upper_body:msg/waist_cmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "upper_body/msg/waist_cmd.hpp"


#ifndef UPPER_BODY__MSG__DETAIL__WAIST_CMD__STRUCT_HPP_
#define UPPER_BODY__MSG__DETAIL__WAIST_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__upper_body__msg__waist_cmd __attribute__((deprecated))
#else
# define DEPRECATED__upper_body__msg__waist_cmd __declspec(deprecated)
#endif

namespace upper_body
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct waist_cmd_
{
  using Type = waist_cmd_<ContainerAllocator>;

  explicit waist_cmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->waistCMD.begin(), this->waistCMD.end(), 0.0f);
    }
  }

  explicit waist_cmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waistCMD(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->waistCMD.begin(), this->waistCMD.end(), 0.0f);
    }
  }

  // field types and members
  using _waistCMD_type =
    std::array<float, 3>;
  _waistCMD_type waistCMD;

  // setters for named parameter idiom
  Type & set__waistCMD(
    const std::array<float, 3> & _arg)
  {
    this->waistCMD = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    upper_body::msg::waist_cmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const upper_body::msg::waist_cmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<upper_body::msg::waist_cmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<upper_body::msg::waist_cmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      upper_body::msg::waist_cmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<upper_body::msg::waist_cmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      upper_body::msg::waist_cmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<upper_body::msg::waist_cmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<upper_body::msg::waist_cmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<upper_body::msg::waist_cmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__upper_body__msg__waist_cmd
    std::shared_ptr<upper_body::msg::waist_cmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__upper_body__msg__waist_cmd
    std::shared_ptr<upper_body::msg::waist_cmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const waist_cmd_ & other) const
  {
    if (this->waistCMD != other.waistCMD) {
      return false;
    }
    return true;
  }
  bool operator!=(const waist_cmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct waist_cmd_

// alias to use template instance with default allocator
using waist_cmd =
  upper_body::msg::waist_cmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace upper_body

#endif  // UPPER_BODY__MSG__DETAIL__WAIST_CMD__STRUCT_HPP_
