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

#include <alibabacloud/retailcloud/model/ListNodeLabelBindingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListNodeLabelBindingsResult::ListNodeLabelBindingsResult() :
	ServiceResult()
{}

ListNodeLabelBindingsResult::ListNodeLabelBindingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodeLabelBindingsResult::~ListNodeLabelBindingsResult()
{}

void ListNodeLabelBindingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ListNodeLabelBindingResponse"];
	for (auto valueDataListNodeLabelBindingResponse : allDataNode)
	{
		ListNodeLabelBindingResponse dataObject;
		if(!valueDataListNodeLabelBindingResponse["Id"].isNull())
			dataObject.id = std::stol(valueDataListNodeLabelBindingResponse["Id"].asString());
		if(!valueDataListNodeLabelBindingResponse["InstanceId"].isNull())
			dataObject.instanceId = valueDataListNodeLabelBindingResponse["InstanceId"].asString();
		if(!valueDataListNodeLabelBindingResponse["InstanceType"].isNull())
			dataObject.instanceType = valueDataListNodeLabelBindingResponse["InstanceType"].asString();
		if(!valueDataListNodeLabelBindingResponse["LabelKey"].isNull())
			dataObject.labelKey = valueDataListNodeLabelBindingResponse["LabelKey"].asString();
		if(!valueDataListNodeLabelBindingResponse["LabelValue"].isNull())
			dataObject.labelValue = valueDataListNodeLabelBindingResponse["LabelValue"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListNodeLabelBindingsResult::getTotalCount()const
{
	return totalCount_;
}

int ListNodeLabelBindingsResult::getPageSize()const
{
	return pageSize_;
}

int ListNodeLabelBindingsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListNodeLabelBindingsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListNodeLabelBindingsResult::ListNodeLabelBindingResponse> ListNodeLabelBindingsResult::getData()const
{
	return data_;
}

int ListNodeLabelBindingsResult::getCode()const
{
	return code_;
}

