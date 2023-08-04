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
 * Auto-generated by genmsg_cpp from file /tmp/buildd/ros-hydro-zeroconf-msgs-0.2.1-0precise-20150326-2047/srv/ListDiscoveredServices.srv
 *
 */


#ifndef ZEROCONF_MSGS_MESSAGE_LISTDISCOVEREDSERVICESRESPONSE_H
#define ZEROCONF_MSGS_MESSAGE_LISTDISCOVEREDSERVICESRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <zeroconf_msgs/DiscoveredService.h>

namespace zeroconf_msgs
{
template <class ContainerAllocator>
struct ListDiscoveredServicesResponse_
{
  typedef ListDiscoveredServicesResponse_<ContainerAllocator> Type;

  ListDiscoveredServicesResponse_()
    : services()  {
    }
  ListDiscoveredServicesResponse_(const ContainerAllocator& _alloc)
    : services(_alloc)  {
    }



   typedef std::vector< ::zeroconf_msgs::DiscoveredService_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::zeroconf_msgs::DiscoveredService_<ContainerAllocator> >::other >  _services_type;
  _services_type services;




  typedef boost::shared_ptr< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct ListDiscoveredServicesResponse_

typedef ::zeroconf_msgs::ListDiscoveredServicesResponse_<std::allocator<void> > ListDiscoveredServicesResponse;

typedef boost::shared_ptr< ::zeroconf_msgs::ListDiscoveredServicesResponse > ListDiscoveredServicesResponsePtr;
typedef boost::shared_ptr< ::zeroconf_msgs::ListDiscoveredServicesResponse const> ListDiscoveredServicesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e5ad0f4eb44cd96b6518cfd53715bb5";
  }

  static const char* value(const ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5e5ad0f4eb44cd96ULL;
  static const uint64_t static_value2 = 0xb6518cfd53715bb5ULL;
};

template<class ContainerAllocator>
struct DataType< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zeroconf_msgs/ListDiscoveredServicesResponse";
  }

  static const char* value(const ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zeroconf_msgs/DiscoveredService[] services\n\
\n\
\n\
================================================================================\n\
MSG: zeroconf_msgs/DiscoveredService\n\
#\n\
# Provides all the properties required for definition of a discovered \n\
# zeroconf service. Note that it contains rather alot more information\n\
# than that which is used to publish a zeroconf service.\n\
\n\
# Service Part\n\
string name\n\
string type\n\
string domain\n\
string description\n\
\n\
# Resolved part\n\
string hostname\n\
string[] ipv4_addresses\n\
string[] ipv6_addresses\n\
int32 port\n\
\n\
# These are detailed variables that you should not normally need\n\
# and can be safely ignored in most circumstances (currently used\n\
# by the avahi implementation).\n\
\n\
uint32 cookie\n\
bool is_local\n\
bool our_own\n\
bool wide_area\n\
bool multicast\n\
bool cached\n\
\n\
";
  }

  static const char* value(const ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.services);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ListDiscoveredServicesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zeroconf_msgs::ListDiscoveredServicesResponse_<ContainerAllocator>& v)
  {
    s << indent << "services[]" << std::endl;
    for (size_t i = 0; i < v.services.size(); ++i)
    {
      s << indent << "  services[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::zeroconf_msgs::DiscoveredService_<ContainerAllocator> >::stream(s, indent + "    ", v.services[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZEROCONF_MSGS_MESSAGE_LISTDISCOVEREDSERVICESRESPONSE_H
