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

#ifndef ALIBABACLOUD_RDS_MODEL_PRECHECKCREATEORDERFORMODIFYREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_PRECHECKCREATEORDERFORMODIFYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT PreCheckCreateOrderForModifyRequest : public RpcServiceRequest
			{

			public:
				PreCheckCreateOrderForModifyRequest();
				~PreCheckCreateOrderForModifyRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getDBInstanceStorage()const;
				void setDBInstanceStorage(int dBInstanceStorage);
				std::string getNodeType()const;
				void setNodeType(const std::string& nodeType);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEffectiveTime()const;
				void setEffectiveTime(const std::string& effectiveTime);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getSwitchTime()const;
				void setSwitchTime(const std::string& switchTime);
				std::string getDBInstanceStorageType()const;
				void setDBInstanceStorageType(const std::string& dBInstanceStorageType);
				std::string getBusinessInfo()const;
				void setBusinessInfo(const std::string& businessInfo);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getResource()const;
				void setResource(const std::string& resource);
				std::string getCommodityCode()const;
				void setCommodityCode(const std::string& commodityCode);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getUsedTime()const;
				void setUsedTime(const std::string& usedTime);
				std::string getDBInstanceClass()const;
				void setDBInstanceClass(const std::string& dBInstanceClass);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPromotionCode()const;
				void setPromotionCode(const std::string& promotionCode);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getTimeType()const;
				void setTimeType(const std::string& timeType);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);

            private:
				long resourceOwnerId_;
				int dBInstanceStorage_;
				std::string nodeType_;
				std::string clientToken_;
				std::string engineVersion_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string effectiveTime_;
				std::string dBInstanceId_;
				std::string switchTime_;
				std::string dBInstanceStorageType_;
				std::string businessInfo_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string resource_;
				std::string commodityCode_;
				long ownerId_;
				std::string usedTime_;
				std::string dBInstanceClass_;
				std::string vSwitchId_;
				std::string promotionCode_;
				std::string vpcId_;
				std::string zoneId_;
				std::string timeType_;
				std::string payType_;
				std::string instanceNetworkType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_PRECHECKCREATEORDERFORMODIFYREQUEST_H_