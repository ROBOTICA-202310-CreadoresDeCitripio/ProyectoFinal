// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from group_15:srv/StartPerceptionTest.idl
// generated code does not contain a copyright notice

#ifndef GROUP_15__SRV__DETAIL__START_PERCEPTION_TEST__BUILDER_HPP_
#define GROUP_15__SRV__DETAIL__START_PERCEPTION_TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "group_15/srv/detail/start_perception_test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace group_15
{

namespace srv
{

namespace builder
{

class Init_StartPerceptionTest_Request_banner_b
{
public:
  explicit Init_StartPerceptionTest_Request_banner_b(::group_15::srv::StartPerceptionTest_Request & msg)
  : msg_(msg)
  {}
  ::group_15::srv::StartPerceptionTest_Request banner_b(::group_15::srv::StartPerceptionTest_Request::_banner_b_type arg)
  {
    msg_.banner_b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::group_15::srv::StartPerceptionTest_Request msg_;
};

class Init_StartPerceptionTest_Request_banner_a
{
public:
  Init_StartPerceptionTest_Request_banner_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartPerceptionTest_Request_banner_b banner_a(::group_15::srv::StartPerceptionTest_Request::_banner_a_type arg)
  {
    msg_.banner_a = std::move(arg);
    return Init_StartPerceptionTest_Request_banner_b(msg_);
  }

private:
  ::group_15::srv::StartPerceptionTest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::group_15::srv::StartPerceptionTest_Request>()
{
  return group_15::srv::builder::Init_StartPerceptionTest_Request_banner_a();
}

}  // namespace group_15


namespace group_15
{

namespace srv
{

namespace builder
{

class Init_StartPerceptionTest_Response_answer
{
public:
  Init_StartPerceptionTest_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::group_15::srv::StartPerceptionTest_Response answer(::group_15::srv::StartPerceptionTest_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::group_15::srv::StartPerceptionTest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::group_15::srv::StartPerceptionTest_Response>()
{
  return group_15::srv::builder::Init_StartPerceptionTest_Response_answer();
}

}  // namespace group_15

#endif  // GROUP_15__SRV__DETAIL__START_PERCEPTION_TEST__BUILDER_HPP_
