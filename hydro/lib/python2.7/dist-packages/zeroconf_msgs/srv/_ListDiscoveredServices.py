"""autogenerated by genpy from zeroconf_msgs/ListDiscoveredServicesRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ListDiscoveredServicesRequest(genpy.Message):
  _md5sum = "e1bf1fd6519c823d87c16f342a193a85"
  _type = "zeroconf_msgs/ListDiscoveredServicesRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string service_type

"""
  __slots__ = ['service_type']
  _slot_types = ['string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       service_type

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ListDiscoveredServicesRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.service_type is None:
        self.service_type = ''
    else:
      self.service_type = ''

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
      _x = self.service_type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.service_type = str[start:end].decode('utf-8')
      else:
        self.service_type = str[start:end]
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
      _x = self.service_type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
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
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.service_type = str[start:end].decode('utf-8')
      else:
        self.service_type = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
"""autogenerated by genpy from zeroconf_msgs/ListDiscoveredServicesResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import zeroconf_msgs.msg

class ListDiscoveredServicesResponse(genpy.Message):
  _md5sum = "5e5ad0f4eb44cd96b6518cfd53715bb5"
  _type = "zeroconf_msgs/ListDiscoveredServicesResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """zeroconf_msgs/DiscoveredService[] services


================================================================================
MSG: zeroconf_msgs/DiscoveredService
#
# Provides all the properties required for definition of a discovered 
# zeroconf service. Note that it contains rather alot more information
# than that which is used to publish a zeroconf service.

# Service Part
string name
string type
string domain
string description

# Resolved part
string hostname
string[] ipv4_addresses
string[] ipv6_addresses
int32 port

# These are detailed variables that you should not normally need
# and can be safely ignored in most circumstances (currently used
# by the avahi implementation).

uint32 cookie
bool is_local
bool our_own
bool wide_area
bool multicast
bool cached


"""
  __slots__ = ['services']
  _slot_types = ['zeroconf_msgs/DiscoveredService[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       services

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ListDiscoveredServicesResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.services is None:
        self.services = []
    else:
      self.services = []

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
      length = len(self.services)
      buff.write(_struct_I.pack(length))
      for val1 in self.services:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.type
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.domain
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.description
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.hostname
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        length = len(val1.ipv4_addresses)
        buff.write(_struct_I.pack(length))
        for val2 in val1.ipv4_addresses:
          length = len(val2)
          if python3 or type(val2) == unicode:
            val2 = val2.encode('utf-8')
            length = len(val2)
          buff.write(struct.pack('<I%ss'%length, length, val2))
        length = len(val1.ipv6_addresses)
        buff.write(_struct_I.pack(length))
        for val2 in val1.ipv6_addresses:
          length = len(val2)
          if python3 or type(val2) == unicode:
            val2 = val2.encode('utf-8')
            length = len(val2)
          buff.write(struct.pack('<I%ss'%length, length, val2))
        _x = val1
        buff.write(_struct_iI5B.pack(_x.port, _x.cookie, _x.is_local, _x.our_own, _x.wide_area, _x.multicast, _x.cached))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.services is None:
        self.services = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.services = []
      for i in range(0, length):
        val1 = zeroconf_msgs.msg.DiscoveredService()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.type = str[start:end].decode('utf-8')
        else:
          val1.type = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.domain = str[start:end].decode('utf-8')
        else:
          val1.domain = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.description = str[start:end].decode('utf-8')
        else:
          val1.description = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.hostname = str[start:end].decode('utf-8')
        else:
          val1.hostname = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.ipv4_addresses = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2 = str[start:end].decode('utf-8')
          else:
            val2 = str[start:end]
          val1.ipv4_addresses.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.ipv6_addresses = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2 = str[start:end].decode('utf-8')
          else:
            val2 = str[start:end]
          val1.ipv6_addresses.append(val2)
        _x = val1
        start = end
        end += 13
        (_x.port, _x.cookie, _x.is_local, _x.our_own, _x.wide_area, _x.multicast, _x.cached,) = _struct_iI5B.unpack(str[start:end])
        val1.is_local = bool(val1.is_local)
        val1.our_own = bool(val1.our_own)
        val1.wide_area = bool(val1.wide_area)
        val1.multicast = bool(val1.multicast)
        val1.cached = bool(val1.cached)
        self.services.append(val1)
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
      length = len(self.services)
      buff.write(_struct_I.pack(length))
      for val1 in self.services:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.type
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.domain
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.description
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.hostname
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        length = len(val1.ipv4_addresses)
        buff.write(_struct_I.pack(length))
        for val2 in val1.ipv4_addresses:
          length = len(val2)
          if python3 or type(val2) == unicode:
            val2 = val2.encode('utf-8')
            length = len(val2)
          buff.write(struct.pack('<I%ss'%length, length, val2))
        length = len(val1.ipv6_addresses)
        buff.write(_struct_I.pack(length))
        for val2 in val1.ipv6_addresses:
          length = len(val2)
          if python3 or type(val2) == unicode:
            val2 = val2.encode('utf-8')
            length = len(val2)
          buff.write(struct.pack('<I%ss'%length, length, val2))
        _x = val1
        buff.write(_struct_iI5B.pack(_x.port, _x.cookie, _x.is_local, _x.our_own, _x.wide_area, _x.multicast, _x.cached))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.services is None:
        self.services = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.services = []
      for i in range(0, length):
        val1 = zeroconf_msgs.msg.DiscoveredService()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.type = str[start:end].decode('utf-8')
        else:
          val1.type = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.domain = str[start:end].decode('utf-8')
        else:
          val1.domain = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.description = str[start:end].decode('utf-8')
        else:
          val1.description = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.hostname = str[start:end].decode('utf-8')
        else:
          val1.hostname = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.ipv4_addresses = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2 = str[start:end].decode('utf-8')
          else:
            val2 = str[start:end]
          val1.ipv4_addresses.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.ipv6_addresses = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2 = str[start:end].decode('utf-8')
          else:
            val2 = str[start:end]
          val1.ipv6_addresses.append(val2)
        _x = val1
        start = end
        end += 13
        (_x.port, _x.cookie, _x.is_local, _x.our_own, _x.wide_area, _x.multicast, _x.cached,) = _struct_iI5B.unpack(str[start:end])
        val1.is_local = bool(val1.is_local)
        val1.our_own = bool(val1.our_own)
        val1.wide_area = bool(val1.wide_area)
        val1.multicast = bool(val1.multicast)
        val1.cached = bool(val1.cached)
        self.services.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_iI5B = struct.Struct("<iI5B")
class ListDiscoveredServices(object):
  _type          = 'zeroconf_msgs/ListDiscoveredServices'
  _md5sum = '5e4f7a51e03f794adcd5dbfc4a5acfb6'
  _request_class  = ListDiscoveredServicesRequest
  _response_class = ListDiscoveredServicesResponse
