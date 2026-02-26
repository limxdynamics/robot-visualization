// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from upper_body:msg/arm_status.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_
#define UPPER_BODY__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_

#include "upper_body/msg/detail/arm_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<upper_body::msg::arm_status>()
{
  return "upper_body::msg::arm_status";
}

template<>
inline const char * name<upper_body::msg::arm_status>()
{
  return "upper_body/msg/arm_status";
}

template<>
struct has_fixed_size<upper_body::msg::arm_status>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<upper_body::msg::arm_status>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<upper_body::msg::arm_status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UPPER_BODY__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_
