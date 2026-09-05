# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ackermann_msgs:srv/DetectObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectObject_Request(type):
    """Metaclass of message 'DetectObject_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ackermann_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ackermann_msgs.srv.DetectObject_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_object__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_object__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_object__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_object__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_object__request

            from sensor_msgs.msg import CompressedImage
            if CompressedImage.__class__._TYPE_SUPPORT is None:
                CompressedImage.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectObject_Request(metaclass=Metaclass_DetectObject_Request):
    """Message class 'DetectObject_Request'."""

    __slots__ = [
        '_image',
        '_prompt',
    ]

    _fields_and_field_types = {
        'image': 'sensor_msgs/CompressedImage',
        'prompt': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CompressedImage'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import CompressedImage
        self.image = kwargs.get('image', CompressedImage())
        self.prompt = kwargs.get('prompt', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.image != other.image:
            return False
        if self.prompt != other.prompt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import CompressedImage
            assert \
                isinstance(value, CompressedImage), \
                "The 'image' field must be a sub message of type 'CompressedImage'"
        self._image = value

    @builtins.property
    def prompt(self):
        """Message field 'prompt'."""
        return self._prompt

    @prompt.setter
    def prompt(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'prompt' field must be of type 'str'"
        self._prompt = value


# Import statements for member types

# Member 'confidences'
# Member 'centers_x'
# Member 'centers_y'
import array  # noqa: E402, I100

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_DetectObject_Response(type):
    """Metaclass of message 'DetectObject_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ackermann_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ackermann_msgs.srv.DetectObject_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_object__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_object__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_object__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_object__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_object__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectObject_Response(metaclass=Metaclass_DetectObject_Response):
    """Message class 'DetectObject_Response'."""

    __slots__ = [
        '_labels',
        '_confidences',
        '_centers_x',
        '_centers_y',
    ]

    _fields_and_field_types = {
        'labels': 'sequence<string>',
        'confidences': 'sequence<float>',
        'centers_x': 'sequence<float>',
        'centers_y': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.labels = kwargs.get('labels', [])
        self.confidences = array.array('f', kwargs.get('confidences', []))
        self.centers_x = array.array('f', kwargs.get('centers_x', []))
        self.centers_y = array.array('f', kwargs.get('centers_y', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.labels != other.labels:
            return False
        if self.confidences != other.confidences:
            return False
        if self.centers_x != other.centers_x:
            return False
        if self.centers_y != other.centers_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def labels(self):
        """Message field 'labels'."""
        return self._labels

    @labels.setter
    def labels(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'labels' field must be a set or sequence and each value of type 'str'"
        self._labels = value

    @builtins.property
    def confidences(self):
        """Message field 'confidences'."""
        return self._confidences

    @confidences.setter
    def confidences(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'confidences' array.array() must have the type code of 'f'"
            self._confidences = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'confidences' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._confidences = array.array('f', value)

    @builtins.property
    def centers_x(self):
        """Message field 'centers_x'."""
        return self._centers_x

    @centers_x.setter
    def centers_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'centers_x' array.array() must have the type code of 'f'"
            self._centers_x = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'centers_x' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._centers_x = array.array('f', value)

    @builtins.property
    def centers_y(self):
        """Message field 'centers_y'."""
        return self._centers_y

    @centers_y.setter
    def centers_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'centers_y' array.array() must have the type code of 'f'"
            self._centers_y = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'centers_y' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._centers_y = array.array('f', value)


class Metaclass_DetectObject(type):
    """Metaclass of service 'DetectObject'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ackermann_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ackermann_msgs.srv.DetectObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__detect_object

            from ackermann_msgs.srv import _detect_object
            if _detect_object.Metaclass_DetectObject_Request._TYPE_SUPPORT is None:
                _detect_object.Metaclass_DetectObject_Request.__import_type_support__()
            if _detect_object.Metaclass_DetectObject_Response._TYPE_SUPPORT is None:
                _detect_object.Metaclass_DetectObject_Response.__import_type_support__()


class DetectObject(metaclass=Metaclass_DetectObject):
    from ackermann_msgs.srv._detect_object import DetectObject_Request as Request
    from ackermann_msgs.srv._detect_object import DetectObject_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
