#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <ctime>
#include <string>
#include <iostream>

using namespace std;


class DateTime {
private:
	time_t raw_time;
public:
	string getToday();

	string getTomorrow();

	string getYesterday();

	string getFuture(unsigned int);

	string getPast(unsigned int);

	unsigned int getDifference(DateTime&);

	DateTime()
	{
		raw_time = time(nullptr);
	}
	DateTime(DateTime& other) {
		raw_time = other.raw_time;
	}

	DateTime(unsigned int day, unsigned int month, unsigned int year)
	{
		raw_time = time(nullptr);
		struct tm* struct_time = localtime(&raw_time);
		struct_time->tm_mday = day;
		struct_time->tm_mon = month - 1;
		struct_time->tm_year = year - 1900;
		raw_time = mktime(struct_time);
	}
};

#endif //TASK1_CIRCLE_H