#pragma once
#include <string>
using namespace std;


// default using utf-8 encoding

class EventLog
{
public:
	EventLog();
	~EventLog();
	static int SaveLog(const char *content);
	
	EventLog & operator<<(const int &int_value);
	EventLog & operator<<(const short &short_value);
	EventLog & operator<<(const long &long_value);
	EventLog & operator<<(const char *buffer);
	EventLog & operator<<(const char &liter);

private:
	static string m_log_full_path;
	string m_out_buffer;
	int GetTimestampStr(string &timestamp);
	int GetRecordPosition(string &position);
	int GetRecordPrefixStr(string &prefix);
	int EventLog::GetDateStr(string &date_str);
};

