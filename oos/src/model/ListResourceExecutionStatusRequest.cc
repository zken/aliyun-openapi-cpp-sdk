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

#include <alibabacloud/oos/model/ListResourceExecutionStatusRequest.h>

using AlibabaCloud::Oos::Model::ListResourceExecutionStatusRequest;

ListResourceExecutionStatusRequest::ListResourceExecutionStatusRequest() :
	RpcServiceRequest("oos", "2019-06-01", "ListResourceExecutionStatus")
{
	setMethod(HttpRequest::Method::Post);
}

ListResourceExecutionStatusRequest::~ListResourceExecutionStatusRequest()
{}

std::string ListResourceExecutionStatusRequest::getExecutionId()const
{
	return executionId_;
}

void ListResourceExecutionStatusRequest::setExecutionId(const std::string& executionId)
{
	executionId_ = executionId;
	setParameter("ExecutionId", executionId);
}

std::string ListResourceExecutionStatusRequest::getRegionId()const
{
	return regionId_;
}

void ListResourceExecutionStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListResourceExecutionStatusRequest::getNextToken()const
{
	return nextToken_;
}

void ListResourceExecutionStatusRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

int ListResourceExecutionStatusRequest::getMaxResults()const
{
	return maxResults_;
}

void ListResourceExecutionStatusRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

