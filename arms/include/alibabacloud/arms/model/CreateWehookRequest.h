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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEWEHOOKREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEWEHOOKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT CreateWehookRequest : public RpcServiceRequest
			{

			public:
				CreateWehookRequest();
				~CreateWehookRequest();

				std::string getHeaders()const;
				void setHeaders(const std::string& headers);
				std::string getMethod()const;
				void setMethod(const std::string& method);
				std::string getParams()const;
				void setParams(const std::string& params);
				std::string getProxyUserId()const;
				void setProxyUserId(const std::string& proxyUserId);
				std::string getBody()const;
				void setBody(const std::string& body);
				std::string getUrl()const;
				void setUrl(const std::string& url);
				std::string getContactName()const;
				void setContactName(const std::string& contactName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);

            private:
				std::string headers_;
				std::string method_;
				std::string params_;
				std::string proxyUserId_;
				std::string body_;
				std::string url_;
				std::string contactName_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEWEHOOKREQUEST_H_