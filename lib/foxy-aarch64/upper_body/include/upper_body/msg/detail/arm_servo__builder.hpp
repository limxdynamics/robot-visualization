// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from upper_body:msg/arm_servo.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__MSG__DETAIL__ARM_SERVO__BUILDER_HPP_
#define UPPER_BODY__MSG__DETAIL__ARM_SERVO__BUILDER_HPP_

#include "upper_body/msg/detail/arm_servo__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace upper_body
{

namespace msg
{

namespace builder
{

class Init_arm_servo_right_arm_pos
{
public:
  explicit Init_arm_servo_right_arm_pos(::upper_body::msg::arm_servo & msg)
  : msg_(msg)
  {}
  ::upper_body::msg::arm_servo right_arm_pos(::upper_body::msg::arm_servo::_right_arm_pos_type arg)
  {
    msg_.right_arm_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::upper_body::msg::arm_servo msg_;
};

class Init_arm_servo_left_arm_pos
{
public:
  explicit Init_arm_servo_left_arm_pos(::upper_body::msg::arm_servo & msg)
  : msg_(msg)
  {}
  Init_arm_servo_right_arm_pos left_arm_pos(::upper_body::msg::arm_servo::_left_arm_pos_type arg)
  {
    msg_.left_arm_pos = std::move(arg);
    return Init_arm_servo_right_arm_pos(msg_);
  }

private:
  ::upper_body::msg::arm_servo msg_;
};

class Init_arm_servo_right_arm_joints
{
public:
  explicit Init_arm_servo_right_arm_joints(::upper_body::msg::arm_servo & msg)
  : msg_(msg)
  {}
  Init_arm_servo_left_arm_pos right_arm_joints(::upper_body::msg::arm_servo::_right_arm_joints_type arg)
  {
    msg_.right_arm_joints = std::move(arg);
    return Init_arm_servo_left_arm_pos(msg_);
  }

private:
  ::upper_body::msg::arm_servo msg_;
};

class Init_arm_servo_left_arm_joints
{
public:
  explicit Init_arm_servo_left_arm_joints(::upper_body::msg::arm_servo & msg)
  : msg_(msg)
  {}
  Init_arm_servo_right_arm_joints left_arm_joints(::upper_body::msg::arm_servo::_left_arm_joints_type arg)
  {
    msg_.left_arm_joints = std::move(arg);
    return Init_arm_servo_right_arm_joints(msg_);
  }

private:
  ::upper_body::msg::arm_servo msg_;
};

class Init_arm_servo_servo_type
{
public:
  Init_arm_servo_servo_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_arm_servo_left_arm_joints servo_type(::upper_body::msg::arm_servo::_servo_type_type arg)
  {
    msg_.servo_type = std::move(arg);
    return Init_arm_servo_left_arm_joints(msg_);
  }

private:
  ::upper_body::msg::arm_servo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::upper_body::msg::arm_servo>()
{
  return upper_body::msg::builder::Init_arm_servo_servo_type();
}

}  // namespace upper_body

#endif  // UPPER_BODY__MSG__DETAIL__ARM_SERVO__BUILDER_HPP_
