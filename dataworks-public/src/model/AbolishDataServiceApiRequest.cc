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

#include <alibabacloud/dataworks-public/model/AbolishDataServiceApiRequest.h>

using AlibabaCloud::Dataworks_public::Model::AbolishDataServiceApiRequest;

AbolishDataServiceApiRequest::AbolishDataServiceApiRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "AbolishDataServiceApi")
{
	setMethod(HttpRequest::Method::Post);
}

AbolishDataServiceApiRequest::~AbolishDataServiceApiRequest()
{}

long AbolishDataServiceApiRequest::getTenantId()const
{
	return tenantId_;
}

void AbolishDataServiceApiRequest::setTenantId(long tenantId)
{
	tenantId_ = tenantId;
	setBodyParameter("TenantId", std::to_string(tenantId));
}

long AbolishDataServiceApiRequest::getProjectId()const
{
	return projectId_;
}

void AbolishDataServiceApiRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

long AbolishDataServiceApiRequest::getApiId()const
{
	return apiId_;
}

void AbolishDataServiceApiRequest::setApiId(long apiId)
{
	apiId_ = apiId;
	setBodyParameter("ApiId", std::to_string(apiId));
}

