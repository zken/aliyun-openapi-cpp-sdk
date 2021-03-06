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

#include <alibabacloud/dms-enterprise/model/SyncDatabaseMetaRequest.h>

using AlibabaCloud::Dms_enterprise::Model::SyncDatabaseMetaRequest;

SyncDatabaseMetaRequest::SyncDatabaseMetaRequest() :
	RpcServiceRequest("dms-enterprise", "2018-11-01", "SyncDatabaseMeta")
{
	setMethod(HttpRequest::Method::Post);
}

SyncDatabaseMetaRequest::~SyncDatabaseMetaRequest()
{}

std::string SyncDatabaseMetaRequest::getDbId()const
{
	return dbId_;
}

void SyncDatabaseMetaRequest::setDbId(const std::string& dbId)
{
	dbId_ = dbId;
	setParameter("DbId", dbId);
}

bool SyncDatabaseMetaRequest::getLogic()const
{
	return logic_;
}

void SyncDatabaseMetaRequest::setLogic(bool logic)
{
	logic_ = logic;
	setParameter("Logic", logic ? "true" : "false");
}

long SyncDatabaseMetaRequest::getTid()const
{
	return tid_;
}

void SyncDatabaseMetaRequest::setTid(long tid)
{
	tid_ = tid;
	setParameter("Tid", std::to_string(tid));
}

