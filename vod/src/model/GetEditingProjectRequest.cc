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

#include <alibabacloud/vod/model/GetEditingProjectRequest.h>

using AlibabaCloud::Vod::Model::GetEditingProjectRequest;

GetEditingProjectRequest::GetEditingProjectRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetEditingProject")
{}

GetEditingProjectRequest::~GetEditingProjectRequest()
{}

std::string GetEditingProjectRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetEditingProjectRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetEditingProjectRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetEditingProjectRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetEditingProjectRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetEditingProjectRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string GetEditingProjectRequest::getOwnerId()const
{
	return ownerId_;
}

void GetEditingProjectRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string GetEditingProjectRequest::getProjectId()const
{
	return projectId_;
}

void GetEditingProjectRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string GetEditingProjectRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetEditingProjectRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

