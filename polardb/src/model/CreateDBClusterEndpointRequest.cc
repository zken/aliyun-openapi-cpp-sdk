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

#include <alibabacloud/polardb/model/CreateDBClusterEndpointRequest.h>

using AlibabaCloud::Polardb::Model::CreateDBClusterEndpointRequest;

CreateDBClusterEndpointRequest::CreateDBClusterEndpointRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateDBClusterEndpoint")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDBClusterEndpointRequest::~CreateDBClusterEndpointRequest()
{}

std::string CreateDBClusterEndpointRequest::getAutoAddNewNodes()const
{
	return autoAddNewNodes_;
}

void CreateDBClusterEndpointRequest::setAutoAddNewNodes(const std::string& autoAddNewNodes)
{
	autoAddNewNodes_ = autoAddNewNodes;
	setParameter("AutoAddNewNodes", autoAddNewNodes);
}

long CreateDBClusterEndpointRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDBClusterEndpointRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDBClusterEndpointRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDBClusterEndpointRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateDBClusterEndpointRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDBClusterEndpointRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDBClusterEndpointRequest::getReadWriteMode()const
{
	return readWriteMode_;
}

void CreateDBClusterEndpointRequest::setReadWriteMode(const std::string& readWriteMode)
{
	readWriteMode_ = readWriteMode;
	setParameter("ReadWriteMode", readWriteMode);
}

std::string CreateDBClusterEndpointRequest::getEndpointType()const
{
	return endpointType_;
}

void CreateDBClusterEndpointRequest::setEndpointType(const std::string& endpointType)
{
	endpointType_ = endpointType;
	setParameter("EndpointType", endpointType);
}

std::string CreateDBClusterEndpointRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDBClusterEndpointRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDBClusterEndpointRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void CreateDBClusterEndpointRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string CreateDBClusterEndpointRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDBClusterEndpointRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateDBClusterEndpointRequest::getEndpointConfig()const
{
	return endpointConfig_;
}

void CreateDBClusterEndpointRequest::setEndpointConfig(const std::string& endpointConfig)
{
	endpointConfig_ = endpointConfig;
	setParameter("EndpointConfig", endpointConfig);
}

std::string CreateDBClusterEndpointRequest::getDBEndpointDescription()const
{
	return dBEndpointDescription_;
}

void CreateDBClusterEndpointRequest::setDBEndpointDescription(const std::string& dBEndpointDescription)
{
	dBEndpointDescription_ = dBEndpointDescription;
	setParameter("DBEndpointDescription", dBEndpointDescription);
}

long CreateDBClusterEndpointRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDBClusterEndpointRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDBClusterEndpointRequest::getNodes()const
{
	return nodes_;
}

void CreateDBClusterEndpointRequest::setNodes(const std::string& nodes)
{
	nodes_ = nodes;
	setParameter("Nodes", nodes);
}

