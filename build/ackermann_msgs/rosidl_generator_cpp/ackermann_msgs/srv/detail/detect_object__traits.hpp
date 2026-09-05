// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ackermann_msgs:srv/DetectObject.idl
// generated code does not contain a copyright notice

#ifndef ACKERMANN_MSGS__SRV__DETAIL__DETECT_OBJECT__TRAITS_HPP_
#define ACKERMANN_MSGS__SRV__DETAIL__DETECT_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ackermann_msgs/srv/detail/detect_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/compressed_image__traits.hpp"

namespace ackermann_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectObject_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: prompt
  {
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectObject_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: prompt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectObject_Request & msg, bool use_flow_style = false)
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

}  // namespace ackermann_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ackermann_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ackermann_msgs::srv::DetectObject_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ackermann_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ackermann_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ackermann_msgs::srv::DetectObject_Request & msg)
{
  return ackermann_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ackermann_msgs::srv::DetectObject_Request>()
{
  return "ackermann_msgs::srv::DetectObject_Request";
}

template<>
inline const char * name<ackermann_msgs::srv::DetectObject_Request>()
{
  return "ackermann_msgs/srv/DetectObject_Request";
}

template<>
struct has_fixed_size<ackermann_msgs::srv::DetectObject_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ackermann_msgs::srv::DetectObject_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ackermann_msgs::srv::DetectObject_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ackermann_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectObject_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: labels
  {
    if (msg.labels.size() == 0) {
      out << "labels: []";
    } else {
      out << "labels: [";
      size_t pending_items = msg.labels.size();
      for (auto item : msg.labels) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: confidences
  {
    if (msg.confidences.size() == 0) {
      out << "confidences: []";
    } else {
      out << "confidences: [";
      size_t pending_items = msg.confidences.size();
      for (auto item : msg.confidences) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: centers_x
  {
    if (msg.centers_x.size() == 0) {
      out << "centers_x: []";
    } else {
      out << "centers_x: [";
      size_t pending_items = msg.centers_x.size();
      for (auto item : msg.centers_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: centers_y
  {
    if (msg.centers_y.size() == 0) {
      out << "centers_y: []";
    } else {
      out << "centers_y: [";
      size_t pending_items = msg.centers_y.size();
      for (auto item : msg.centers_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectObject_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: labels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.labels.size() == 0) {
      out << "labels: []\n";
    } else {
      out << "labels:\n";
      for (auto item : msg.labels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: confidences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.confidences.size() == 0) {
      out << "confidences: []\n";
    } else {
      out << "confidences:\n";
      for (auto item : msg.confidences) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: centers_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.centers_x.size() == 0) {
      out << "centers_x: []\n";
    } else {
      out << "centers_x:\n";
      for (auto item : msg.centers_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: centers_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.centers_y.size() == 0) {
      out << "centers_y: []\n";
    } else {
      out << "centers_y:\n";
      for (auto item : msg.centers_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectObject_Response & msg, bool use_flow_style = false)
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

}  // namespace ackermann_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ackermann_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ackermann_msgs::srv::DetectObject_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ackermann_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ackermann_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ackermann_msgs::srv::DetectObject_Response & msg)
{
  return ackermann_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ackermann_msgs::srv::DetectObject_Response>()
{
  return "ackermann_msgs::srv::DetectObject_Response";
}

template<>
inline const char * name<ackermann_msgs::srv::DetectObject_Response>()
{
  return "ackermann_msgs/srv/DetectObject_Response";
}

template<>
struct has_fixed_size<ackermann_msgs::srv::DetectObject_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ackermann_msgs::srv::DetectObject_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ackermann_msgs::srv::DetectObject_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ackermann_msgs::srv::DetectObject>()
{
  return "ackermann_msgs::srv::DetectObject";
}

template<>
inline const char * name<ackermann_msgs::srv::DetectObject>()
{
  return "ackermann_msgs/srv/DetectObject";
}

template<>
struct has_fixed_size<ackermann_msgs::srv::DetectObject>
  : std::integral_constant<
    bool,
    has_fixed_size<ackermann_msgs::srv::DetectObject_Request>::value &&
    has_fixed_size<ackermann_msgs::srv::DetectObject_Response>::value
  >
{
};

template<>
struct has_bounded_size<ackermann_msgs::srv::DetectObject>
  : std::integral_constant<
    bool,
    has_bounded_size<ackermann_msgs::srv::DetectObject_Request>::value &&
    has_bounded_size<ackermann_msgs::srv::DetectObject_Response>::value
  >
{
};

template<>
struct is_service<ackermann_msgs::srv::DetectObject>
  : std::true_type
{
};

template<>
struct is_service_request<ackermann_msgs::srv::DetectObject_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ackermann_msgs::srv::DetectObject_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ACKERMANN_MSGS__SRV__DETAIL__DETECT_OBJECT__TRAITS_HPP_
