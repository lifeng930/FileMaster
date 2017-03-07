#pragma once
class FileInfo
{
public:
	FileInfo();
	~FileInfo();
	
private:
	char szfile_name[MAX_PATH];
	char m_szfull_path[MAX_PATH];
};

