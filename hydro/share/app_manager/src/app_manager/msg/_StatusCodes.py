"""autogenerated by genpy from app_manager/StatusCodes.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class StatusCodes(genpy.Message):
  _md5sum = "5f286aed2b2ab4b227e7b7185bae624d"
  _type = "app_manager/StatusCodes"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Common error codes used with App Manager.
int32 SUCCESS = 0
# Request was invalid.
int32 BAD_REQUEST = 400
# App is not installed.
int32 NOT_FOUND = 404
# App is not running.
int32 NOT_RUNNING = 430
# Unknown internal error on the server.
int32 INTERNAL_ERROR = 500
# App is installed but failed validation.
int32 APP_INVALID = 510
# App manager does not support launching multiple apps simultaneously. Running app must first be stopped.
int32 MULTIAPP_NOT_SUPPORTED = 511

"""
  # Pseudo-constants
  SUCCESS = 0
  BAD_REQUEST = 400
  NOT_FOUND = 404
  NOT_RUNNING = 430
  INTERNAL_ERROR = 500
  APP_INVALID = 510
  MULTIAPP_NOT_SUPPORTED = 511

  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(StatusCodes, self).__init__(*args, **kwds)

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
