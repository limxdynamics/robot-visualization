// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from std_msgs:msg/ByteArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__BYTE_ARRAY__BUILDER_HPP_
#define STD_MSGS__MSG__DETAIL__BYTE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "std_msgs/msg/detail/byte_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace std_msgs
{

namespace msg
{

namespace builder
{

class Init_ByteArray_data
{
public:
  explicit Init_ByteArray_data(::std_msgs::msg::ByteArray & msg)
  : msg_(msg)
  {}
  ::std_msgs::msg::ByteArray data(::std_msgs::msg::ByteArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::std_msgs::msg::ByteArray msg_;
};

class Init_ByteArray_header
{
public:
  Init_ByteArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ByteArray_data header(::std_msgs::msg::ByteArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ByteArray_data(msg_);
  }

private:
  ::std_msgs::msg::ByteArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::std_msgs::msg::ByteArray>()
{
  return std_msgs::msg::builder::Init_ByteArray_header();
}

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__DETAIL__BYTE_ARRAY__BUILDER_HPP_
