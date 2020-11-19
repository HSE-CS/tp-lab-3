#ifndef _DATETIME_H_
#define _DATETIME_H_
#include <string>
#include <ctime>

class DateTime
{
private:
	tm rdate;
public:
	DateTime(int day, int month, int year);
	DateTime();
	DateTime(const DateTime&);
	std::string getToday();
	std::string getYesterday();
	std::string getTomorrow();
	std::string getFuture(unsigned int N);
	std::string getPast(unsigned int N);
	int getDifference(DateTime&);
};

#endif