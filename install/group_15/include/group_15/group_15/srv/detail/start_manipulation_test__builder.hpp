// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from group_15:srv/StartManipulationTest.idl
// generated code does not contain a copyright notice

#ifndef GROUP_15__SRV__DETAIL__START_MANIPULATION_TEST__BUILDER_HPP_
#define GROUP_15__SRV__DETAIL__START_MANIPULATION_TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "group_15/srv/detail/start_manipulation_test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace group_15
{

namespace srv
{

namespace builder
{

class Init_StartManipulationTest_Request_x
{
public:
  explicit Init_StartManipulationTest_Request_x(::group_15::srv::StartManipulationTest_Request & msg)
  : msg_(msg)
  {}
  ::group_15::srv::StartManipulationTest_Request x(::group_15::srv::StartManipulationTest_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return std::move(msg_);
  }

private:
  ::group_15::srv::StartManipulationTest_Request msg_;
};

class Init_StartManipulationTest_Request_platform
{
public:
  Init_StartManipulationTest_Request_platform()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartManipulationTest_Request_x platform(::group_15::srv::StartManipulationTest_Request::_platform_type arg)
  {
    msg_.platform = std::move(arg);
    return Init_StartManipulationTest_Request_x(msg_);
  }

private:
  ::group_15::srv::StartManipulationTest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::group_15::srv::StartManipulationTest_Request>()
{
  return group_15::srv::builder::Init_StartManipulationTest_Request_platform();
}

}  // namespace group_15


namespace group_15
{

namespace srv
{

namespace builder
{

class Init_StartManipulationTest_Response_answer
{
public:
  Init_StartManipulationTest_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::group_15::srv::StartManipulationTest_Response answer(::group_15::srv::StartManipulationTest_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::group_15::srv::StartManipulationTest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::group_15::srv::StartManipulationTest_Response>()
{
  return group_15::srv::builder::Init_StartManipulationTest_Response_answer();
}

}  // namespace group_15

#endif  // GROUP_15__SRV__DETAIL__START_MANIPULATION_TEST__BUILDER_HPP_
