#ifndef  DATETIME_H
#define DATETIME_H


#include<string>
#include<time.h>


class DateTime {
private:
	tm timer;

public:

	DateTime();
	DateTime(const DateTime& dateToCopy);
	DateTime(int day, int month, int year);

	std::string getToday();
	std::string getYesterday();
	std::string getTomorrow();
	std::string getFuture(unsigned int N);
	std::string getPast(unsigned int N);
	int getDifference(DateTime&);

};

#endif