#define DATETIME_H

#include <iostream>
#include <ctime>
#include <string>
#include <cctype>


class DateTime {
private:
	time_t f_time;

public:
	DateTime();
	DateTime(DateTime&);
	DateTime(unsigned int day, unsigned int month, unsigned int year);
	std::string getToday();
	std::string getYesterday();
	std::string getTomorrow();
	std::string getFuture(unsigned int N);
	std::string getPast(unsigned int N);
	double getDifference(DateTime&);
};