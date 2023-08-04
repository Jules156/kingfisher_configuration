/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /tmp/buildd/ros-hydro-zeroconf-msgs-0.2.1-0precise-20150326-2047/srv/RemoveListener.srv
 *
 */


#ifndef ZEROCONF_MSGS_MESSAGE_REMOVELISTENERRESPONSE_H
#define ZEROCONF_MSGS_MESSAGE_REMOVELISTENERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace zeroconf_msgs
{
template <class ContainerAllocator>
struct RemoveListenerResponse_
{
  typedef RemoveListenerResponse_<ContainerAllocator> Type;

  RemoveListenerResponse_()
    : result(false)  {
    }
  RemoveListenerResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
    }



   typedef uint8_t _result_type;
  _result_type result;




  typedef boost::shared_ptr< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct RemoveListenerResponse_

typedef ::zeroconf_msgs::RemoveListenerResponse_<std::allocator<void> > RemoveListenerResponse;

typedef boost::shared_ptr< ::zeroconf_msgs::RemoveListenerResponse > RemoveListenerResponsePtr;
typedef boost::shared_ptr< ::zeroconf_msgs::RemoveListenerResponse const> RemoveListenerResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace zeroconf_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'zeroconf_msgs': ['/tmp/buildd/ros-hydro-zeroconf-msgs-0.2.1-0precise-20150326-2047/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zeroconf_msgs/RemoveListenerResponse";
  }

  static const char* value(const ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n\
";
  }

  static const char* value(const ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RemoveListenerResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zeroconf_msgs::RemoveListenerResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZEROCONF_MSGS_MESSAGE_REMOVELISTENERRESPONSE_H
