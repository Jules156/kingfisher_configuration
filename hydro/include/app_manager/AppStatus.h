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
 * Auto-generated by genmsg_cpp from file /tmp/buildd/ros-hydro-app-manager-1.0.3-0precise-20150707-1324/msg/AppStatus.msg
 *
 */


#ifndef APP_MANAGER_MESSAGE_APPSTATUS_H
#define APP_MANAGER_MESSAGE_APPSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace app_manager
{
template <class ContainerAllocator>
struct AppStatus_
{
  typedef AppStatus_<ContainerAllocator> Type;

  AppStatus_()
    : type(0)
    , status()  {
    }
  AppStatus_(const ContainerAllocator& _alloc)
    : type(0)
    , status(_alloc)  {
    }



   typedef int32_t _type_type;
  _type_type type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  _status_type status;


    enum { INFO = 0 };
     enum { WARN = 1 };
     enum { ERROR = 2 };
 

  typedef boost::shared_ptr< ::app_manager::AppStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::app_manager::AppStatus_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct AppStatus_

typedef ::app_manager::AppStatus_<std::allocator<void> > AppStatus;

typedef boost::shared_ptr< ::app_manager::AppStatus > AppStatusPtr;
typedef boost::shared_ptr< ::app_manager::AppStatus const> AppStatusConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::app_manager::AppStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::app_manager::AppStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace app_manager

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'app_manager': ['/tmp/buildd/ros-hydro-app-manager-1.0.3-0precise-20150707-1324/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::app_manager::AppStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::app_manager::AppStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::app_manager::AppStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::app_manager::AppStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::app_manager::AppStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::app_manager::AppStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::app_manager::AppStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f59466d6810d5e9557e6b8ff75c9437";
  }

  static const char* value(const ::app_manager::AppStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f59466d6810d5e9ULL;
  static const uint64_t static_value2 = 0x557e6b8ff75c9437ULL;
};

template<class ContainerAllocator>
struct DataType< ::app_manager::AppStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "app_manager/AppStatus";
  }

  static const char* value(const ::app_manager::AppStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::app_manager::AppStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 INFO=0\n\
int32 WARN=1\n\
int32 ERROR=2\n\
# Status type.  One of INFO, WARN, ERROR.\n\
int32 type\n\
# Status message.\n\
string status\n\
";
  }

  static const char* value(const ::app_manager::AppStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::app_manager::AppStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct AppStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::app_manager::AppStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::app_manager::AppStatus_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.type);
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // APP_MANAGER_MESSAGE_APPSTATUS_H
