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

#include <alibabacloud/polardbx/model/DescribeDBInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeDBInstanceAttributeResult::DescribeDBInstanceAttributeResult() :
	ServiceResult()
{}

DescribeDBInstanceAttributeResult::DescribeDBInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceAttributeResult::~DescribeDBInstanceAttributeResult()
{}

void DescribeDBInstanceAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dBInstanceNode = value["DBInstance"];
	if(!dBInstanceNode["Status"].isNull())
		dBInstance_.status = dBInstanceNode["Status"].asString();
	if(!dBInstanceNode["Description"].isNull())
		dBInstance_.description = dBInstanceNode["Description"].asString();
	if(!dBInstanceNode["ZoneId"].isNull())
		dBInstance_.zoneId = dBInstanceNode["ZoneId"].asString();
	if(!dBInstanceNode["VPCId"].isNull())
		dBInstance_.vPCId = dBInstanceNode["VPCId"].asString();
	if(!dBInstanceNode["CreateTime"].isNull())
		dBInstance_.createTime = dBInstanceNode["CreateTime"].asString();
	if(!dBInstanceNode["Expired"].isNull())
		dBInstance_.expired = dBInstanceNode["Expired"].asString();
	if(!dBInstanceNode["PayType"].isNull())
		dBInstance_.payType = dBInstanceNode["PayType"].asString();
	if(!dBInstanceNode["DBType"].isNull())
		dBInstance_.dBType = dBInstanceNode["DBType"].asString();
	if(!dBInstanceNode["LockMode"].isNull())
		dBInstance_.lockMode = dBInstanceNode["LockMode"].asString();
	if(!dBInstanceNode["StorageUsed"].isNull())
		dBInstance_.storageUsed = dBInstanceNode["StorageUsed"].asString();
	if(!dBInstanceNode["DBVersion"].isNull())
		dBInstance_.dBVersion = dBInstanceNode["DBVersion"].asString();
	if(!dBInstanceNode["Network"].isNull())
		dBInstance_.network = dBInstanceNode["Network"].asString();
	if(!dBInstanceNode["RegionId"].isNull())
		dBInstance_.regionId = dBInstanceNode["RegionId"].asString();
	if(!dBInstanceNode["Engine"].isNull())
		dBInstance_.engine = dBInstanceNode["Engine"].asString();
	if(!dBInstanceNode["Id"].isNull())
		dBInstance_.id = dBInstanceNode["Id"].asString();
	if(!dBInstanceNode["ConnectionString"].isNull())
		dBInstance_.connectionString = dBInstanceNode["ConnectionString"].asString();
	if(!dBInstanceNode["Port"].isNull())
		dBInstance_.port = dBInstanceNode["Port"].asString();
	if(!dBInstanceNode["MinorVersion"].isNull())
		dBInstance_.minorVersion = dBInstanceNode["MinorVersion"].asString();
	if(!dBInstanceNode["LatestMinorVersion"].isNull())
		dBInstance_.latestMinorVersion = dBInstanceNode["LatestMinorVersion"].asString();
	if(!dBInstanceNode["DBNodeCount"].isNull())
		dBInstance_.dBNodeCount = std::stoi(dBInstanceNode["DBNodeCount"].asString());
	if(!dBInstanceNode["DBInstanceType"].isNull())
		dBInstance_.dBInstanceType = dBInstanceNode["DBInstanceType"].asString();
	if(!dBInstanceNode["MaintainStartTime"].isNull())
		dBInstance_.maintainStartTime = dBInstanceNode["MaintainStartTime"].asString();
	if(!dBInstanceNode["MaintainEndTime"].isNull())
		dBInstance_.maintainEndTime = dBInstanceNode["MaintainEndTime"].asString();
	if(!dBInstanceNode["VSwitchId"].isNull())
		dBInstance_.vSwitchId = dBInstanceNode["VSwitchId"].asString();
	if(!dBInstanceNode["CommodityCode"].isNull())
		dBInstance_.commodityCode = dBInstanceNode["CommodityCode"].asString();
	if(!dBInstanceNode["ExpireDate"].isNull())
		dBInstance_.expireDate = dBInstanceNode["ExpireDate"].asString();
	if(!dBInstanceNode["Type"].isNull())
		dBInstance_.type = dBInstanceNode["Type"].asString();
	if(!dBInstanceNode["DBNodeClass"].isNull())
		dBInstance_.dBNodeClass = dBInstanceNode["DBNodeClass"].asString();
	auto allDBNodesNode = dBInstanceNode["DBNodes"]["DBNode"];
	for (auto dBInstanceNodeDBNodesDBNode : allDBNodesNode)
	{
		DBInstance::DBNode dBNodeObject;
		if(!dBInstanceNodeDBNodesDBNode["Id"].isNull())
			dBNodeObject.id = dBInstanceNodeDBNodesDBNode["Id"].asString();
		if(!dBInstanceNodeDBNodesDBNode["NodeClass"].isNull())
			dBNodeObject.nodeClass = dBInstanceNodeDBNodesDBNode["NodeClass"].asString();
		if(!dBInstanceNodeDBNodesDBNode["RegionId"].isNull())
			dBNodeObject.regionId = dBInstanceNodeDBNodesDBNode["RegionId"].asString();
		if(!dBInstanceNodeDBNodesDBNode["ZoneId"].isNull())
			dBNodeObject.zoneId = dBInstanceNodeDBNodesDBNode["ZoneId"].asString();
		dBInstance_.dBNodes.push_back(dBNodeObject);
	}
	auto allConnAddrsNode = dBInstanceNode["ConnAddrs"]["ConnAddr"];
	for (auto dBInstanceNodeConnAddrsConnAddr : allConnAddrsNode)
	{
		DBInstance::ConnAddr connAddrObject;
		if(!dBInstanceNodeConnAddrsConnAddr["ConnectionString"].isNull())
			connAddrObject.connectionString = dBInstanceNodeConnAddrsConnAddr["ConnectionString"].asString();
		if(!dBInstanceNodeConnAddrsConnAddr["Port"].isNull())
			connAddrObject.port = dBInstanceNodeConnAddrsConnAddr["Port"].asString();
		if(!dBInstanceNodeConnAddrsConnAddr["Type"].isNull())
			connAddrObject.type = dBInstanceNodeConnAddrsConnAddr["Type"].asString();
		if(!dBInstanceNodeConnAddrsConnAddr["VPCId"].isNull())
			connAddrObject.vPCId = dBInstanceNodeConnAddrsConnAddr["VPCId"].asString();
		if(!dBInstanceNodeConnAddrsConnAddr["VSwitchId"].isNull())
			connAddrObject.vSwitchId = dBInstanceNodeConnAddrsConnAddr["VSwitchId"].asString();
		dBInstance_.connAddrs.push_back(connAddrObject);
	}
		auto allReadDBInstances = dBInstanceNode["ReadDBInstances"]["ReadDBInstance"];
		for (auto value : allReadDBInstances)
			dBInstance_.readDBInstances.push_back(value.asString());

}

DescribeDBInstanceAttributeResult::DBInstance DescribeDBInstanceAttributeResult::getDBInstance()const
{
	return dBInstance_;
}

