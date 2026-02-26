// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from upper_body:msg/waist_cmd.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__MSG__DETAIL__WAIST_CMD__BUILDER_HPP_
#define UPPER_BODY__MSG__DETAIL__WAIST_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "upper_body/msg/detail/waist_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace upper_body
{

namespace msg
{

namespace builder
{

class Init_waist_cmd_waistCMD
{
public:
  Init_waist_cmd_waistCMD()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::upper_body::msg::waist_cmd waistCMD(::upper_body::msg::waist_cmd::_waistCMD_type arg)
  {
    msg_.waistCMD = std::move(arg);
    return std::move(msg_);
  }

private:
  ::upper_body::msg::waist_cmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::upper_body::msg::waist_cmd>()
{
  return upper_body::msg::builder::Init_waist_cmd_waistCMD();
}

}  // namespace upper_body

#endif  // UPPER_BODY__MSG__DETAIL__WAIST_CMD__BUILDER_HPP_
