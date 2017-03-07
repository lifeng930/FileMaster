#pragma once
#include <list>
#include "FileInfo.h"
using namespace std;

class FileOperator
{
public:
	FileOperator();
	~FileOperator();
	int DeleteFile(HANDLE file_handle);
	int ModidyFile(HANDLE file_handle);
	int LookUpFile(const char *file_name);
private:
	char m_szSeekPath[MAX_PATH];
	list<FileInfo> m_file_set;
};

