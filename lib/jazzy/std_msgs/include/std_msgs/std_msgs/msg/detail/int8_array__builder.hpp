// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_msgs:msg/Int8Array.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_msgs/msg/int8_array.hpp"


#ifndef STD_MSGS__MSG__DETAIL__INT8_ARRAY__BUILDER_HPP_
#define STD_MSGS__MSG__DETAIL__INT8_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_msgs/msg/detail/int8_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_msgs
{

namespace msg
{

namespace builder
{

class Init_Int8Array_data
{
public:
  explicit Init_Int8Array_data(::std_msgs::msg::Int8Array & msg)
  : msg_(msg)
  {}
  ::std_msgs::msg::Int8Array data(::std_msgs::msg::Int8Array::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_msgs::msg::Int8Array msg_;
};

class Init_Int8Array_header
{
public:
  Init_Int8Array_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Int8Array_data header(::std_msgs::msg::Int8Array::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Int8Array_data(msg_);
  }

private:
  ::std_msgs::msg::Int8Array msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_msgs::msg::Int8Array>()
{
  return std_msgs::msg::builder::Init_Int8Array_header();
}

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__INT8_ARRAY__BUILDER_HPP_
