// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from group_15:srv/StartManipulationTest.idl
// generated code does not contain a copyright notice

#ifndef GROUP_15__SRV__DETAIL__START_MANIPULATION_TEST__TRAITS_HPP_
#define GROUP_15__SRV__DETAIL__START_MANIPULATION_TEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "group_15/srv/detail/start_manipulation_test__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace group_15
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartManipulationTest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: platform
  {
    out << "platform: ";
    rosidl_generator_traits::value_to_yaml(msg.platform, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartManipulationTest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: platform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "platform: ";
    rosidl_generator_traits::value_to_yaml(msg.platform, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartManipulationTest_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace group_15

namespace rosidl_generator_traits
{

[[deprecated("use group_15::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const group_15::srv::StartManipulationTest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  group_15::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use group_15::srv::to_yaml() instead")]]
inline std::string to_yaml(const group_15::srv::StartManipulationTest_Request & msg)
{
  return group_15::srv::to_yaml(msg);
}

template<>
inline const char * data_type<group_15::srv::StartManipulationTest_Request>()
{
  return "group_15::srv::StartManipulationTest_Request";
}

template<>
inline const char * name<group_15::srv::StartManipulationTest_Request>()
{
  return "group_15/srv/StartManipulationTest_Request";
}

template<>
struct has_fixed_size<group_15::srv::StartManipulationTest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<group_15::srv::StartManipulationTest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<group_15::srv::StartManipulationTest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace group_15
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartManipulationTest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: answer
  {
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartManipulationTest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartManipulationTest_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace group_15

namespace rosidl_generator_traits
{

[[deprecated("use group_15::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const group_15::srv::StartManipulationTest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  group_15::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use group_15::srv::to_yaml() instead")]]
inline std::string to_yaml(const group_15::srv::StartManipulationTest_Response & msg)
{
  return group_15::srv::to_yaml(msg);
}

template<>
inline const char * data_type<group_15::srv::StartManipulationTest_Response>()
{
  return "group_15::srv::StartManipulationTest_Response";
}

template<>
inline const char * name<group_15::srv::StartManipulationTest_Response>()
{
  return "group_15/srv/StartManipulationTest_Response";
}

template<>
struct has_fixed_size<group_15::srv::StartManipulationTest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<group_15::srv::StartManipulationTest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<group_15::srv::StartManipulationTest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<group_15::srv::StartManipulationTest>()
{
  return "group_15::srv::StartManipulationTest";
}

template<>
inline const char * name<group_15::srv::StartManipulationTest>()
{
  return "group_15/srv/StartManipulationTest";
}

template<>
struct has_fixed_size<group_15::srv::StartManipulationTest>
  : std::integral_constant<
    bool,
    has_fixed_size<group_15::srv::StartManipulationTest_Request>::value &&
    has_fixed_size<group_15::srv::StartManipulationTest_Response>::value
  >
{
};

template<>
struct has_bounded_size<group_15::srv::StartManipulationTest>
  : std::integral_constant<
    bool,
    has_bounded_size<group_15::srv::StartManipulationTest_Request>::value &&
    has_bounded_size<group_15::srv::StartManipulationTest_Response>::value
  >
{
};

template<>
struct is_service<group_15::srv::StartManipulationTest>
  : std::true_type
{
};

template<>
struct is_service_request<group_15::srv::StartManipulationTest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<group_15::srv::StartManipulationTest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GROUP_15__SRV__DETAIL__START_MANIPULATION_TEST__TRAITS_HPP_
