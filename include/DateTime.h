#ifndef DATETIME_H
#define DATETIME_H
#include <ctime>
#include <iostream>
#include <ctime>
typedef unsigned int u_int;


class DateTime
{
private:
	u_int day = 0, month = 0, year = 0;
	std::string getStrDateByDateInSeconds(time_t seconds);
	time_t getTimeOffset(int);
public:
	DateTime(u_int, u_int, u_int);
	DateTime();
	DateTime(const DateTime& date_time);
	std::string getToday();
	std::string getYesterday();
	std::string getTomorrow();
	std::string getFuture(int N);
	std::string getPast(int N);
	double getDifference(DateTime&);
};

#endif // !DATETIME_H
