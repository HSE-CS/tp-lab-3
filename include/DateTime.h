#ifndef DATETIME_H
#define DATETIME_H
#include <string>
#include <ctime>

class DateTime {

private:
	tm date;

public:
	DateTime(int day, int mounth, int year);
	DateTime();
	DateTime(DateTime&);

	std::string getToday();
	std::string getYesterday();
	std::string getTomorrow();
	std::string getFuture(unsigned int N);
	std::string getPast(unsigned int N);
	int getDifference(DateTime&);
};
#endif
