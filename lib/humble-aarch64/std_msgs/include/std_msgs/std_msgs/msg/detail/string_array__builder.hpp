// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_msgs:msg/StringArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__STRING_ARRAY__BUILDER_HPP_
#define STD_MSGS__MSG__DETAIL__STRING_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_msgs/msg/detail/string_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_msgs
{

namespace msg
{

namespace builder
{

class Init_StringArray_data
{
public:
  explicit Init_StringArray_data(::std_msgs::msg::StringArray & msg)
  : msg_(msg)
  {}
  ::std_msgs::msg::StringArray data(::std_msgs::msg::StringArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_msgs::msg::StringArray msg_;
};

class Init_StringArray_header
{
public:
  Init_StringArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StringArray_data header(::std_msgs::msg::StringArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StringArray_data(msg_);
  }

private:
  ::std_msgs::msg::StringArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_msgs::msg::StringArray>()
{
  return std_msgs::msg::builder::Init_StringArray_header();
}

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__STRING_ARRAY__BUILDER_HPP_
