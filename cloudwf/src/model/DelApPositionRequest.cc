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

#include <alibabacloud/cloudwf/model/DelApPositionRequest.h>

using AlibabaCloud::Cloudwf::Model::DelApPositionRequest;

DelApPositionRequest::DelApPositionRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "DelApPosition")
{
	setMethod(HttpRequest::Method::Post);
}

DelApPositionRequest::~DelApPositionRequest()
{}

std::string DelApPositionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DelApPositionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long DelApPositionRequest::getApAssetId()const
{
	return apAssetId_;
}

void DelApPositionRequest::setApAssetId(long apAssetId)
{
	apAssetId_ = apAssetId;
	setParameter("ApAssetId", std::to_string(apAssetId));
}

long DelApPositionRequest::getMapId()const
{
	return mapId_;
}

void DelApPositionRequest::setMapId(long mapId)
{
	mapId_ = mapId;
	setParameter("MapId", std::to_string(mapId));
}

