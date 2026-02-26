// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hand_msgs:msg/HandMsg.idl
// generated code does not contain a copyright notice

#ifndef HAND_MSGS__MSG__DETAIL__HAND_MSG__FUNCTIONS_H_
#define HAND_MSGS__MSG__DETAIL__HAND_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hand_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hand_msgs/msg/detail/hand_msg__struct.h"

/// Initialize msg/HandMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hand_msgs__msg__HandMsg
 * )) before or use
 * hand_msgs__msg__HandMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
bool
hand_msgs__msg__HandMsg__init(hand_msgs__msg__HandMsg * msg);

/// Finalize msg/HandMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
void
hand_msgs__msg__HandMsg__fini(hand_msgs__msg__HandMsg * msg);

/// Create msg/HandMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hand_msgs__msg__HandMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
hand_msgs__msg__HandMsg *
hand_msgs__msg__HandMsg__create();

/// Destroy msg/HandMsg message.
/**
 * It calls
 * hand_msgs__msg__HandMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
void
hand_msgs__msg__HandMsg__destroy(hand_msgs__msg__HandMsg * msg);

/// Check for msg/HandMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
bool
hand_msgs__msg__HandMsg__are_equal(const hand_msgs__msg__HandMsg * lhs, const hand_msgs__msg__HandMsg * rhs);

/// Copy a msg/HandMsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
bool
hand_msgs__msg__HandMsg__copy(
  const hand_msgs__msg__HandMsg * input,
  hand_msgs__msg__HandMsg * output);

/// Initialize array of msg/HandMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * hand_msgs__msg__HandMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
bool
hand_msgs__msg__HandMsg__Sequence__init(hand_msgs__msg__HandMsg__Sequence * array, size_t size);

/// Finalize array of msg/HandMsg messages.
/**
 * It calls
 * hand_msgs__msg__HandMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
void
hand_msgs__msg__HandMsg__Sequence__fini(hand_msgs__msg__HandMsg__Sequence * array);

/// Create array of msg/HandMsg messages.
/**
 * It allocates the memory for the array and calls
 * hand_msgs__msg__HandMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
hand_msgs__msg__HandMsg__Sequence *
hand_msgs__msg__HandMsg__Sequence__create(size_t size);

/// Destroy array of msg/HandMsg messages.
/**
 * It calls
 * hand_msgs__msg__HandMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
void
hand_msgs__msg__HandMsg__Sequence__destroy(hand_msgs__msg__HandMsg__Sequence * array);

/// Check for msg/HandMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
bool
hand_msgs__msg__HandMsg__Sequence__are_equal(const hand_msgs__msg__HandMsg__Sequence * lhs, const hand_msgs__msg__HandMsg__Sequence * rhs);

/// Copy an array of msg/HandMsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hand_msgs
bool
hand_msgs__msg__HandMsg__Sequence__copy(
  const hand_msgs__msg__HandMsg__Sequence * input,
  hand_msgs__msg__HandMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HAND_MSGS__MSG__DETAIL__HAND_MSG__FUNCTIONS_H_
