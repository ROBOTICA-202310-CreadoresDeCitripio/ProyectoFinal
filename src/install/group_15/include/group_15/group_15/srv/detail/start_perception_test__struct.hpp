// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from group_15:srv/StartPerceptionTest.idl
// generated code does not contain a copyright notice

#ifndef GROUP_15__SRV__DETAIL__START_PERCEPTION_TEST__STRUCT_HPP_
#define GROUP_15__SRV__DETAIL__START_PERCEPTION_TEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__group_15__srv__StartPerceptionTest_Request __attribute__((deprecated))
#else
# define DEPRECATED__group_15__srv__StartPerceptionTest_Request __declspec(deprecated)
#endif

namespace group_15
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartPerceptionTest_Request_
{
  using Type = StartPerceptionTest_Request_<ContainerAllocator>;

  explicit StartPerceptionTest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->banner_a = 0l;
      this->banner_b = 0l;
    }
  }

  explicit StartPerceptionTest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->banner_a = 0l;
      this->banner_b = 0l;
    }
  }

  // field types and members
  using _banner_a_type =
    int32_t;
  _banner_a_type banner_a;
  using _banner_b_type =
    int32_t;
  _banner_b_type banner_b;

  // setters for named parameter idiom
  Type & set__banner_a(
    const int32_t & _arg)
  {
    this->banner_a = _arg;
    return *this;
  }
  Type & set__banner_b(
    const int32_t & _arg)
  {
    this->banner_b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    group_15::srv::StartPerceptionTest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const group_15::srv::StartPerceptionTest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<group_15::srv::StartPerceptionTest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<group_15::srv::StartPerceptionTest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      group_15::srv::StartPerceptionTest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<group_15::srv::StartPerceptionTest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      group_15::srv::StartPerceptionTest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<group_15::srv::StartPerceptionTest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<group_15::srv::StartPerceptionTest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<group_15::srv::StartPerceptionTest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__group_15__srv__StartPerceptionTest_Request
    std::shared_ptr<group_15::srv::StartPerceptionTest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__group_15__srv__StartPerceptionTest_Request
    std::shared_ptr<group_15::srv::StartPerceptionTest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartPerceptionTest_Request_ & other) const
  {
    if (this->banner_a != other.banner_a) {
      return false;
    }
    if (this->banner_b != other.banner_b) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartPerceptionTest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartPerceptionTest_Request_

// alias to use template instance with default allocator
using StartPerceptionTest_Request =
  group_15::srv::StartPerceptionTest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace group_15


#ifndef _WIN32
# define DEPRECATED__group_15__srv__StartPerceptionTest_Response __attribute__((deprecated))
#else
# define DEPRECATED__group_15__srv__StartPerceptionTest_Response __declspec(deprecated)
#endif

namespace group_15
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartPerceptionTest_Response_
{
  using Type = StartPerceptionTest_Response_<ContainerAllocator>;

  explicit StartPerceptionTest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = "";
    }
  }

  explicit StartPerceptionTest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : answer(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = "";
    }
  }

  // field types and members
  using _answer_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _answer_type answer;

  // setters for named parameter idiom
  Type & set__answer(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->answer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    group_15::srv::StartPerceptionTest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const group_15::srv::StartPerceptionTest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<group_15::srv::StartPerceptionTest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<group_15::srv::StartPerceptionTest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      group_15::srv::StartPerceptionTest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<group_15::srv::StartPerceptionTest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      group_15::srv::StartPerceptionTest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<group_15::srv::StartPerceptionTest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<group_15::srv::StartPerceptionTest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<group_15::srv::StartPerceptionTest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__group_15__srv__StartPerceptionTest_Response
    std::shared_ptr<group_15::srv::StartPerceptionTest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__group_15__srv__StartPerceptionTest_Response
    std::shared_ptr<group_15::srv::StartPerceptionTest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartPerceptionTest_Response_ & other) const
  {
    if (this->answer != other.answer) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartPerceptionTest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartPerceptionTest_Response_

// alias to use template instance with default allocator
using StartPerceptionTest_Response =
  group_15::srv::StartPerceptionTest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace group_15

namespace group_15
{

namespace srv
{

struct StartPerceptionTest
{
  using Request = group_15::srv::StartPerceptionTest_Request;
  using Response = group_15::srv::StartPerceptionTest_Response;
};

}  // namespace srv

}  // namespace group_15

#endif  // GROUP_15__SRV__DETAIL__START_PERCEPTION_TEST__STRUCT_HPP_
