// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hand_msgs:msg/HandCmd.idl
// generated code does not contain a copyright notice

#include "hand_msgs/msg/detail/hand_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
const rosidl_type_hash_t *
hand_msgs__msg__HandCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x93, 0x4c, 0x79, 0x2c, 0x1d, 0x57, 0x55,
      0x95, 0x57, 0x2c, 0xcb, 0x37, 0xa7, 0x14, 0x16,
      0x47, 0xbe, 0x68, 0x09, 0x6f, 0x32, 0x51, 0xf9,
      0x59, 0x3f, 0xa7, 0x24, 0x1a, 0x62, 0x3e, 0x1e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "hand_msgs/msg/detail/hand_msg__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t hand_msgs__msg__HandMsg__EXPECTED_HASH = {1, {
    0x36, 0x77, 0x64, 0xa9, 0x91, 0x28, 0xa3, 0x64,
    0xbc, 0x83, 0x72, 0xc4, 0xb0, 0x7d, 0xa0, 0xbb,
    0xfa, 0x90, 0xfc, 0x92, 0xf5, 0x55, 0xa5, 0x30,
    0x09, 0xb7, 0x9b, 0x67, 0xac, 0x61, 0x74, 0xe4,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char hand_msgs__msg__HandCmd__TYPE_NAME[] = "hand_msgs/msg/HandCmd";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char hand_msgs__msg__HandMsg__TYPE_NAME[] = "hand_msgs/msg/HandMsg";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char hand_msgs__msg__HandCmd__FIELD_NAME__header[] = "header";
static char hand_msgs__msg__HandCmd__FIELD_NAME__hand_type[] = "hand_type";
static char hand_msgs__msg__HandCmd__FIELD_NAME__ctrl_mode[] = "ctrl_mode";
static char hand_msgs__msg__HandCmd__FIELD_NAME__hand_cmd[] = "hand_cmd";

static rosidl_runtime_c__type_description__Field hand_msgs__msg__HandCmd__FIELDS[] = {
  {
    {hand_msgs__msg__HandCmd__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {hand_msgs__msg__HandCmd__FIELD_NAME__hand_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hand_msgs__msg__HandCmd__FIELD_NAME__ctrl_mode, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hand_msgs__msg__HandCmd__FIELD_NAME__hand_cmd, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      2,
      0,
      {hand_msgs__msg__HandMsg__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hand_msgs__msg__HandCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hand_msgs__msg__HandMsg__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hand_msgs__msg__HandCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hand_msgs__msg__HandCmd__TYPE_NAME, 21, 21},
      {hand_msgs__msg__HandCmd__FIELDS, 4, 4},
    },
    {hand_msgs__msg__HandCmd__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&hand_msgs__msg__HandMsg__EXPECTED_HASH, hand_msgs__msg__HandMsg__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = hand_msgs__msg__HandMsg__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "string hand_type\n"
  "\n"
  "uint8[2] ctrl_mode\n"
  "\n"
  "HandMsg[2] hand_cmd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hand_msgs__msg__HandCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hand_msgs__msg__HandCmd__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hand_msgs__msg__HandCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hand_msgs__msg__HandCmd__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hand_msgs__msg__HandMsg__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
