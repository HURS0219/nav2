// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ackermann_msgs:srv/DetectObject.idl
// generated code does not contain a copyright notice

#ifndef ACKERMANN_MSGS__SRV__DETAIL__DETECT_OBJECT__BUILDER_HPP_
#define ACKERMANN_MSGS__SRV__DETAIL__DETECT_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ackermann_msgs/srv/detail/detect_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ackermann_msgs
{

namespace srv
{

namespace builder
{

class Init_DetectObject_Request_prompt
{
public:
  explicit Init_DetectObject_Request_prompt(::ackermann_msgs::srv::DetectObject_Request & msg)
  : msg_(msg)
  {}
  ::ackermann_msgs::srv::DetectObject_Request prompt(::ackermann_msgs::srv::DetectObject_Request::_prompt_type arg)
  {
    msg_.prompt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ackermann_msgs::srv::DetectObject_Request msg_;
};

class Init_DetectObject_Request_image
{
public:
  Init_DetectObject_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObject_Request_prompt image(::ackermann_msgs::srv::DetectObject_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_DetectObject_Request_prompt(msg_);
  }

private:
  ::ackermann_msgs::srv::DetectObject_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ackermann_msgs::srv::DetectObject_Request>()
{
  return ackermann_msgs::srv::builder::Init_DetectObject_Request_image();
}

}  // namespace ackermann_msgs


namespace ackermann_msgs
{

namespace srv
{

namespace builder
{

class Init_DetectObject_Response_centers_y
{
public:
  explicit Init_DetectObject_Response_centers_y(::ackermann_msgs::srv::DetectObject_Response & msg)
  : msg_(msg)
  {}
  ::ackermann_msgs::srv::DetectObject_Response centers_y(::ackermann_msgs::srv::DetectObject_Response::_centers_y_type arg)
  {
    msg_.centers_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ackermann_msgs::srv::DetectObject_Response msg_;
};

class Init_DetectObject_Response_centers_x
{
public:
  explicit Init_DetectObject_Response_centers_x(::ackermann_msgs::srv::DetectObject_Response & msg)
  : msg_(msg)
  {}
  Init_DetectObject_Response_centers_y centers_x(::ackermann_msgs::srv::DetectObject_Response::_centers_x_type arg)
  {
    msg_.centers_x = std::move(arg);
    return Init_DetectObject_Response_centers_y(msg_);
  }

private:
  ::ackermann_msgs::srv::DetectObject_Response msg_;
};

class Init_DetectObject_Response_confidences
{
public:
  explicit Init_DetectObject_Response_confidences(::ackermann_msgs::srv::DetectObject_Response & msg)
  : msg_(msg)
  {}
  Init_DetectObject_Response_centers_x confidences(::ackermann_msgs::srv::DetectObject_Response::_confidences_type arg)
  {
    msg_.confidences = std::move(arg);
    return Init_DetectObject_Response_centers_x(msg_);
  }

private:
  ::ackermann_msgs::srv::DetectObject_Response msg_;
};

class Init_DetectObject_Response_labels
{
public:
  Init_DetectObject_Response_labels()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObject_Response_confidences labels(::ackermann_msgs::srv::DetectObject_Response::_labels_type arg)
  {
    msg_.labels = std::move(arg);
    return Init_DetectObject_Response_confidences(msg_);
  }

private:
  ::ackermann_msgs::srv::DetectObject_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ackermann_msgs::srv::DetectObject_Response>()
{
  return ackermann_msgs::srv::builder::Init_DetectObject_Response_labels();
}

}  // namespace ackermann_msgs

#endif  // ACKERMANN_MSGS__SRV__DETAIL__DETECT_OBJECT__BUILDER_HPP_
