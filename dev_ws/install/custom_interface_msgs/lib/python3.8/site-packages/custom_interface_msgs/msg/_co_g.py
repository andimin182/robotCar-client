# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interface_msgs:msg/CoG.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CoG(type):
    """Metaclass of message 'CoG'."""

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
            module = import_type_support('custom_interface_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interface_msgs.msg.CoG')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__co_g
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__co_g
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__co_g
            cls._TYPE_SUPPORT = module.type_support_msg__msg__co_g
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__co_g

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CoG(metaclass=Metaclass_CoG):
    """Message class 'CoG'."""

    __slots__ = [
        '_position_x',
        '_position_y',
    ]

    _fields_and_field_types = {
        'position_x': 'int32',
        'position_y': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.position_x = kwargs.get('position_x', int())
        self.position_y = kwargs.get('position_y', int())

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
        if self.position_x != other.position_x:
            return False
        if self.position_y != other.position_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def position_x(self):
        """Message field 'position_x'."""
        return self._position_x

    @position_x.setter
    def position_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'position_x' field must be an integer in [-2147483648, 2147483647]"
        self._position_x = value

    @property
    def position_y(self):
        """Message field 'position_y'."""
        return self._position_y

    @position_y.setter
    def position_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'position_y' field must be an integer in [-2147483648, 2147483647]"
        self._position_y = value
