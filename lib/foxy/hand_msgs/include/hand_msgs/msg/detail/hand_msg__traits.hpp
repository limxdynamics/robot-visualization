// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hand_msgs:msg/HandMsg.idl
// generated code does not contain a copyright notice

#ifndef HAND_MSGS__MSG__DETAIL__HAND_MSG__TRAITS_HPP_
#define HAND_MSGS__MSG__DETAIL__HAND_MSG__TRAITS_HPP_

#include "hand_msgs/msg/detail/hand_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hand_msgs::msg::HandMsg>()
{
  return "hand_msgs::msg::HandMsg";
}

template<>
inline const char * name<hand_msgs::msg::HandMsg>()
{
  return "hand_msgs/msg/HandMsg";
}

template<>
struct has_fixed_size<hand_msgs::msg::HandMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hand_msgs::msg::HandMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hand_msgs::msg::HandMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAND_MSGS__MSG__DETAIL__HAND_MSG__TRAITS_HPP_
