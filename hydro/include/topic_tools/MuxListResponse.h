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
 * Auto-generated by genmsg_cpp from file /tmp/buildd/ros-hydro-topic-tools-1.10.12-0precise-20150329-0204/srv/MuxList.srv
 *
 */


#ifndef TOPIC_TOOLS_MESSAGE_MUXLISTRESPONSE_H
#define TOPIC_TOOLS_MESSAGE_MUXLISTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace topic_tools
{
template <class ContainerAllocator>
struct MuxListResponse_
{
  typedef MuxListResponse_<ContainerAllocator> Type;

  MuxListResponse_()
    : topics()  {
    }
  MuxListResponse_(const ContainerAllocator& _alloc)
    : topics(_alloc)  {
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _topics_type;
  _topics_type topics;




  typedef boost::shared_ptr< ::topic_tools::MuxListResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::topic_tools::MuxListResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct MuxListResponse_

typedef ::topic_tools::MuxListResponse_<std::allocator<void> > MuxListResponse;

typedef boost::shared_ptr< ::topic_tools::MuxListResponse > MuxListResponsePtr;
typedef boost::shared_ptr< ::topic_tools::MuxListResponse const> MuxListResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::topic_tools::MuxListResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::topic_tools::MuxListResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace topic_tools

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::topic_tools::MuxListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::topic_tools::MuxListResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::topic_tools::MuxListResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::topic_tools::MuxListResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::topic_tools::MuxListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::topic_tools::MuxListResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::topic_tools::MuxListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b0eef9a05d4e829092fc2f2c3c2aad3d";
  }

  static const char* value(const ::topic_tools::MuxListResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb0eef9a05d4e8290ULL;
  static const uint64_t static_value2 = 0x92fc2f2c3c2aad3dULL;
};

template<class ContainerAllocator>
struct DataType< ::topic_tools::MuxListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "topic_tools/MuxListResponse";
  }

  static const char* value(const ::topic_tools::MuxListResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::topic_tools::MuxListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] topics\n\
\n\
";
  }

  static const char* value(const ::topic_tools::MuxListResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::topic_tools::MuxListResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topics);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct MuxListResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::topic_tools::MuxListResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::topic_tools::MuxListResponse_<ContainerAllocator>& v)
  {
    s << indent << "topics[]" << std::endl;
    for (size_t i = 0; i < v.topics.size(); ++i)
    {
      s << indent << "  topics[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topics[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOPIC_TOOLS_MESSAGE_MUXLISTRESPONSE_H
