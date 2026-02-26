// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tron2_manipulation:msg/arm_status.idl
// generated code does not contain a copyright notice

#ifndef TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__BUILDER_HPP_
#define TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__BUILDER_HPP_

#include "tron2_manipulation/msg/detail/arm_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tron2_manipulation
{

namespace msg
{

namespace builder
{

class Init_arm_status_right_arm_pos
{
public:
  explicit Init_arm_status_right_arm_pos(::tron2_manipulation::msg::arm_status & msg)
  : msg_(msg)
  {}
  ::tron2_manipulation::msg::arm_status right_arm_pos(::tron2_manipulation::msg::arm_status::_right_arm_pos_type arg)
  {
    msg_.right_arm_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tron2_manipulation::msg::arm_status msg_;
};

class Init_arm_status_left_arm_pos
{
public:
  Init_arm_status_left_arm_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_arm_status_right_arm_pos left_arm_pos(::tron2_manipulation::msg::arm_status::_left_arm_pos_type arg)
  {
    msg_.left_arm_pos = std::move(arg);
    return Init_arm_status_right_arm_pos(msg_);
  }

private:
  ::tron2_manipulation::msg::arm_status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tron2_manipulation::msg::arm_status>()
{
  return tron2_manipulation::msg::builder::Init_arm_status_left_arm_pos();
}

}  // namespace tron2_manipulation

#endif  // TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__BUILDER_HPP_
