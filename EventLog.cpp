#include "stdafx.h"
#include "EventLog.h"


string EventLog::m_log_full_path("record.txt");

EventLog::EventLog():
m_out_buffer("")
{
}


EventLog::~EventLog()
{

}

int EventLog::GetDateStr(string &date_str)
{
	return 0;
}
int EventLog::GetTimestampStr(string &timestamp)
{
	return 0;
}
int EventLog::GetRecordPosition(string &position)
{
	return 0;
}

int EventLog::GetRecordPrefixStr(string &prefix)
{
	return 0;
}
