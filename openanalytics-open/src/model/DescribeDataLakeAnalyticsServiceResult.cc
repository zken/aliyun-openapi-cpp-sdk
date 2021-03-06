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

#include <alibabacloud/openanalytics-open/model/DescribeDataLakeAnalyticsServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

DescribeDataLakeAnalyticsServiceResult::DescribeDataLakeAnalyticsServiceResult() :
	ServiceResult()
{}

DescribeDataLakeAnalyticsServiceResult::DescribeDataLakeAnalyticsServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataLakeAnalyticsServiceResult::~DescribeDataLakeAnalyticsServiceResult()
{}

void DescribeDataLakeAnalyticsServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorInfo"].isNull())
		errorInfo_ = value["ErrorInfo"].asString();
	if(!value["Result"].isNull())
		result_ = value["Result"].asString();

}

std::string DescribeDataLakeAnalyticsServiceResult::getErrorInfo()const
{
	return errorInfo_;
}

std::string DescribeDataLakeAnalyticsServiceResult::getErrorCode()const
{
	return errorCode_;
}

bool DescribeDataLakeAnalyticsServiceResult::getSuccess()const
{
	return success_;
}

std::string DescribeDataLakeAnalyticsServiceResult::getResult()const
{
	return result_;
}

