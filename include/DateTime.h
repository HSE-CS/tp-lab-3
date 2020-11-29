#ifndef DATETIME_H
#define DATETIME_H
#include <string>

class DateTime {

private:

	time_t time_in;

public:

	DateTime(int day, int month, int year);
	DateTime();
	DateTime(DateTime&);
	std::string getToday();
	std::string getYesterday();
	std::string getTomorrow();
	std::string getFuture(unsigned int N);
	std::string getPast(unsigned int N);
	double getDifference(DateTime& inform);

};

#endif
