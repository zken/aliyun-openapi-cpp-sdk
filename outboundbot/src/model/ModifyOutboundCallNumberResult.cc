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

#include <alibabacloud/outboundbot/model/ModifyOutboundCallNumberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ModifyOutboundCallNumberResult::ModifyOutboundCallNumberResult() :
	ServiceResult()
{}

ModifyOutboundCallNumberResult::ModifyOutboundCallNumberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyOutboundCallNumberResult::~ModifyOutboundCallNumberResult()
{}

void ModifyOutboundCallNumberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto outboundCallNumberNode = value["OutboundCallNumber"];
	if(!outboundCallNumberNode["Number"].isNull())
		outboundCallNumber_.number = outboundCallNumberNode["Number"].asString();
	if(!outboundCallNumberNode["OutboundCallNumberId"].isNull())
		outboundCallNumber_.outboundCallNumberId = outboundCallNumberNode["OutboundCallNumberId"].asString();
	if(!outboundCallNumberNode["RateLimitCount"].isNull())
		outboundCallNumber_.rateLimitCount = outboundCallNumberNode["RateLimitCount"].asString();
	if(!outboundCallNumberNode["RateLimitPeriod"].isNull())
		outboundCallNumber_.rateLimitPeriod = outboundCallNumberNode["RateLimitPeriod"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ModifyOutboundCallNumberResult::getMessage()const
{
	return message_;
}

int ModifyOutboundCallNumberResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ModifyOutboundCallNumberResult::OutboundCallNumber ModifyOutboundCallNumberResult::getOutboundCallNumber()const
{
	return outboundCallNumber_;
}

std::string ModifyOutboundCallNumberResult::getCode()const
{
	return code_;
}

bool ModifyOutboundCallNumberResult::getSuccess()const
{
	return success_;
}
