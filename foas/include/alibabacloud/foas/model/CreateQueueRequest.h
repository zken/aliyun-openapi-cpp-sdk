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

#ifndef ALIBABACLOUD_FOAS_MODEL_CREATEQUEUEREQUEST_H_
#define ALIBABACLOUD_FOAS_MODEL_CREATEQUEUEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/foas/FoasExport.h>

namespace AlibabaCloud
{
	namespace Foas
	{
		namespace Model
		{
			class ALIBABACLOUD_FOAS_EXPORT CreateQueueRequest : public RoaServiceRequest
			{

			public:
				CreateQueueRequest();
				~CreateQueueRequest();

				std::string getQueueName()const;
				void setQueueName(const std::string& queueName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getMaxMemMB()const;
				void setMaxMemMB(int maxMemMB);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getGpu()const;
				void setGpu(int gpu);
				int getMaxVcore()const;
				void setMaxVcore(int maxVcore);

            private:
				std::string queueName_;
				std::string regionId_;
				int maxMemMB_;
				std::string clusterId_;
				int gpu_;
				int maxVcore_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_CREATEQUEUEREQUEST_H_