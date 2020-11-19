#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <iostream>
#include <cmath>
#include <string.h>

const char* months[] = { "january", "february", "march", "april", "may", "june", "july",
						"august", "september", "october", "november", "december" };

const char* days[] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };


DateTime::DateTime(int day, int month, int year)
{
	rdate = { 0, 0, 0, day, month - 1, year - 1900 };
	mktime(&rdate);
}

DateTime::DateTime()
{
	time_t rtime;
	struct tm* Time;
	time(&rtime);
	Time = localtime(&rtime);
	rdate = (*Time);
	/*rdate.tm_mday = Time->tm_mday;
	rdate.tm_mon = Time->tm_mon;
	rdate.tm_year = Time->tm_year;
	rdate.tm_wday = Time->tm_wday;*/
	mktime(&rdate);
}

DateTime::DateTime(const DateTime& newDataTime)
{
	this->rdate = newDataTime.rdate;
}

std::string DateTime::getToday()
{
	std::string res_time;
	struct tm* Time = (&this->rdate);
	if (Time->tm_mday > 9)
		res_time.append(std::to_string(Time->tm_mday));
	else
	{
		res_time.append("0");
		res_time.append(std::to_string(Time->tm_mday));
	}
	res_time.append(" ");
	res_time.append(months[Time->tm_mon]);
	res_time.append(" ");
	res_time.append(std::to_string(Time->tm_year + 1900));
	res_time.append(", ");
	res_time.append(days[Time->tm_wday]);
	return res_time;
}

std::string DateTime::getYesterday()
{
	DateTime Yesterday;
	time_t rtime = mktime(&this->rdate);
	struct tm* Time;
	rtime -= 60 * 60 * 24;
	Time = localtime(&rtime);
	Yesterday.rdate = (*Time);
	return Yesterday.getToday();
}


std::string DateTime::getTomorrow()
{
	DateTime Tomorrow;
	time_t rtime = mktime(&this->rdate);
	struct tm* Time;
	rtime += 60 * 60 * 24;
	Time = localtime(&rtime);
	Tomorrow.rdate = (*Time);
	return Tomorrow.getToday();
}

std::string DateTime::getFuture(unsigned int N)
{
	DateTime Future;
	time_t rtime = mktime(&this->rdate);
	struct tm* Time;
	rtime += 60 * 60 * 24 * (long long)N;
	Time = localtime(&rtime);
	Future.rdate = (*Time);
	return Future.getToday();
}

std::string DateTime::getPast(unsigned int N)
{
	DateTime Past;
	time_t rtime = mktime(&this->rdate);
	struct tm* Time;
	rtime -= 60 * 60 * 24 * (long long)N;
	Time = localtime(&rtime);
	Past.rdate = (*Time);
	return Past.getToday();
}

int DateTime::getDifference(DateTime& another_Date)
{
	time_t date1 = mktime(&this->rdate);
	time_t date2 = mktime(&another_Date.rdate);
	return abs(int(date1 - date2) / (60 * 60 * 24));
}

