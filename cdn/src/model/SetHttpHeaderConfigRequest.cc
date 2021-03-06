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

#include <alibabacloud/cdn/model/SetHttpHeaderConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetHttpHeaderConfigRequest;

SetHttpHeaderConfigRequest::SetHttpHeaderConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetHttpHeaderConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetHttpHeaderConfigRequest::~SetHttpHeaderConfigRequest()
{}

std::string SetHttpHeaderConfigRequest::getHeaderValue()const
{
	return headerValue_;
}

void SetHttpHeaderConfigRequest::setHeaderValue(const std::string& headerValue)
{
	headerValue_ = headerValue;
	setParameter("HeaderValue", headerValue);
}

std::string SetHttpHeaderConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetHttpHeaderConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetHttpHeaderConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetHttpHeaderConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetHttpHeaderConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetHttpHeaderConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long SetHttpHeaderConfigRequest::getConfigId()const
{
	return configId_;
}

void SetHttpHeaderConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

std::string SetHttpHeaderConfigRequest::getHeaderKey()const
{
	return headerKey_;
}

void SetHttpHeaderConfigRequest::setHeaderKey(const std::string& headerKey)
{
	headerKey_ = headerKey;
	setParameter("HeaderKey", headerKey);
}

