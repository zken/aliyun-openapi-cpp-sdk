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

#include <alibabacloud/vs/model/BindTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

BindTemplateResult::BindTemplateResult() :
	ServiceResult()
{}

BindTemplateResult::BindTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BindTemplateResult::~BindTemplateResult()
{}

void BindTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TemplateId"].isNull())
		templateId_ = value["TemplateId"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InstanceType"].isNull())
		instanceType_ = value["InstanceType"].asString();

}

std::string BindTemplateResult::getInstanceId()const
{
	return instanceId_;
}

std::string BindTemplateResult::getInstanceType()const
{
	return instanceType_;
}

std::string BindTemplateResult::getTemplateId()const
{
	return templateId_;
}

