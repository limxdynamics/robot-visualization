# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hand_msgs:msg/HandCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'ctrl_mode'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HandCmd(type):
    """Metaclass of message 'HandCmd'."""

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
            module = import_type_support('hand_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hand_msgs.msg.HandCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hand_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hand_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hand_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hand_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hand_cmd

            from hand_msgs.msg import HandMsg
            if HandMsg.__class__._TYPE_SUPPORT is None:
                HandMsg.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HandCmd(metaclass=Metaclass_HandCmd):
    """Message class 'HandCmd'."""

    __slots__ = [
        '_header',
        '_hand_type',
        '_ctrl_mode',
        '_hand_cmd',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'hand_type': 'string',
        'ctrl_mode': 'uint8[2]',
        'hand_cmd': 'hand_msgs/HandMsg[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['hand_msgs', 'msg'], 'HandMsg'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.hand_type = kwargs.get('hand_type', str())
        if 'ctrl_mode' not in kwargs:
            self.ctrl_mode = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.ctrl_mode = numpy.array(kwargs.get('ctrl_mode'), dtype=numpy.uint8)
            assert self.ctrl_mode.shape == (2, )
        from hand_msgs.msg import HandMsg
        self.hand_cmd = kwargs.get(
            'hand_cmd',
            [HandMsg() for x in range(2)]
        )

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
        if self.header != other.header:
            return False
        if self.hand_type != other.hand_type:
            return False
        if all(self.ctrl_mode != other.ctrl_mode):
            return False
        if self.hand_cmd != other.hand_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def hand_type(self):
        """Message field 'hand_type'."""
        return self._hand_type

    @hand_type.setter
    def hand_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hand_type' field must be of type 'str'"
        self._hand_type = value

    @builtins.property
    def ctrl_mode(self):
        """Message field 'ctrl_mode'."""
        return self._ctrl_mode

    @ctrl_mode.setter
    def ctrl_mode(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'ctrl_mode' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 2, \
                "The 'ctrl_mode' numpy.ndarray() must have a size of 2"
            self._ctrl_mode = value
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'ctrl_mode' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._ctrl_mode = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def hand_cmd(self):
        """Message field 'hand_cmd'."""
        return self._hand_cmd

    @hand_cmd.setter
    def hand_cmd(self, value):
        if __debug__:
            from hand_msgs.msg import HandMsg
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
                 len(value) == 2 and
                 all(isinstance(v, HandMsg) for v in value) and
                 True), \
                "The 'hand_cmd' field must be a set or sequence with length 2 and each value of type 'HandMsg'"
        self._hand_cmd = value
