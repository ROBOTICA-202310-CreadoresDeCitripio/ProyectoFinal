// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from group_15:srv/StartManipulationTest.idl
// generated code does not contain a copyright notice

#ifndef GROUP_15__SRV__DETAIL__START_MANIPULATION_TEST__STRUCT_H_
#define GROUP_15__SRV__DETAIL__START_MANIPULATION_TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'platform'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/StartManipulationTest in the package group_15.
typedef struct group_15__srv__StartManipulationTest_Request
{
  rosidl_runtime_c__String platform;
  int32_t x;
} group_15__srv__StartManipulationTest_Request;

// Struct for a sequence of group_15__srv__StartManipulationTest_Request.
typedef struct group_15__srv__StartManipulationTest_Request__Sequence
{
  group_15__srv__StartManipulationTest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} group_15__srv__StartManipulationTest_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'answer'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/StartManipulationTest in the package group_15.
typedef struct group_15__srv__StartManipulationTest_Response
{
  rosidl_runtime_c__String answer;
} group_15__srv__StartManipulationTest_Response;

// Struct for a sequence of group_15__srv__StartManipulationTest_Response.
typedef struct group_15__srv__StartManipulationTest_Response__Sequence
{
  group_15__srv__StartManipulationTest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} group_15__srv__StartManipulationTest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GROUP_15__SRV__DETAIL__START_MANIPULATION_TEST__STRUCT_H_
