#include "stdafx.h"
#include "FileOperator.h"


FileOperator::FileOperator()
{
	int len = strlen("C:\\");
	memcpy(m_szSeekPath, "C:\\", len);
}


FileOperator::~FileOperator()
{

}


int FileOperator::DeleteFile(HANDLE file_handle)
{
	return 0;
}

int FileOperator::ModidyFile(HANDLE file_handle)
{
	return 0;
}

int FileOperator::LookUpFile(const char *file_name)
{
	return 0;
}
