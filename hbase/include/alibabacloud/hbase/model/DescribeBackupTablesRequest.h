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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBEBACKUPTABLESREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBEBACKUPTABLESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DescribeBackupTablesRequest : public RpcServiceRequest
			{

			public:
				DescribeBackupTablesRequest();
				~DescribeBackupTablesRequest();

				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getBackupRecordId()const;
				void setBackupRecordId(const std::string& backupRecordId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);

            private:
				int pageNumber_;
				int pageSize_;
				std::string backupRecordId_;
				std::string clusterId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBEBACKUPTABLESREQUEST_H_