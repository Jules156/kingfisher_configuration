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
 * Auto-generated by genmsg_cpp from file /tmp/buildd/ros-hydro-clearpath-base-0.4.4-0precise-20150328-0741/msg/Distance.msg
 *
 */


#ifndef CLEARPATH_BASE_MESSAGE_DISTANCE_H
#define CLEARPATH_BASE_MESSAGE_DISTANCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace clearpath_base
{
template <class ContainerAllocator>
struct Distance_
{
  typedef Distance_<ContainerAllocator> Type;

  Distance_()
    : header()
    , distances()  {
    }
  Distance_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , distances(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _distances_type;
  _distances_type distances;




  typedef boost::shared_ptr< ::clearpath_base::Distance_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::clearpath_base::Distance_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct Distance_

typedef ::clearpath_base::Distance_<std::allocator<void> > Distance;

typedef boost::shared_ptr< ::clearpath_base::Distance > DistancePtr;
typedef boost::shared_ptr< ::clearpath_base::Distance const> DistanceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::clearpath_base::Distance_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::clearpath_base::Distance_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace clearpath_base

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/hydro/share/geometry_msgs/cmake/../msg'], 'clearpath_base': ['/tmp/buildd/ros-hydro-clearpath-base-0.4.4-0precise-20150328-0741/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::clearpath_base::Distance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::clearpath_base::Distance_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::clearpath_base::Distance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::clearpath_base::Distance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::clearpath_base::Distance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::clearpath_base::Distance_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::clearpath_base::Distance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5cd97954696edc5d59dd80cb0218765a";
  }

  static const char* value(const ::clearpath_base::Distance_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5cd97954696edc5dULL;
  static const uint64_t static_value2 = 0x59dd80cb0218765aULL;
};

template<class ContainerAllocator>
struct DataType< ::clearpath_base::Distance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "clearpath_base/Distance";
  }

  static const char* value(const ::clearpath_base::Distance_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::clearpath_base::Distance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64[] distances\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::clearpath_base::Distance_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::clearpath_base::Distance_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.distances);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Distance_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::clearpath_base::Distance_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::clearpath_base::Distance_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "distances[]" << std::endl;
    for (size_t i = 0; i < v.distances.size(); ++i)
    {
      s << indent << "  distances[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.distances[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CLEARPATH_BASE_MESSAGE_DISTANCE_H
