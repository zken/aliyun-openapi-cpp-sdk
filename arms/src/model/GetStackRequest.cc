/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/arms/model/GetStackRequest.h>

using AlibabaCloud::ARMS::Model::GetStackRequest;

GetStackRequest::GetStackRequest() :
	RpcServiceRequest("arms", "2019-08-08", "GetStack")
{
	setMethod(HttpRequest::Method::Post);
}

GetStackRequest::~GetStackRequest()
{}

std::string GetStackRequest::getTraceID()const
{
	return traceID_;
}

void GetStackRequest::setTraceID(const std::string& traceID)
{
	traceID_ = traceID;
	setParameter("TraceID", traceID);
}

std::string GetStackRequest::getRegionId()const
{
	return regionId_;
}

void GetStackRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GetStackRequest::getRpcID()const
{
	return rpcID_;
}

void GetStackRequest::setRpcID(const std::string& rpcID)
{
	rpcID_ = rpcID;
	setParameter("RpcID", rpcID);
}

std::string GetStackRequest::getPid()const
{
	return pid_;
}

void GetStackRequest::setPid(const std::string& pid)
{
	pid_ = pid;
	setParameter("Pid", pid);
}

