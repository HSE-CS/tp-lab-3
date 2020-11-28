#ifndef TASK2_H
#define TASK2_H

#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

class DateTime
{
private:
	time_t _time;
public:
	DateTime()
	{
		const time_t start = time(0);
		struct tm* TIME = localtime(&start);
		TIME->tm_mday;
		TIME->tm_mon;
		TIME->tm_year;
		_time = mktime(TIME);
	}
	DateTime(int day, int month, int year)
	{
		const time_t start = time(0);
		struct tm* TIME = localtime(&start);
		TIME->tm_mday = day;
		TIME->tm_mon = month - 1;
		TIME->tm_year = year - 1900;
		_time = mktime(TIME);
	}
	DateTime(DateTime& prev_time)
	{
		_time = prev_time._time;
	}
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	unsigned getDifference(DateTime&);
};

#endif