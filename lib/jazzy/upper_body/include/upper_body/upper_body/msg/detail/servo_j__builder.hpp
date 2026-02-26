// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from upper_body:msg/servoJ.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "upper_body/msg/servo_j.hpp"


#ifndef UPPER_BODY__MSG__DETAIL__SERVO_J__BUILDER_HPP_
#define UPPER_BODY__MSG__DETAIL__SERVO_J__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "upper_body/msg/detail/servo_j__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace upper_body
{

namespace msg
{

namespace builder
{

class Init_servoJ_joints
{
public:
  Init_servoJ_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::upper_body::msg::servoJ joints(::upper_body::msg::servoJ::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::upper_body::msg::servoJ msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::upper_body::msg::servoJ>()
{
  return upper_body::msg::builder::Init_servoJ_joints();
}

}  // namespace upper_body

#endif  // UPPER_BODY__MSG__DETAIL__SERVO_J__BUILDER_HPP_
