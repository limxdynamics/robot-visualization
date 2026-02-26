// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_msgs:msg/Float64Array.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_msgs/msg/float64_array.hpp"


#ifndef STD_MSGS__MSG__DETAIL__FLOAT64_ARRAY__BUILDER_HPP_
#define STD_MSGS__MSG__DETAIL__FLOAT64_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_msgs/msg/detail/float64_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_msgs
{

namespace msg
{

namespace builder
{

class Init_Float64Array_data
{
public:
  explicit Init_Float64Array_data(::std_msgs::msg::Float64Array & msg)
  : msg_(msg)
  {}
  ::std_msgs::msg::Float64Array data(::std_msgs::msg::Float64Array::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_msgs::msg::Float64Array msg_;
};

class Init_Float64Array_header
{
public:
  Init_Float64Array_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Float64Array_data header(::std_msgs::msg::Float64Array::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Float64Array_data(msg_);
  }

private:
  ::std_msgs::msg::Float64Array msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_msgs::msg::Float64Array>()
{
  return std_msgs::msg::builder::Init_Float64Array_header();
}

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__FLOAT64_ARRAY__BUILDER_HPP_
