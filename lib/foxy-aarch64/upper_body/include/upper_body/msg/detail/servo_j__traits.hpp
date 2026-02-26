// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from upper_body:msg/servoJ.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__MSG__DETAIL__SERVO_J__TRAITS_HPP_
#define UPPER_BODY__MSG__DETAIL__SERVO_J__TRAITS_HPP_

#include "upper_body/msg/detail/servo_j__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<upper_body::msg::servoJ>()
{
  return "upper_body::msg::servoJ";
}

template<>
inline const char * name<upper_body::msg::servoJ>()
{
  return "upper_body/msg/servoJ";
}

template<>
struct has_fixed_size<upper_body::msg::servoJ>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<upper_body::msg::servoJ>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<upper_body::msg::servoJ>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UPPER_BODY__MSG__DETAIL__SERVO_J__TRAITS_HPP_
