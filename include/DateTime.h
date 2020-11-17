#ifndef __DATETIME_H
#define _DATETIME_H_

#define _CRT_SECURE_NO_WARNINGS

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <string>

class DateTime
{
private:
	unsigned day;
	unsigned month;
	unsigned year;
	std::string stroka;

public:

	DateTime(unsigned, unsigned, unsigned);
	DateTime();
	DateTime(DateTime&);

	std::string getToday();
	std::string getYesterday();
	std::string getTomorrow();
	std::string getFuture(unsigned int N);
	std::string getPast(unsigned int N);
	unsigned getDifference(DateTime& new_date);
};
#endif
