// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from upper_body:msg/waist_cmd.idl
// generated code does not contain a copyright notice

#include "upper_body/msg/detail/waist_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_upper_body
const rosidl_type_hash_t *
upper_body__msg__waist_cmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x18, 0x70, 0xdc, 0x42, 0xf7, 0xd5, 0x72,
      0xb0, 0xe8, 0x19, 0x33, 0xb0, 0xe8, 0xf2, 0x58,
      0x71, 0x0c, 0x8a, 0xea, 0x9e, 0xe3, 0x37, 0xbe,
      0xd1, 0x96, 0x98, 0xba, 0x00, 0x4e, 0x23, 0xa0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char upper_body__msg__waist_cmd__TYPE_NAME[] = "upper_body/msg/waist_cmd";

// Define type names, field names, and default values
static char upper_body__msg__waist_cmd__FIELD_NAME__waistCMD[] = "waistCMD";

static rosidl_runtime_c__type_description__Field upper_body__msg__waist_cmd__FIELDS[] = {
  {
    {upper_body__msg__waist_cmd__FIELD_NAME__waistCMD, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
upper_body__msg__waist_cmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {upper_body__msg__waist_cmd__TYPE_NAME, 24, 24},
      {upper_body__msg__waist_cmd__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[3] waistCMD # [\"waist_yaw_joint\", \"waist_roll_joint\", \"waist_pitch_joint\"] units: rad";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
upper_body__msg__waist_cmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {upper_body__msg__waist_cmd__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 94, 94},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
upper_body__msg__waist_cmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *upper_body__msg__waist_cmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
