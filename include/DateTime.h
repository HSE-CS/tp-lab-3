#pragma once
#ifndef _DATETIME_H
#define _DATETIME_H_


#include <ctime>
#include <string>

using namespace std;

class DateTime
{
private:
	int year, month, day;
	time_t timer;
public:
	DateTime(int y, int m,int d)
	{
		year = y;
		month = m;
		day = d;
		timer = time(NULL);
		struct tm nowLocal = *localtime(&timer);
		nowLocal.tm_year = year - 1900;
		nowLocal.tm_mon = month - 1;
		nowLocal.tm_mday = day;

		timer = mktime(&nowLocal);
	}

	DateTime()
	{
		struct tm nowLocal;
		timer = time(NULL);
		nowLocal = *localtime(&timer);

		year = nowLocal.tm_year + 1900;
		month = nowLocal.tm_mon + 1;
		day = nowLocal.tm_mday;
	}
	DateTime(const DateTime &datetime) :
		year(datetime.year), month(datetime.month), day(datetime.day),timer(datetime.timer) {}
	
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	unsigned int getDifference(DateTime d1);
};

#endif