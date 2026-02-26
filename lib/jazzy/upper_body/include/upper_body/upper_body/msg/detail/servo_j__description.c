// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from upper_body:msg/servoJ.idl
// generated code does not contain a copyright notice

#include "upper_body/msg/detail/servo_j__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_upper_body
const rosidl_type_hash_t *
upper_body__msg__servoJ__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1f, 0xbc, 0xba, 0x5c, 0xf0, 0x08, 0x78, 0x4c,
      0x28, 0x94, 0x31, 0x79, 0xf8, 0xdf, 0xc1, 0x76,
      0xf3, 0x8b, 0xfa, 0x4a, 0x6d, 0x68, 0x64, 0xc2,
      0xc7, 0xd3, 0x4f, 0x01, 0x68, 0x64, 0x6b, 0x6c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char upper_body__msg__servoJ__TYPE_NAME[] = "upper_body/msg/servoJ";

// Define type names, field names, and default values
static char upper_body__msg__servoJ__FIELD_NAME__joints[] = "joints";

static rosidl_runtime_c__type_description__Field upper_body__msg__servoJ__FIELDS[] = {
  {
    {upper_body__msg__servoJ__FIELD_NAME__joints, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
upper_body__msg__servoJ__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {upper_body__msg__servoJ__TYPE_NAME, 21, 21},
      {upper_body__msg__servoJ__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[] joints # unit: rad";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
upper_body__msg__servoJ__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {upper_body__msg__servoJ__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
upper_body__msg__servoJ__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *upper_body__msg__servoJ__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
