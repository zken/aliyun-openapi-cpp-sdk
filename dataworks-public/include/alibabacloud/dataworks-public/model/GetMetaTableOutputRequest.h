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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETMETATABLEOUTPUTREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETMETATABLEOUTPUTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetMetaTableOutputRequest : public RpcServiceRequest
			{

			public:
				GetMetaTableOutputRequest();
				~GetMetaTableOutputRequest();

				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				std::string getTableGuid()const;
				void setTableGuid(const std::string& tableGuid);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

            private:
				std::string endDate_;
				std::string tableGuid_;
				int pageSize_;
				std::string startDate_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETMETATABLEOUTPUTREQUEST_H_