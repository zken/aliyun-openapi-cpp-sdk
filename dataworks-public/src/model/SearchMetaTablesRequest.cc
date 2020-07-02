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

#include <alibabacloud/dataworks-public/model/SearchMetaTablesRequest.h>

using AlibabaCloud::Dataworks_public::Model::SearchMetaTablesRequest;

SearchMetaTablesRequest::SearchMetaTablesRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "SearchMetaTables")
{
	setMethod(HttpRequest::Method::Post);
}

SearchMetaTablesRequest::~SearchMetaTablesRequest()
{}

int SearchMetaTablesRequest::getEntityType()const
{
	return entityType_;
}

void SearchMetaTablesRequest::setEntityType(int entityType)
{
	entityType_ = entityType;
	setParameter("EntityType", std::to_string(entityType));
}

int SearchMetaTablesRequest::getPageSize()const
{
	return pageSize_;
}

void SearchMetaTablesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string SearchMetaTablesRequest::getAppGuid()const
{
	return appGuid_;
}

void SearchMetaTablesRequest::setAppGuid(const std::string& appGuid)
{
	appGuid_ = appGuid;
	setParameter("AppGuid", appGuid);
}

std::string SearchMetaTablesRequest::getKeyword()const
{
	return keyword_;
}

void SearchMetaTablesRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

int SearchMetaTablesRequest::getPageNumber()const
{
	return pageNumber_;
}

void SearchMetaTablesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

