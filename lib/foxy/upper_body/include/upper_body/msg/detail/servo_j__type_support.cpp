// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from upper_body:msg/servoJ.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "upper_body/msg/detail/servo_j__struct.hpp"
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

void servoJ_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) upper_body::msg::servoJ(_init);
}

void servoJ_fini_function(void * message_memory)
{
  auto typed_message = static_cast<upper_body::msg::servoJ *>(message_memory);
  typed_message->~servoJ();
}

size_t size_function__servoJ__joints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__servoJ__joints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__servoJ__joints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__servoJ__joints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember servoJ_message_member_array[1] = {
  {
    "joints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(upper_body::msg::servoJ, joints),  // bytes offset in struct
    nullptr,  // default value
    size_function__servoJ__joints,  // size() function pointer
    get_const_function__servoJ__joints,  // get_const(index) function pointer
    get_function__servoJ__joints,  // get(index) function pointer
    resize_function__servoJ__joints  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers servoJ_message_members = {
  "upper_body::msg",  // message namespace
  "servoJ",  // message name
  1,  // number of fields
  sizeof(upper_body::msg::servoJ),
  servoJ_message_member_array,  // message members
  servoJ_init_function,  // function to initialize message memory (memory has to be allocated)
  servoJ_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t servoJ_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &servoJ_message_members,
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
get_message_type_support_handle<upper_body::msg::servoJ>()
{
  return &::upper_body::msg::rosidl_typesupport_introspection_cpp::servoJ_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, upper_body, msg, servoJ)() {
  return &::upper_body::msg::rosidl_typesupport_introspection_cpp::servoJ_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
