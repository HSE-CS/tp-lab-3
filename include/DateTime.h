#ifndef DATETIME_H
#define DATETIME_H

#include <string>
using namespace std;

class DateTime {
private:
	unsigned int day, month, year;
public:
	DateTime(unsigned int day, unsigned int month, unsigned int year);
	DateTime();
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	unsigned int getDifference(DateTime& D);

	time_t getSec();
};

string makeDate(time_t t);
time_t getSec(unsigned int now_day, unsigned int now_month, unsigned int now_year);

#endif
