#pragma once

#include "ConnectionInfo.h"
#include "FileUploadInfo.h"

class DataTransferHandler {
public:

	static void Thread_GetData(ConnectionInfo* con, FileUploadInfo fileInfo);
	static void Thread_SendListFiles(ConnectionInfo* con);
	static void Thread_SendFiles(ConnectionInfo* con, std::vector<std::string> filesNames);
private:
};

