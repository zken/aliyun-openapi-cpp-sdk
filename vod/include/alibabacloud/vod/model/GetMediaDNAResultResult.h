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

#ifndef ALIBABACLOUD_VOD_MODEL_GETMEDIADNARESULTRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETMEDIADNARESULTRESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetMediaDNAResultResult : public ServiceResult
			{
			public:
				struct DNAResult
				{
					struct VideoDNAItem
					{
						struct DetailItem
						{
							struct Input
							{
								std::string start;
								std::string duration;
							};
							struct Duplication
							{
								std::string start;
								std::string duration;
							};
							Input input;
							Duplication duplication;
						};
						std::string similarity;
						std::string primaryKey;
						std::vector<VideoDNAItem::DetailItem> detail;
					};
					std::vector<VideoDNAItem> videoDNA;
				};


				GetMediaDNAResultResult();
				explicit GetMediaDNAResultResult(const std::string &payload);
				~GetMediaDNAResultResult();
				DNAResult getDNAResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				DNAResult dNAResult_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETMEDIADNARESULTRESULT_H_