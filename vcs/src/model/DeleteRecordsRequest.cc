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

#include <alibabacloud/vcs/model/DeleteRecordsRequest.h>

using AlibabaCloud::Vcs::Model::DeleteRecordsRequest;

DeleteRecordsRequest::DeleteRecordsRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "DeleteRecords")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteRecordsRequest::~DeleteRecordsRequest()
{}

std::string DeleteRecordsRequest::getAlgorithmType()const
{
	return algorithmType_;
}

void DeleteRecordsRequest::setAlgorithmType(const std::string& algorithmType)
{
	algorithmType_ = algorithmType;
	setBodyParameter("AlgorithmType", algorithmType);
}

std::string DeleteRecordsRequest::getCorpId()const
{
	return corpId_;
}

void DeleteRecordsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string DeleteRecordsRequest::getAttributeName()const
{
	return attributeName_;
}

void DeleteRecordsRequest::setAttributeName(const std::string& attributeName)
{
	attributeName_ = attributeName;
	setBodyParameter("AttributeName", attributeName);
}

std::string DeleteRecordsRequest::getOperatorType()const
{
	return operatorType_;
}

void DeleteRecordsRequest::setOperatorType(const std::string& operatorType)
{
	operatorType_ = operatorType;
	setBodyParameter("OperatorType", operatorType);
}

std::string DeleteRecordsRequest::getValue()const
{
	return value_;
}

void DeleteRecordsRequest::setValue(const std::string& value)
{
	value_ = value;
	setBodyParameter("Value", value);
}

