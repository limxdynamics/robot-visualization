// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tron2_manipulation:msg/arm_status.idl
// generated code does not contain a copyright notice

#ifndef TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_
#define TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_

#include "tron2_manipulation/msg/detail/arm_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tron2_manipulation::msg::arm_status>()
{
  return "tron2_manipulation::msg::arm_status";
}

template<>
inline const char * name<tron2_manipulation::msg::arm_status>()
{
  return "tron2_manipulation/msg/arm_status";
}

template<>
struct has_fixed_size<tron2_manipulation::msg::arm_status>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tron2_manipulation::msg::arm_status>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tron2_manipulation::msg::arm_status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_
