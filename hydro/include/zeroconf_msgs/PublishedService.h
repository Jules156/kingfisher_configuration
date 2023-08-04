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
 * Auto-generated by genmsg_cpp from file /tmp/buildd/ros-hydro-zeroconf-msgs-0.2.1-0precise-20150326-2047/msg/PublishedService.msg
 *
 */


#ifndef ZEROCONF_MSGS_MESSAGE_PUBLISHEDSERVICE_H
#define ZEROCONF_MSGS_MESSAGE_PUBLISHEDSERVICE_H


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
struct PublishedService_
{
  typedef PublishedService_<ContainerAllocator> Type;

  PublishedService_()
    : name()
    , type()
    , domain()
    , port(0)
    , description()  {
    }
  PublishedService_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , type(_alloc)
    , domain(_alloc)
    , port(0)
    , description(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _domain_type;
  _domain_type domain;

   typedef int32_t _port_type;
  _port_type port;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _description_type;
  _description_type description;




  typedef boost::shared_ptr< ::zeroconf_msgs::PublishedService_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zeroconf_msgs::PublishedService_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct PublishedService_

typedef ::zeroconf_msgs::PublishedService_<std::allocator<void> > PublishedService;

typedef boost::shared_ptr< ::zeroconf_msgs::PublishedService > PublishedServicePtr;
typedef boost::shared_ptr< ::zeroconf_msgs::PublishedService const> PublishedServiceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zeroconf_msgs::PublishedService_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zeroconf_msgs::PublishedService_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::zeroconf_msgs::PublishedService_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zeroconf_msgs::PublishedService_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zeroconf_msgs::PublishedService_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zeroconf_msgs::PublishedService_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zeroconf_msgs::PublishedService_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zeroconf_msgs::PublishedService_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zeroconf_msgs::PublishedService_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1b00555a59ffeb95091f591a6ba849a";
  }

  static const char* value(const ::zeroconf_msgs::PublishedService_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1b00555a59ffeb9ULL;
  static const uint64_t static_value2 = 0x5091f591a6ba849aULL;
};

template<class ContainerAllocator>
struct DataType< ::zeroconf_msgs::PublishedService_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zeroconf_msgs/PublishedService";
  }

  static const char* value(const ::zeroconf_msgs::PublishedService_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zeroconf_msgs::PublishedService_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n\
# Provides all the properties required for publishing of a zeroconf service.\n\
\n\
string name\n\
string type\n\
string domain\n\
int32 port\n\
string description\n\
";
  }

  static const char* value(const ::zeroconf_msgs::PublishedService_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zeroconf_msgs::PublishedService_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.type);
      stream.next(m.domain);
      stream.next(m.port);
      stream.next(m.description);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PublishedService_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zeroconf_msgs::PublishedService_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zeroconf_msgs::PublishedService_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "domain: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.domain);
    s << indent << "port: ";
    Printer<int32_t>::stream(s, indent + "  ", v.port);
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.description);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZEROCONF_MSGS_MESSAGE_PUBLISHEDSERVICE_H