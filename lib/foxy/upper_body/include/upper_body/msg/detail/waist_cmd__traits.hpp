// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from upper_body:msg/waist_cmd.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__MSG__DETAIL__WAIST_CMD__TRAITS_HPP_
#define UPPER_BODY__MSG__DETAIL__WAIST_CMD__TRAITS_HPP_

#include "upper_body/msg/detail/waist_cmd__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<upper_body::msg::waist_cmd>()
{
  return "upper_body::msg::waist_cmd";
}

template<>
inline const char * name<upper_body::msg::waist_cmd>()
{
  return "upper_body/msg/waist_cmd";
}

template<>
struct has_fixed_size<upper_body::msg::waist_cmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<upper_body::msg::waist_cmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<upper_body::msg::waist_cmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UPPER_BODY__MSG__DETAIL__WAIST_CMD__TRAITS_HPP_
