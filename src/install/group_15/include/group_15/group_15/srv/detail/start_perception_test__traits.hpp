// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from group_15:srv/StartPerceptionTest.idl
// generated code does not contain a copyright notice

#ifndef GROUP_15__SRV__DETAIL__START_PERCEPTION_TEST__TRAITS_HPP_
#define GROUP_15__SRV__DETAIL__START_PERCEPTION_TEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "group_15/srv/detail/start_perception_test__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace group_15
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartPerceptionTest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: banner_a
  {
    out << "banner_a: ";
    rosidl_generator_traits::value_to_yaml(msg.banner_a, out);
    out << ", ";
  }

  // member: banner_b
  {
    out << "banner_b: ";
    rosidl_generator_traits::value_to_yaml(msg.banner_b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartPerceptionTest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: banner_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "banner_a: ";
    rosidl_generator_traits::value_to_yaml(msg.banner_a, out);
    out << "\n";
  }

  // member: banner_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "banner_b: ";
    rosidl_generator_traits::value_to_yaml(msg.banner_b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartPerceptionTest_Request & msg, bool use_flow_style = false)
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
  const group_15::srv::StartPerceptionTest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  group_15::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use group_15::srv::to_yaml() instead")]]
inline std::string to_yaml(const group_15::srv::StartPerceptionTest_Request & msg)
{
  return group_15::srv::to_yaml(msg);
}

template<>
inline const char * data_type<group_15::srv::StartPerceptionTest_Request>()
{
  return "group_15::srv::StartPerceptionTest_Request";
}

template<>
inline const char * name<group_15::srv::StartPerceptionTest_Request>()
{
  return "group_15/srv/StartPerceptionTest_Request";
}

template<>
struct has_fixed_size<group_15::srv::StartPerceptionTest_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<group_15::srv::StartPerceptionTest_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<group_15::srv::StartPerceptionTest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace group_15
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartPerceptionTest_Response & msg,
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
  const StartPerceptionTest_Response & msg,
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

inline std::string to_yaml(const StartPerceptionTest_Response & msg, bool use_flow_style = false)
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
  const group_15::srv::StartPerceptionTest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  group_15::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use group_15::srv::to_yaml() instead")]]
inline std::string to_yaml(const group_15::srv::StartPerceptionTest_Response & msg)
{
  return group_15::srv::to_yaml(msg);
}

template<>
inline const char * data_type<group_15::srv::StartPerceptionTest_Response>()
{
  return "group_15::srv::StartPerceptionTest_Response";
}

template<>
inline const char * name<group_15::srv::StartPerceptionTest_Response>()
{
  return "group_15/srv/StartPerceptionTest_Response";
}

template<>
struct has_fixed_size<group_15::srv::StartPerceptionTest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<group_15::srv::StartPerceptionTest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<group_15::srv::StartPerceptionTest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<group_15::srv::StartPerceptionTest>()
{
  return "group_15::srv::StartPerceptionTest";
}

template<>
inline const char * name<group_15::srv::StartPerceptionTest>()
{
  return "group_15/srv/StartPerceptionTest";
}

template<>
struct has_fixed_size<group_15::srv::StartPerceptionTest>
  : std::integral_constant<
    bool,
    has_fixed_size<group_15::srv::StartPerceptionTest_Request>::value &&
    has_fixed_size<group_15::srv::StartPerceptionTest_Response>::value
  >
{
};

template<>
struct has_bounded_size<group_15::srv::StartPerceptionTest>
  : std::integral_constant<
    bool,
    has_bounded_size<group_15::srv::StartPerceptionTest_Request>::value &&
    has_bounded_size<group_15::srv::StartPerceptionTest_Response>::value
  >
{
};

template<>
struct is_service<group_15::srv::StartPerceptionTest>
  : std::true_type
{
};

template<>
struct is_service_request<group_15::srv::StartPerceptionTest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<group_15::srv::StartPerceptionTest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GROUP_15__SRV__DETAIL__START_PERCEPTION_TEST__TRAITS_HPP_
