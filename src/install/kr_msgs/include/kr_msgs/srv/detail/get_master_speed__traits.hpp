// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kr_msgs:srv/GetMasterSpeed.idl
// generated code does not contain a copyright notice

#ifndef KR_MSGS__SRV__DETAIL__GET_MASTER_SPEED__TRAITS_HPP_
#define KR_MSGS__SRV__DETAIL__GET_MASTER_SPEED__TRAITS_HPP_

#include "kr_msgs/srv/detail/get_master_speed__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kr_msgs::srv::GetMasterSpeed_Request>()
{
  return "kr_msgs::srv::GetMasterSpeed_Request";
}

template<>
inline const char * name<kr_msgs::srv::GetMasterSpeed_Request>()
{
  return "kr_msgs/srv/GetMasterSpeed_Request";
}

template<>
struct has_fixed_size<kr_msgs::srv::GetMasterSpeed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kr_msgs::srv::GetMasterSpeed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kr_msgs::srv::GetMasterSpeed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kr_msgs::srv::GetMasterSpeed_Response>()
{
  return "kr_msgs::srv::GetMasterSpeed_Response";
}

template<>
inline const char * name<kr_msgs::srv::GetMasterSpeed_Response>()
{
  return "kr_msgs/srv/GetMasterSpeed_Response";
}

template<>
struct has_fixed_size<kr_msgs::srv::GetMasterSpeed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kr_msgs::srv::GetMasterSpeed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kr_msgs::srv::GetMasterSpeed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kr_msgs::srv::GetMasterSpeed>()
{
  return "kr_msgs::srv::GetMasterSpeed";
}

template<>
inline const char * name<kr_msgs::srv::GetMasterSpeed>()
{
  return "kr_msgs/srv/GetMasterSpeed";
}

template<>
struct has_fixed_size<kr_msgs::srv::GetMasterSpeed>
  : std::integral_constant<
    bool,
    has_fixed_size<kr_msgs::srv::GetMasterSpeed_Request>::value &&
    has_fixed_size<kr_msgs::srv::GetMasterSpeed_Response>::value
  >
{
};

template<>
struct has_bounded_size<kr_msgs::srv::GetMasterSpeed>
  : std::integral_constant<
    bool,
    has_bounded_size<kr_msgs::srv::GetMasterSpeed_Request>::value &&
    has_bounded_size<kr_msgs::srv::GetMasterSpeed_Response>::value
  >
{
};

template<>
struct is_service<kr_msgs::srv::GetMasterSpeed>
  : std::true_type
{
};

template<>
struct is_service_request<kr_msgs::srv::GetMasterSpeed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kr_msgs::srv::GetMasterSpeed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KR_MSGS__SRV__DETAIL__GET_MASTER_SPEED__TRAITS_HPP_