// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from upper_body:msg/arm_status.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "upper_body/msg/detail/arm_status__struct.hpp"
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

void arm_status_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) upper_body::msg::arm_status(_init);
}

void arm_status_fini_function(void * message_memory)
{
  auto typed_message = static_cast<upper_body::msg::arm_status *>(message_memory);
  typed_message->~arm_status();
}

size_t size_function__arm_status__left_arm_pos(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__arm_status__left_arm_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__arm_status__left_arm_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 7> *>(untyped_member);
  return &member[index];
}

size_t size_function__arm_status__right_arm_pos(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__arm_status__right_arm_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__arm_status__right_arm_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 7> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember arm_status_message_member_array[2] = {
  {
    "left_arm_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(upper_body::msg::arm_status, left_arm_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__arm_status__left_arm_pos,  // size() function pointer
    get_const_function__arm_status__left_arm_pos,  // get_const(index) function pointer
    get_function__arm_status__left_arm_pos,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_arm_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(upper_body::msg::arm_status, right_arm_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__arm_status__right_arm_pos,  // size() function pointer
    get_const_function__arm_status__right_arm_pos,  // get_const(index) function pointer
    get_function__arm_status__right_arm_pos,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers arm_status_message_members = {
  "upper_body::msg",  // message namespace
  "arm_status",  // message name
  2,  // number of fields
  sizeof(upper_body::msg::arm_status),
  arm_status_message_member_array,  // message members
  arm_status_init_function,  // function to initialize message memory (memory has to be allocated)
  arm_status_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t arm_status_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &arm_status_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace upper_body


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<upper_body::msg::arm_status>()
{
  return &::upper_body::msg::rosidl_typesupport_introspection_cpp::arm_status_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, upper_body, msg, arm_status)() {
  return &::upper_body::msg::rosidl_typesupport_introspection_cpp::arm_status_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
