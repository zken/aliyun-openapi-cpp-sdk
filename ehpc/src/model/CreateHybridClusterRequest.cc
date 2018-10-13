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

#include <alibabacloud/ehpc/model/CreateHybridClusterRequest.h>

using AlibabaCloud::EHPC::Model::CreateHybridClusterRequest;

CreateHybridClusterRequest::CreateHybridClusterRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "CreateHybridCluster")
{}

CreateHybridClusterRequest::~CreateHybridClusterRequest()
{}

std::string CreateHybridClusterRequest::getEhpcVersion()const
{
	return ehpcVersion_;
}

void CreateHybridClusterRequest::setEhpcVersion(const std::string& ehpcVersion)
{
	ehpcVersion_ = ehpcVersion;
	setParameter("EhpcVersion", ehpcVersion);
}

std::string CreateHybridClusterRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateHybridClusterRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string CreateHybridClusterRequest::getDescription()const
{
	return description_;
}

void CreateHybridClusterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateHybridClusterRequest::getKeyPairName()const
{
	return keyPairName_;
}

void CreateHybridClusterRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

std::string CreateHybridClusterRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateHybridClusterRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setParameter("SecurityGroupName", securityGroupName);
}

std::string CreateHybridClusterRequest::getEcsOrderComputeInstanceType()const
{
	return ecsOrderComputeInstanceType_;
}

void CreateHybridClusterRequest::setEcsOrderComputeInstanceType(const std::string& ecsOrderComputeInstanceType)
{
	ecsOrderComputeInstanceType_ = ecsOrderComputeInstanceType;
	setParameter("EcsOrderComputeInstanceType", ecsOrderComputeInstanceType);
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeRemotePath()const
{
	return onPremiseVolumeRemotePath_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeRemotePath(const std::string& onPremiseVolumeRemotePath)
{
	onPremiseVolumeRemotePath_ = onPremiseVolumeRemotePath;
	setParameter("OnPremiseVolumeRemotePath", onPremiseVolumeRemotePath);
}

std::string CreateHybridClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateHybridClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateHybridClusterRequest::getVolumeType()const
{
	return volumeType_;
}

void CreateHybridClusterRequest::setVolumeType(const std::string& volumeType)
{
	volumeType_ = volumeType;
	setParameter("VolumeType", volumeType);
}

std::string CreateHybridClusterRequest::getPassword()const
{
	return password_;
}

void CreateHybridClusterRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeMountPoint()const
{
	return onPremiseVolumeMountPoint_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeMountPoint(const std::string& onPremiseVolumeMountPoint)
{
	onPremiseVolumeMountPoint_ = onPremiseVolumeMountPoint;
	setParameter("OnPremiseVolumeMountPoint", onPremiseVolumeMountPoint);
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeProtocol()const
{
	return onPremiseVolumeProtocol_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeProtocol(const std::string& onPremiseVolumeProtocol)
{
	onPremiseVolumeProtocol_ = onPremiseVolumeProtocol;
	setParameter("OnPremiseVolumeProtocol", onPremiseVolumeProtocol);
}

std::string CreateHybridClusterRequest::getVolumeProtocol()const
{
	return volumeProtocol_;
}

void CreateHybridClusterRequest::setVolumeProtocol(const std::string& volumeProtocol)
{
	volumeProtocol_ = volumeProtocol;
	setParameter("VolumeProtocol", volumeProtocol);
}

std::string CreateHybridClusterRequest::getOnPremiseVolumeLocalPath()const
{
	return onPremiseVolumeLocalPath_;
}

void CreateHybridClusterRequest::setOnPremiseVolumeLocalPath(const std::string& onPremiseVolumeLocalPath)
{
	onPremiseVolumeLocalPath_ = onPremiseVolumeLocalPath;
	setParameter("OnPremiseVolumeLocalPath", onPremiseVolumeLocalPath);
}

std::string CreateHybridClusterRequest::getClientVersion()const
{
	return clientVersion_;
}

void CreateHybridClusterRequest::setClientVersion(const std::string& clientVersion)
{
	clientVersion_ = clientVersion;
	setParameter("ClientVersion", clientVersion);
}

std::string CreateHybridClusterRequest::getOsTag()const
{
	return osTag_;
}

void CreateHybridClusterRequest::setOsTag(const std::string& osTag)
{
	osTag_ = osTag;
	setParameter("OsTag", osTag);
}

std::string CreateHybridClusterRequest::getRemoteDirectory()const
{
	return remoteDirectory_;
}

void CreateHybridClusterRequest::setRemoteDirectory(const std::string& remoteDirectory)
{
	remoteDirectory_ = remoteDirectory;
	setParameter("RemoteDirectory", remoteDirectory);
}

std::string CreateHybridClusterRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateHybridClusterRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateHybridClusterRequest::getNodes()const
{
	return nodes_;
}

void CreateHybridClusterRequest::setNodes(const std::string& nodes)
{
	nodes_ = nodes;
	setParameter("Nodes", nodes);
}

std::vector<CreateHybridClusterRequest::Application> CreateHybridClusterRequest::getApplication()const
{
	return application_;
}

void CreateHybridClusterRequest::setApplication(const std::vector<Application>& application)
{
	application_ = application;
	int i = 0;
	for(int i = 0; i!= application.size(); i++)	{
		auto obj = application.at(i);
		std::string str ="Application."+ std::to_string(i);
		setParameter(str + ".Tag", obj.tag);
	}
}

std::string CreateHybridClusterRequest::getDomain()const
{
	return domain_;
}

void CreateHybridClusterRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string CreateHybridClusterRequest::getVpcId()const
{
	return vpcId_;
}

void CreateHybridClusterRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateHybridClusterRequest::getName()const
{
	return name_;
}

void CreateHybridClusterRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateHybridClusterRequest::getVolumeId()const
{
	return volumeId_;
}

void CreateHybridClusterRequest::setVolumeId(const std::string& volumeId)
{
	volumeId_ = volumeId;
	setParameter("VolumeId", volumeId);
}

std::string CreateHybridClusterRequest::getVolumeMountpoint()const
{
	return volumeMountpoint_;
}

void CreateHybridClusterRequest::setVolumeMountpoint(const std::string& volumeMountpoint)
{
	volumeMountpoint_ = volumeMountpoint;
	setParameter("VolumeMountpoint", volumeMountpoint);
}

std::string CreateHybridClusterRequest::getZoneId()const
{
	return zoneId_;
}

void CreateHybridClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateHybridClusterRequest::getLocation()const
{
	return location_;
}

void CreateHybridClusterRequest::setLocation(const std::string& location)
{
	location_ = location;
	setParameter("Location", location);
}
