// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hand_msgs:msg/HandMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hand_msgs/msg/hand_msg.hpp"


#ifndef HAND_MSGS__MSG__DETAIL__HAND_MSG__BUILDER_HPP_
#define HAND_MSGS__MSG__DETAIL__HAND_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hand_msgs/msg/detail/hand_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hand_msgs
{

namespace msg
{

namespace builder
{

class Init_HandMsg_time
{
public:
  explicit Init_HandMsg_time(::hand_msgs::msg::HandMsg & msg)
  : msg_(msg)
  {}
  ::hand_msgs::msg::HandMsg time(::hand_msgs::msg::HandMsg::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hand_msgs::msg::HandMsg msg_;
};

class Init_HandMsg_current
{
public:
  explicit Init_HandMsg_current(::hand_msgs::msg::HandMsg & msg)
  : msg_(msg)
  {}
  Init_HandMsg_time current(::hand_msgs::msg::HandMsg::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_HandMsg_time(msg_);
  }

private:
  ::hand_msgs::msg::HandMsg msg_;
};

class Init_HandMsg_vel
{
public:
  explicit Init_HandMsg_vel(::hand_msgs::msg::HandMsg & msg)
  : msg_(msg)
  {}
  Init_HandMsg_current vel(::hand_msgs::msg::HandMsg::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_HandMsg_current(msg_);
  }

private:
  ::hand_msgs::msg::HandMsg msg_;
};

class Init_HandMsg_pos
{
public:
  explicit Init_HandMsg_pos(::hand_msgs::msg::HandMsg & msg)
  : msg_(msg)
  {}
  Init_HandMsg_vel pos(::hand_msgs::msg::HandMsg::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_HandMsg_vel(msg_);
  }

private:
  ::hand_msgs::msg::HandMsg msg_;
};

class Init_HandMsg_names
{
public:
  explicit Init_HandMsg_names(::hand_msgs::msg::HandMsg & msg)
  : msg_(msg)
  {}
  Init_HandMsg_pos names(::hand_msgs::msg::HandMsg::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_HandMsg_pos(msg_);
  }

private:
  ::hand_msgs::msg::HandMsg msg_;
};

class Init_HandMsg_header
{
public:
  Init_HandMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandMsg_names header(::hand_msgs::msg::HandMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HandMsg_names(msg_);
  }

private:
  ::hand_msgs::msg::HandMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hand_msgs::msg::HandMsg>()
{
  return hand_msgs::msg::builder::Init_HandMsg_header();
}

}  // namespace hand_msgs

#endif  // HAND_MSGS__MSG__DETAIL__HAND_MSG__BUILDER_HPP_
