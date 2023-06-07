// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from group_15:srv/StartNavigationTest.idl
// generated code does not contain a copyright notice

#ifndef GROUP_15__SRV__DETAIL__START_NAVIGATION_TEST__BUILDER_HPP_
#define GROUP_15__SRV__DETAIL__START_NAVIGATION_TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "group_15/srv/detail/start_navigation_test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace group_15
{

namespace srv
{

namespace builder
{

class Init_StartNavigationTest_Request_y
{
public:
  explicit Init_StartNavigationTest_Request_y(::group_15::srv::StartNavigationTest_Request & msg)
  : msg_(msg)
  {}
  ::group_15::srv::StartNavigationTest_Request y(::group_15::srv::StartNavigationTest_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::group_15::srv::StartNavigationTest_Request msg_;
};

class Init_StartNavigationTest_Request_x
{
public:
  Init_StartNavigationTest_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartNavigationTest_Request_y x(::group_15::srv::StartNavigationTest_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_StartNavigationTest_Request_y(msg_);
  }

private:
  ::group_15::srv::StartNavigationTest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::group_15::srv::StartNavigationTest_Request>()
{
  return group_15::srv::builder::Init_StartNavigationTest_Request_x();
}

}  // namespace group_15


namespace group_15
{

namespace srv
{

namespace builder
{

class Init_StartNavigationTest_Response_answer
{
public:
  Init_StartNavigationTest_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::group_15::srv::StartNavigationTest_Response answer(::group_15::srv::StartNavigationTest_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::group_15::srv::StartNavigationTest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::group_15::srv::StartNavigationTest_Response>()
{
  return group_15::srv::builder::Init_StartNavigationTest_Response_answer();
}

}  // namespace group_15

#endif  // GROUP_15__SRV__DETAIL__START_NAVIGATION_TEST__BUILDER_HPP_
