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
 * Auto-generated by genmsg_cpp from file /tmp/buildd/ros-hydro-actionlib-msgs-1.10.6-0precise-20150327-1737/msg/GoalStatus.msg
 *
 */


#ifndef ACTIONLIB_MSGS_MESSAGE_GOALSTATUS_H
#define ACTIONLIB_MSGS_MESSAGE_GOALSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <actionlib_msgs/GoalID.h>

namespace actionlib_msgs
{
template <class ContainerAllocator>
struct GoalStatus_
{
  typedef GoalStatus_<ContainerAllocator> Type;

  GoalStatus_()
    : goal_id()
    , status(0)
    , text()  {
    }
  GoalStatus_(const ContainerAllocator& _alloc)
    : goal_id(_alloc)
    , status(0)
    , text(_alloc)  {
    }



   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef uint8_t _status_type;
  _status_type status;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _text_type;
  _text_type text;


    enum { PENDING = 0 };
     enum { ACTIVE = 1 };
     enum { PREEMPTED = 2 };
     enum { SUCCEEDED = 3 };
     enum { ABORTED = 4 };
     enum { REJECTED = 5 };
     enum { PREEMPTING = 6 };
     enum { RECALLING = 7 };
     enum { RECALLED = 8 };
     enum { LOST = 9 };
 

  typedef boost::shared_ptr< ::actionlib_msgs::GoalStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actionlib_msgs::GoalStatus_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct GoalStatus_

typedef ::actionlib_msgs::GoalStatus_<std::allocator<void> > GoalStatus;

typedef boost::shared_ptr< ::actionlib_msgs::GoalStatus > GoalStatusPtr;
typedef boost::shared_ptr< ::actionlib_msgs::GoalStatus const> GoalStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actionlib_msgs::GoalStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actionlib_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/tmp/buildd/ros-hydro-actionlib-msgs-1.10.6-0precise-20150327-1737/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_msgs::GoalStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_msgs::GoalStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_msgs::GoalStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d388f9b87b3c471f784434d671988d4a";
  }

  static const char* value(const ::actionlib_msgs::GoalStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd388f9b87b3c471fULL;
  static const uint64_t static_value2 = 0x784434d671988d4aULL;
};

template<class ContainerAllocator>
struct DataType< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actionlib_msgs/GoalStatus";
  }

  static const char* value(const ::actionlib_msgs::GoalStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
";
  }

  static const char* value(const ::actionlib_msgs::GoalStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.goal_id);
      stream.next(m.status);
      stream.next(m.text);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GoalStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actionlib_msgs::GoalStatus_<ContainerAllocator>& v)
  {
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.text);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIONLIB_MSGS_MESSAGE_GOALSTATUS_H
