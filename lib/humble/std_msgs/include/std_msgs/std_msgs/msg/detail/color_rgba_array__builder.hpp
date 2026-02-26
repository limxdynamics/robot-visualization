// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_msgs:msg/ColorRGBAArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__COLOR_RGBA_ARRAY__BUILDER_HPP_
#define STD_MSGS__MSG__DETAIL__COLOR_RGBA_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_msgs/msg/detail/color_rgba_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_msgs
{

namespace msg
{

namespace builder
{

class Init_ColorRGBAArray_data
{
public:
  explicit Init_ColorRGBAArray_data(::std_msgs::msg::ColorRGBAArray & msg)
  : msg_(msg)
  {}
  ::std_msgs::msg::ColorRGBAArray data(::std_msgs::msg::ColorRGBAArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_msgs::msg::ColorRGBAArray msg_;
};

class Init_ColorRGBAArray_header
{
public:
  Init_ColorRGBAArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorRGBAArray_data header(::std_msgs::msg::ColorRGBAArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ColorRGBAArray_data(msg_);
  }

private:
  ::std_msgs::msg::ColorRGBAArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_msgs::msg::ColorRGBAArray>()
{
  return std_msgs::msg::builder::Init_ColorRGBAArray_header();
}

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__COLOR_RGBA_ARRAY__BUILDER_HPP_
