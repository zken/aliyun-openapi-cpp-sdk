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

#include <alibabacloud/drds/model/DescribeRdsReadOnlyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeRdsReadOnlyResult::DescribeRdsReadOnlyResult() :
	ServiceResult()
{}

DescribeRdsReadOnlyResult::DescribeRdsReadOnlyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRdsReadOnlyResult::~DescribeRdsReadOnlyResult()
{}

void DescribeRdsReadOnlyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDbInstancesNode = value["DbInstances"]["DbInstance"];
	for (auto valueDbInstancesDbInstance : allDbInstancesNode)
	{
		DbInstance dbInstancesObject;
		if(!valueDbInstancesDbInstance["DBInstanceId"].isNull())
			dbInstancesObject.dBInstanceId = valueDbInstancesDbInstance["DBInstanceId"].asString();
		if(!valueDbInstancesDbInstance["DmInstanceId"].isNull())
			dbInstancesObject.dmInstanceId = valueDbInstancesDbInstance["DmInstanceId"].asString();
		if(!valueDbInstancesDbInstance["ConnectUrl"].isNull())
			dbInstancesObject.connectUrl = valueDbInstancesDbInstance["ConnectUrl"].asString();
		if(!valueDbInstancesDbInstance["Port"].isNull())
			dbInstancesObject.port = std::stoi(valueDbInstancesDbInstance["Port"].asString());
		if(!valueDbInstancesDbInstance["DBInstanceStatus"].isNull())
			dbInstancesObject.dBInstanceStatus = valueDbInstancesDbInstance["DBInstanceStatus"].asString();
		if(!valueDbInstancesDbInstance["DbInstType"].isNull())
			dbInstancesObject.dbInstType = valueDbInstancesDbInstance["DbInstType"].asString();
		if(!valueDbInstancesDbInstance["ReadWeight"].isNull())
			dbInstancesObject.readWeight = std::stoi(valueDbInstancesDbInstance["ReadWeight"].asString());
		if(!valueDbInstancesDbInstance["NetworkType"].isNull())
			dbInstancesObject.networkType = valueDbInstancesDbInstance["NetworkType"].asString();
		if(!valueDbInstancesDbInstance["Engine"].isNull())
			dbInstancesObject.engine = valueDbInstancesDbInstance["Engine"].asString();
		if(!valueDbInstancesDbInstance["EngineVersion"].isNull())
			dbInstancesObject.engineVersion = valueDbInstancesDbInstance["EngineVersion"].asString();
		if(!valueDbInstancesDbInstance["RdsInstType"].isNull())
			dbInstancesObject.rdsInstType = valueDbInstancesDbInstance["RdsInstType"].asString();
		if(!valueDbInstancesDbInstance["PayType"].isNull())
			dbInstancesObject.payType = valueDbInstancesDbInstance["PayType"].asString();
		if(!valueDbInstancesDbInstance["ExpireTime"].isNull())
			dbInstancesObject.expireTime = valueDbInstancesDbInstance["ExpireTime"].asString();
		if(!valueDbInstancesDbInstance["RemainDays"].isNull())
			dbInstancesObject.remainDays = std::stoi(valueDbInstancesDbInstance["RemainDays"].asString());
		if(!valueDbInstancesDbInstance["DBInstanceClassType"].isNull())
			dbInstancesObject.dBInstanceClassType = valueDbInstancesDbInstance["DBInstanceClassType"].asString();
		if(!valueDbInstancesDbInstance["DBInstanceCPU"].isNull())
			dbInstancesObject.dBInstanceCPU = valueDbInstancesDbInstance["DBInstanceCPU"].asString();
		if(!valueDbInstancesDbInstance["DBInstanceMemory"].isNull())
			dbInstancesObject.dBInstanceMemory = std::stol(valueDbInstancesDbInstance["DBInstanceMemory"].asString());
		if(!valueDbInstancesDbInstance["DBInstanceStorage"].isNull())
			dbInstancesObject.dBInstanceStorage = std::stol(valueDbInstancesDbInstance["DBInstanceStorage"].asString());
		dbInstances_.push_back(dbInstancesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeRdsReadOnlyResult::DbInstance> DescribeRdsReadOnlyResult::getDbInstances()const
{
	return dbInstances_;
}

bool DescribeRdsReadOnlyResult::getSuccess()const
{
	return success_;
}

