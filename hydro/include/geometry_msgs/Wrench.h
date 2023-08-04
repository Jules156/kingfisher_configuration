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
 * Auto-generated by genmsg_cpp from file /tmp/buildd/ros-hydro-geometry-msgs-1.10.6-0precise-20150327-1749/msg/Wrench.msg
 *
 */


#ifndef GEOMETRY_MSGS_MESSAGE_WRENCH_H
#define GEOMETRY_MSGS_MESSAGE_WRENCH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace geometry_msgs
{
template <class ContainerAllocator>
struct Wrench_
{
  typedef Wrench_<ContainerAllocator> Type;

  Wrench_()
    : force()
    , torque()  {
    }
  Wrench_(const ContainerAllocator& _alloc)
    : force(_alloc)
    , torque(_alloc)  {
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _force_type;
  _force_type force;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _torque_type;
  _torque_type torque;




  typedef boost::shared_ptr< ::geometry_msgs::Wrench_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::geometry_msgs::Wrench_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct Wrench_

typedef ::geometry_msgs::Wrench_<std::allocator<void> > Wrench;

typedef boost::shared_ptr< ::geometry_msgs::Wrench > WrenchPtr;
typedef boost::shared_ptr< ::geometry_msgs::Wrench const> WrenchConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::geometry_msgs::Wrench_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace geometry_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/tmp/buildd/ros-hydro-geometry-msgs-1.10.6-0precise-20150327-1749/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::geometry_msgs::Wrench_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::geometry_msgs::Wrench_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geometry_msgs::Wrench_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geometry_msgs::Wrench_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geometry_msgs::Wrench_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geometry_msgs::Wrench_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::geometry_msgs::Wrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f539cf138b23283b520fd271b567936";
  }

  static const char* value(const ::geometry_msgs::Wrench_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f539cf138b23283ULL;
  static const uint64_t static_value2 = 0xb520fd271b567936ULL;
};

template<class ContainerAllocator>
struct DataType< ::geometry_msgs::Wrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Wrench";
  }

  static const char* value(const ::geometry_msgs::Wrench_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::geometry_msgs::Wrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This represents force in free space, separated into\n\
# its linear and angular parts.\n\
Vector3  force\n\
Vector3  torque\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::geometry_msgs::Wrench_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::geometry_msgs::Wrench_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.force);
      stream.next(m.torque);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Wrench_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::geometry_msgs::Wrench_<ContainerAllocator>& v)
  {
    s << indent << "force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.force);
    s << indent << "torque: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.torque);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GEOMETRY_MSGS_MESSAGE_WRENCH_H
