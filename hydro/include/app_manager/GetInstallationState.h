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
 * Auto-generated by gensrv_cpp from file /tmp/buildd/ros-hydro-app-manager-1.0.3-0precise-20150707-1324/srv/GetInstallationState.srv
 *
 */


#ifndef APP_MANAGER_MESSAGE_GETINSTALLATIONSTATE_H
#define APP_MANAGER_MESSAGE_GETINSTALLATIONSTATE_H

#include <ros/service_traits.h>


#include <app_manager/GetInstallationStateRequest.h>
#include <app_manager/GetInstallationStateResponse.h>


namespace app_manager
{

struct GetInstallationState
{

typedef GetInstallationStateRequest Request;
typedef GetInstallationStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetInstallationState
} // namespace app_manager


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::app_manager::GetInstallationState > {
  static const char* value()
  {
    return "28f0a7294f6241e2423a9382e3c76987";
  }

  static const char* value(const ::app_manager::GetInstallationState&) { return value(); }
};

template<>
struct DataType< ::app_manager::GetInstallationState > {
  static const char* value()
  {
    return "app_manager/GetInstallationState";
  }

  static const char* value(const ::app_manager::GetInstallationState&) { return value(); }
};


// service_traits::MD5Sum< ::app_manager::GetInstallationStateRequest> should match 
// service_traits::MD5Sum< ::app_manager::GetInstallationState > 
template<>
struct MD5Sum< ::app_manager::GetInstallationStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::app_manager::GetInstallationState >::value();
  }
  static const char* value(const ::app_manager::GetInstallationStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::app_manager::GetInstallationStateRequest> should match 
// service_traits::DataType< ::app_manager::GetInstallationState > 
template<>
struct DataType< ::app_manager::GetInstallationStateRequest>
{
  static const char* value()
  {
    return DataType< ::app_manager::GetInstallationState >::value();
  }
  static const char* value(const ::app_manager::GetInstallationStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::app_manager::GetInstallationStateResponse> should match 
// service_traits::MD5Sum< ::app_manager::GetInstallationState > 
template<>
struct MD5Sum< ::app_manager::GetInstallationStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::app_manager::GetInstallationState >::value();
  }
  static const char* value(const ::app_manager::GetInstallationStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::app_manager::GetInstallationStateResponse> should match 
// service_traits::DataType< ::app_manager::GetInstallationState > 
template<>
struct DataType< ::app_manager::GetInstallationStateResponse>
{
  static const char* value()
  {
    return DataType< ::app_manager::GetInstallationState >::value();
  }
  static const char* value(const ::app_manager::GetInstallationStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // APP_MANAGER_MESSAGE_GETINSTALLATIONSTATE_H
