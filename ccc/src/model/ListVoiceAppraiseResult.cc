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

#include <alibabacloud/ccc/model/ListVoiceAppraiseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListVoiceAppraiseResult::ListVoiceAppraiseResult() :
	ServiceResult()
{}

ListVoiceAppraiseResult::ListVoiceAppraiseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVoiceAppraiseResult::~ListVoiceAppraiseResult()
{}

void ListVoiceAppraiseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contactFlowNode = value["ContactFlow"];
	if(!contactFlowNode["ContactFlowId"].isNull())
		contactFlow_.contactFlowId = contactFlowNode["ContactFlowId"].asString();
	if(!contactFlowNode["InstanceId"].isNull())
		contactFlow_.instanceId = contactFlowNode["InstanceId"].asString();
	if(!contactFlowNode["ContactFlowName"].isNull())
		contactFlow_.contactFlowName = contactFlowNode["ContactFlowName"].asString();
	if(!contactFlowNode["ContactFlowDescription"].isNull())
		contactFlow_.contactFlowDescription = contactFlowNode["ContactFlowDescription"].asString();
	if(!contactFlowNode["Type"].isNull())
		contactFlow_.type = contactFlowNode["Type"].asString();
	if(!contactFlowNode["AppliedVersion"].isNull())
		contactFlow_.appliedVersion = contactFlowNode["AppliedVersion"].asString();
	auto allVersionsNode = contactFlowNode["Versions"]["ContactFlowVersion"];
	for (auto contactFlowNodeVersionsContactFlowVersion : allVersionsNode)
	{
		ContactFlow::ContactFlowVersion contactFlowVersionObject;
		if(!contactFlowNodeVersionsContactFlowVersion["ContactFlowVersionId"].isNull())
			contactFlowVersionObject.contactFlowVersionId = contactFlowNodeVersionsContactFlowVersion["ContactFlowVersionId"].asString();
		if(!contactFlowNodeVersionsContactFlowVersion["Version"].isNull())
			contactFlowVersionObject.version = contactFlowNodeVersionsContactFlowVersion["Version"].asString();
		if(!contactFlowNodeVersionsContactFlowVersion["ContactFlowVersionDescription"].isNull())
			contactFlowVersionObject.contactFlowVersionDescription = contactFlowNodeVersionsContactFlowVersion["ContactFlowVersionDescription"].asString();
		if(!contactFlowNodeVersionsContactFlowVersion["Content"].isNull())
			contactFlowVersionObject.content = contactFlowNodeVersionsContactFlowVersion["Content"].asString();
		if(!contactFlowNodeVersionsContactFlowVersion["LastModified"].isNull())
			contactFlowVersionObject.lastModified = contactFlowNodeVersionsContactFlowVersion["LastModified"].asString();
		if(!contactFlowNodeVersionsContactFlowVersion["LastModifiedBy"].isNull())
			contactFlowVersionObject.lastModifiedBy = contactFlowNodeVersionsContactFlowVersion["LastModifiedBy"].asString();
		if(!contactFlowNodeVersionsContactFlowVersion["Status"].isNull())
			contactFlowVersionObject.status = contactFlowNodeVersionsContactFlowVersion["Status"].asString();
		contactFlow_.versions.push_back(contactFlowVersionObject);
	}
	auto allPhoneNumbersNode = contactFlowNode["PhoneNumbers"]["PhoneNumber"];
	for (auto contactFlowNodePhoneNumbersPhoneNumber : allPhoneNumbersNode)
	{
		ContactFlow::PhoneNumber phoneNumberObject;
		if(!contactFlowNodePhoneNumbersPhoneNumber["PhoneNumberId"].isNull())
			phoneNumberObject.phoneNumberId = contactFlowNodePhoneNumbersPhoneNumber["PhoneNumberId"].asString();
		if(!contactFlowNodePhoneNumbersPhoneNumber["InstanceId"].isNull())
			phoneNumberObject.instanceId = contactFlowNodePhoneNumbersPhoneNumber["InstanceId"].asString();
		if(!contactFlowNodePhoneNumbersPhoneNumber["Number"].isNull())
			phoneNumberObject.number = contactFlowNodePhoneNumbersPhoneNumber["Number"].asString();
		if(!contactFlowNodePhoneNumbersPhoneNumber["PhoneNumberDescription"].isNull())
			phoneNumberObject.phoneNumberDescription = contactFlowNodePhoneNumbersPhoneNumber["PhoneNumberDescription"].asString();
		if(!contactFlowNodePhoneNumbersPhoneNumber["RemainingTime"].isNull())
			phoneNumberObject.remainingTime = std::stoi(contactFlowNodePhoneNumbersPhoneNumber["RemainingTime"].asString());
		if(!contactFlowNodePhoneNumbersPhoneNumber["Trunks"].isNull())
			phoneNumberObject.trunks = std::stoi(contactFlowNodePhoneNumbersPhoneNumber["Trunks"].asString());
		contactFlow_.phoneNumbers.push_back(phoneNumberObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Notice"].isNull())
		notice_ = value["Notice"].asString();

}

std::string ListVoiceAppraiseResult::getMessage()const
{
	return message_;
}

std::string ListVoiceAppraiseResult::getNotice()const
{
	return notice_;
}

int ListVoiceAppraiseResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListVoiceAppraiseResult::ContactFlow ListVoiceAppraiseResult::getContactFlow()const
{
	return contactFlow_;
}

std::string ListVoiceAppraiseResult::getCode()const
{
	return code_;
}

bool ListVoiceAppraiseResult::getSuccess()const
{
	return success_;
}

