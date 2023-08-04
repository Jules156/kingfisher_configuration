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
 * Auto-generated by genmsg_cpp from file /tmp/buildd/ros-hydro-zeroconf-msgs-0.2.1-0precise-20150326-2047/srv/RemoveService.srv
 *
 */


#ifndef ZEROCONF_MSGS_MESSAGE_REMOVESERVICEREQUEST_H
#define ZEROCONF_MSGS_MESSAGE_REMOVESERVICEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <zeroconf_msgs/PublishedService.h>

namespace zeroconf_msgs
{
template <class ContainerAllocator>
struct RemoveServiceRequest_
{
  typedef RemoveServiceRequest_<ContainerAllocator> Type;

  RemoveServiceRequest_()
    : service()  {
    }
  RemoveServiceRequest_(const ContainerAllocator& _alloc)
    : service(_alloc)  {
    }



   typedef  ::zeroconf_msgs::PublishedService_<ContainerAllocator>  _service_type;
  _service_type service;




  typedef boost::shared_ptr< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct RemoveServiceRequest_

typedef ::zeroconf_msgs::RemoveServiceRequest_<std::allocator<void> > RemoveServiceRequest;

typedef boost::shared_ptr< ::zeroconf_msgs::RemoveServiceRequest > RemoveServiceRequestPtr;
typedef boost::shared_ptr< ::zeroconf_msgs::RemoveServiceRequest const> RemoveServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace zeroconf_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'zeroconf_msgs': ['/tmp/buildd/ros-hydro-zeroconf-msgs-0.2.1-0precise-20150326-2047/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7028a4a43349f6cca86209ddd39f607a";
  }

  static const char* value(const ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7028a4a43349f6ccULL;
  static const uint64_t static_value2 = 0xa86209ddd39f607aULL;
};

template<class ContainerAllocator>
struct DataType< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zeroconf_msgs/RemoveServiceRequest";
  }

  static const char* value(const ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zeroconf_msgs/PublishedService service\n\
\n\
================================================================================\n\
MSG: zeroconf_msgs/PublishedService\n\
#\n\
# Provides all the properties required for publishing of a zeroconf service.\n\
\n\
string name\n\
string type\n\
string domain\n\
int32 port\n\
string description\n\
";
  }

  static const char* value(const ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.service);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RemoveServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zeroconf_msgs::RemoveServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "service: ";
    s << std::endl;
    Printer< ::zeroconf_msgs::PublishedService_<ContainerAllocator> >::stream(s, indent + "  ", v.service);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZEROCONF_MSGS_MESSAGE_REMOVESERVICEREQUEST_H
