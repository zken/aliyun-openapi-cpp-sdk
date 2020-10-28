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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_CREATEACCOUNTREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_CREATEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT CreateAccountRequest : public RpcServiceRequest
			{

			public:
				CreateAccountRequest();
				~CreateAccountRequest();

				std::string getDBInstanceName()const;
				void setDBInstanceName(const std::string& dBInstanceName);
				std::string getAccountDescription()const;
				void setAccountDescription(const std::string& accountDescription);
				std::string getAccountPrivilege()const;
				void setAccountPrivilege(const std::string& accountPrivilege);
				std::string getAccountPassword()const;
				void setAccountPassword(const std::string& accountPassword);
				std::string getAccountName()const;
				void setAccountName(const std::string& accountName);
				std::string getDBName()const;
				void setDBName(const std::string& dBName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);

            private:
				std::string dBInstanceName_;
				std::string accountDescription_;
				std::string accountPrivilege_;
				std::string accountPassword_;
				std::string accountName_;
				std::string dBName_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_CREATEACCOUNTREQUEST_H_