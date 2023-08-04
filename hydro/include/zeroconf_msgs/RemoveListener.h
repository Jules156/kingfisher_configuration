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
 * Auto-generated by gensrv_cpp from file /tmp/buildd/ros-hydro-zeroconf-msgs-0.2.1-0precise-20150326-2047/srv/RemoveListener.srv
 *
 */


#ifndef ZEROCONF_MSGS_MESSAGE_REMOVELISTENER_H
#define ZEROCONF_MSGS_MESSAGE_REMOVELISTENER_H

#include <ros/service_traits.h>


#include <zeroconf_msgs/RemoveListenerRequest.h>
#include <zeroconf_msgs/RemoveListenerResponse.h>


namespace zeroconf_msgs
{

struct RemoveListener
{

typedef RemoveListenerRequest Request;
typedef RemoveListenerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RemoveListener
} // namespace zeroconf_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::zeroconf_msgs::RemoveListener > {
  static const char* value()
  {
    return "05d7490b40a920d3a0ffcc1ebf3a0889";
  }

  static const char* value(const ::zeroconf_msgs::RemoveListener&) { return value(); }
};

template<>
struct DataType< ::zeroconf_msgs::RemoveListener > {
  static const char* value()
  {
    return "zeroconf_msgs/RemoveListener";
  }

  static const char* value(const ::zeroconf_msgs::RemoveListener&) { return value(); }
};


// service_traits::MD5Sum< ::zeroconf_msgs::RemoveListenerRequest> should match 
// service_traits::MD5Sum< ::zeroconf_msgs::RemoveListener > 
template<>
struct MD5Sum< ::zeroconf_msgs::RemoveListenerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::zeroconf_msgs::RemoveListener >::value();
  }
  static const char* value(const ::zeroconf_msgs::RemoveListenerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::zeroconf_msgs::RemoveListenerRequest> should match 
// service_traits::DataType< ::zeroconf_msgs::RemoveListener > 
template<>
struct DataType< ::zeroconf_msgs::RemoveListenerRequest>
{
  static const char* value()
  {
    return DataType< ::zeroconf_msgs::RemoveListener >::value();
  }
  static const char* value(const ::zeroconf_msgs::RemoveListenerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::zeroconf_msgs::RemoveListenerResponse> should match 
// service_traits::MD5Sum< ::zeroconf_msgs::RemoveListener > 
template<>
struct MD5Sum< ::zeroconf_msgs::RemoveListenerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::zeroconf_msgs::RemoveListener >::value();
  }
  static const char* value(const ::zeroconf_msgs::RemoveListenerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::zeroconf_msgs::RemoveListenerResponse> should match 
// service_traits::DataType< ::zeroconf_msgs::RemoveListener > 
template<>
struct DataType< ::zeroconf_msgs::RemoveListenerResponse>
{
  static const char* value()
  {
    return DataType< ::zeroconf_msgs::RemoveListener >::value();
  }
  static const char* value(const ::zeroconf_msgs::RemoveListenerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ZEROCONF_MSGS_MESSAGE_REMOVELISTENER_H