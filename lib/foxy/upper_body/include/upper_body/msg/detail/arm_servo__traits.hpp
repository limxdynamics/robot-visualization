// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from upper_body:msg/arm_servo.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__MSG__DETAIL__ARM_SERVO__TRAITS_HPP_
#define UPPER_BODY__MSG__DETAIL__ARM_SERVO__TRAITS_HPP_

#include "upper_body/msg/detail/arm_servo__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<upper_body::msg::arm_servo>()
{
  return "upper_body::msg::arm_servo";
}

template<>
inline const char * name<upper_body::msg::arm_servo>()
{
  return "upper_body/msg/arm_servo";
}

template<>
struct has_fixed_size<upper_body::msg::arm_servo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<upper_body::msg::arm_servo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<upper_body::msg::arm_servo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UPPER_BODY__MSG__DETAIL__ARM_SERVO__TRAITS_HPP_
