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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBECDNDOMAINLOGSREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBECDNDOMAINLOGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT DescribeCdnDomainLogsRequest : public RpcServiceRequest
			{

			public:
				DescribeCdnDomainLogsRequest();
				~DescribeCdnDomainLogsRequest();

				std::string getResourceOwnerId()const;
				void setResourceOwnerId(const std::string& resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getPageNo()const;
				void setPageNo(long pageNo);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getLogDay()const;
				void setLogDay(const std::string& logDay);

            private:
				std::string resourceOwnerId_;
				std::string resourceOwnerAccount_;
				long pageNo_;
				std::string ownerAccount_;
				std::string domainName_;
				long pageSize_;
				std::string endTime_;
				std::string startTime_;
				std::string ownerId_;
				std::string accessKeyId_;
				std::string logDay_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBECDNDOMAINLOGSREQUEST_H_