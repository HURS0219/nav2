// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ackermann_msgs:srv/DetectObject.idl
// generated code does not contain a copyright notice

#ifndef ACKERMANN_MSGS__SRV__DETAIL__DETECT_OBJECT__STRUCT_HPP_
#define ACKERMANN_MSGS__SRV__DETAIL__DETECT_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/compressed_image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ackermann_msgs__srv__DetectObject_Request __attribute__((deprecated))
#else
# define DEPRECATED__ackermann_msgs__srv__DetectObject_Request __declspec(deprecated)
#endif

namespace ackermann_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectObject_Request_
{
  using Type = DetectObject_Request_<ContainerAllocator>;

  explicit DetectObject_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
    }
  }

  explicit DetectObject_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init),
    prompt(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
    }
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::CompressedImage_<ContainerAllocator>;
  _image_type image;
  using _prompt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _prompt_type prompt;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::CompressedImage_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__prompt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->prompt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ackermann_msgs::srv::DetectObject_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ackermann_msgs::srv::DetectObject_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ackermann_msgs::srv::DetectObject_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ackermann_msgs::srv::DetectObject_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ackermann_msgs::srv::DetectObject_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ackermann_msgs::srv::DetectObject_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ackermann_msgs::srv::DetectObject_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ackermann_msgs::srv::DetectObject_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ackermann_msgs::srv::DetectObject_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ackermann_msgs::srv::DetectObject_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ackermann_msgs__srv__DetectObject_Request
    std::shared_ptr<ackermann_msgs::srv::DetectObject_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ackermann_msgs__srv__DetectObject_Request
    std::shared_ptr<ackermann_msgs::srv::DetectObject_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectObject_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    if (this->prompt != other.prompt) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectObject_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectObject_Request_

// alias to use template instance with default allocator
using DetectObject_Request =
  ackermann_msgs::srv::DetectObject_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ackermann_msgs


#ifndef _WIN32
# define DEPRECATED__ackermann_msgs__srv__DetectObject_Response __attribute__((deprecated))
#else
# define DEPRECATED__ackermann_msgs__srv__DetectObject_Response __declspec(deprecated)
#endif

namespace ackermann_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectObject_Response_
{
  using Type = DetectObject_Response_<ContainerAllocator>;

  explicit DetectObject_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DetectObject_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _labels_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _labels_type labels;
  using _confidences_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _confidences_type confidences;
  using _centers_x_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _centers_x_type centers_x;
  using _centers_y_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _centers_y_type centers_y;

  // setters for named parameter idiom
  Type & set__labels(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->labels = _arg;
    return *this;
  }
  Type & set__confidences(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->confidences = _arg;
    return *this;
  }
  Type & set__centers_x(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->centers_x = _arg;
    return *this;
  }
  Type & set__centers_y(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->centers_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ackermann_msgs::srv::DetectObject_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ackermann_msgs::srv::DetectObject_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ackermann_msgs::srv::DetectObject_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ackermann_msgs::srv::DetectObject_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ackermann_msgs::srv::DetectObject_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ackermann_msgs::srv::DetectObject_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ackermann_msgs::srv::DetectObject_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ackermann_msgs::srv::DetectObject_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ackermann_msgs::srv::DetectObject_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ackermann_msgs::srv::DetectObject_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ackermann_msgs__srv__DetectObject_Response
    std::shared_ptr<ackermann_msgs::srv::DetectObject_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ackermann_msgs__srv__DetectObject_Response
    std::shared_ptr<ackermann_msgs::srv::DetectObject_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectObject_Response_ & other) const
  {
    if (this->labels != other.labels) {
      return false;
    }
    if (this->confidences != other.confidences) {
      return false;
    }
    if (this->centers_x != other.centers_x) {
      return false;
    }
    if (this->centers_y != other.centers_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectObject_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectObject_Response_

// alias to use template instance with default allocator
using DetectObject_Response =
  ackermann_msgs::srv::DetectObject_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ackermann_msgs

namespace ackermann_msgs
{

namespace srv
{

struct DetectObject
{
  using Request = ackermann_msgs::srv::DetectObject_Request;
  using Response = ackermann_msgs::srv::DetectObject_Response;
};

}  // namespace srv

}  // namespace ackermann_msgs

#endif  // ACKERMANN_MSGS__SRV__DETAIL__DETECT_OBJECT__STRUCT_HPP_
