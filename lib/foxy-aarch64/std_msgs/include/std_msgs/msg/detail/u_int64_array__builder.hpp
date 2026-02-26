// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_msgs:msg/UInt64Array.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT64_ARRAY__BUILDER_HPP_
#define STD_MSGS__MSG__DETAIL__U_INT64_ARRAY__BUILDER_HPP_

#include "std_msgs/msg/detail/u_int64_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace std_msgs
{

namespace msg
{

namespace builder
{

class Init_UInt64Array_data
{
public:
  explicit Init_UInt64Array_data(::std_msgs::msg::UInt64Array & msg)
  : msg_(msg)
  {}
  ::std_msgs::msg::UInt64Array data(::std_msgs::msg::UInt64Array::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_msgs::msg::UInt64Array msg_;
};

class Init_UInt64Array_header
{
public:
  Init_UInt64Array_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UInt64Array_data header(::std_msgs::msg::UInt64Array::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UInt64Array_data(msg_);
  }

private:
  ::std_msgs::msg::UInt64Array msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_msgs::msg::UInt64Array>()
{
  return std_msgs::msg::builder::Init_UInt64Array_header();
}

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__U_INT64_ARRAY__BUILDER_HPP_
