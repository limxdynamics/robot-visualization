// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from upper_body:msg/waist_cmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "upper_body/msg/detail/waist_cmd__functions.h"
#include "upper_body/msg/detail/waist_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace upper_body
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void waist_cmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) upper_body::msg::waist_cmd(_init);
}

void waist_cmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<upper_body::msg::waist_cmd *>(message_memory);
  typed_message->~waist_cmd();
}

size_t size_function__waist_cmd__waistCMD(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__waist_cmd__waistCMD(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__waist_cmd__waistCMD(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__waist_cmd__waistCMD(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__waist_cmd__waistCMD(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__waist_cmd__waistCMD(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__waist_cmd__waistCMD(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember waist_cmd_message_member_array[1] = {
  {
    "waistCMD",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(upper_body::msg::waist_cmd, waistCMD),  // bytes offset in struct
    nullptr,  // default value
    size_function__waist_cmd__waistCMD,  // size() function pointer
    get_const_function__waist_cmd__waistCMD,  // get_const(index) function pointer
    get_function__waist_cmd__waistCMD,  // get(index) function pointer
    fetch_function__waist_cmd__waistCMD,  // fetch(index, &value) function pointer
    assign_function__waist_cmd__waistCMD,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers waist_cmd_message_members = {
  "upper_body::msg",  // message namespace
  "waist_cmd",  // message name
  1,  // number of fields
  sizeof(upper_body::msg::waist_cmd),
  false,  // has_any_key_member_
  waist_cmd_message_member_array,  // message members
  waist_cmd_init_function,  // function to initialize message memory (memory has to be allocated)
  waist_cmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t waist_cmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &waist_cmd_message_members,
  get_message_typesupport_handle_function,
  &upper_body__msg__waist_cmd__get_type_hash,
  &upper_body__msg__waist_cmd__get_type_description,
  &upper_body__msg__waist_cmd__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace upper_body


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<upper_body::msg::waist_cmd>()
{
  return &::upper_body::msg::rosidl_typesupport_introspection_cpp::waist_cmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, upper_body, msg, waist_cmd)() {
  return &::upper_body::msg::rosidl_typesupport_introspection_cpp::waist_cmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
