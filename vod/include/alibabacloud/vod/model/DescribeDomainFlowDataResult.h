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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEDOMAINFLOWDATARESULT_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEDOMAINFLOWDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT DescribeDomainFlowDataResult : public ServiceResult
			{
			public:
				struct DataModule
				{
					std::string overseasValue;
					std::string dynamicOverseasValue;
					std::string staticOverseasValue;
					std::string value;
					std::string dynamicDomesticValue;
					std::string staticValue;
					std::string staticDomesticValue;
					std::string timeStamp;
					std::string dynamicValue;
					std::string domesticValue;
				};


				DescribeDomainFlowDataResult();
				explicit DescribeDomainFlowDataResult(const std::string &payload);
				~DescribeDomainFlowDataResult();
				std::string getEndTime()const;
				std::string getDomainName()const;
				std::vector<DataModule> getFlowDataPerInterval()const;
				std::string getDataInterval()const;
				std::string getStartTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string domainName_;
				std::vector<DataModule> flowDataPerInterval_;
				std::string dataInterval_;
				std::string startTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEDOMAINFLOWDATARESULT_H_