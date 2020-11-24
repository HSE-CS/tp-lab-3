#pragma once
#ifndef _DATETIME_H
#define _DATETIME_H_


#include <ctime>
#include <string>
#include <cstdint>

using namespace std;

class DateTime
{
private:
	uint16_t year, month, day;
	time_t timer;
public:
	DateTime(uint16_t d, uint16_t m, uint32_t y)
	{
		timer = time(NULL);
		struct tm nowLocal = *localtime(&timer);
		nowLocal.tm_year = y - 1900;
		nowLocal.tm_mon = m - 1;
		nowLocal.tm_mday = d;
		this->timer = mktime(&nowLocal);
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
	string getFuture(uint16_t N);
	string getPast(uint16_t N);
	unsigned int getDifference(DateTime d1);
};

#endif