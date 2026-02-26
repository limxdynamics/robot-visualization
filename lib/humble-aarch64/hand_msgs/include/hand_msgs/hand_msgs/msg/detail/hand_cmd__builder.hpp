// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hand_msgs:msg/HandCmd.idl
// generated code does not contain a copyright notice

#ifndef HAND_MSGS__MSG__DETAIL__HAND_CMD__BUILDER_HPP_
#define HAND_MSGS__MSG__DETAIL__HAND_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hand_msgs/msg/detail/hand_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hand_msgs
{

namespace msg
{

namespace builder
{

class Init_HandCmd_hand_cmd
{
public:
  explicit Init_HandCmd_hand_cmd(::hand_msgs::msg::HandCmd & msg)
  : msg_(msg)
  {}
  ::hand_msgs::msg::HandCmd hand_cmd(::hand_msgs::msg::HandCmd::_hand_cmd_type arg)
  {
    msg_.hand_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hand_msgs::msg::HandCmd msg_;
};

class Init_HandCmd_ctrl_mode
{
public:
  explicit Init_HandCmd_ctrl_mode(::hand_msgs::msg::HandCmd & msg)
  : msg_(msg)
  {}
  Init_HandCmd_hand_cmd ctrl_mode(::hand_msgs::msg::HandCmd::_ctrl_mode_type arg)
  {
    msg_.ctrl_mode = std::move(arg);
    return Init_HandCmd_hand_cmd(msg_);
  }

private:
  ::hand_msgs::msg::HandCmd msg_;
};

class Init_HandCmd_hand_type
{
public:
  explicit Init_HandCmd_hand_type(::hand_msgs::msg::HandCmd & msg)
  : msg_(msg)
  {}
  Init_HandCmd_ctrl_mode hand_type(::hand_msgs::msg::HandCmd::_hand_type_type arg)
  {
    msg_.hand_type = std::move(arg);
    return Init_HandCmd_ctrl_mode(msg_);
  }

private:
  ::hand_msgs::msg::HandCmd msg_;
};

class Init_HandCmd_header
{
public:
  Init_HandCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandCmd_hand_type header(::hand_msgs::msg::HandCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HandCmd_hand_type(msg_);
  }

private:
  ::hand_msgs::msg::HandCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hand_msgs::msg::HandCmd>()
{
  return hand_msgs::msg::builder::Init_HandCmd_header();
}

}  // namespace hand_msgs

#endif  // HAND_MSGS__MSG__DETAIL__HAND_CMD__BUILDER_HPP_
