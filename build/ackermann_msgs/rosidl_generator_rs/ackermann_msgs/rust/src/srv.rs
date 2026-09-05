#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to ackermann_msgs__srv__DetectObject_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectObject_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub image: sensor_msgs::msg::CompressedImage,


    // This member is not documented.
    #[allow(missing_docs)]
    pub prompt: std::string::String,

}



impl Default for DetectObject_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DetectObject_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DetectObject_Request {
  type RmwMsg = super::srv::rmw::DetectObject_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        image: sensor_msgs::msg::CompressedImage::into_rmw_message(std::borrow::Cow::Owned(msg.image)).into_owned(),
        prompt: msg.prompt.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        image: sensor_msgs::msg::CompressedImage::into_rmw_message(std::borrow::Cow::Borrowed(&msg.image)).into_owned(),
        prompt: msg.prompt.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      image: sensor_msgs::msg::CompressedImage::from_rmw_message(msg.image),
      prompt: msg.prompt.to_string(),
    }
  }
}


// Corresponds to ackermann_msgs__srv__DetectObject_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectObject_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub labels: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidences: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub centers_x: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub centers_y: Vec<f32>,

}



impl Default for DetectObject_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DetectObject_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DetectObject_Response {
  type RmwMsg = super::srv::rmw::DetectObject_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        labels: msg.labels
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        confidences: msg.confidences.into(),
        centers_x: msg.centers_x.into(),
        centers_y: msg.centers_y.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        labels: msg.labels
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        confidences: msg.confidences.as_slice().into(),
        centers_x: msg.centers_x.as_slice().into(),
        centers_y: msg.centers_y.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      labels: msg.labels
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      confidences: msg.confidences
          .into_iter()
          .collect(),
      centers_x: msg.centers_x
          .into_iter()
          .collect(),
      centers_y: msg.centers_y
          .into_iter()
          .collect(),
    }
  }
}






#[link(name = "ackermann_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__ackermann_msgs__srv__DetectObject() -> *const std::ffi::c_void;
}

// Corresponds to ackermann_msgs__srv__DetectObject
#[allow(missing_docs, non_camel_case_types)]
pub struct DetectObject;

impl rosidl_runtime_rs::Service for DetectObject {
    type Request = DetectObject_Request;
    type Response = DetectObject_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__ackermann_msgs__srv__DetectObject() }
    }
}


