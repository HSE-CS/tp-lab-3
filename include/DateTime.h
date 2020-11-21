#ifndef DATETIME_H
#define DATETIME_H
#include <ctime>
#include <string>

using namespace std;

class DateTime
{
private:
	tm date;
public:
	DateTime(int day, int month, int year);
	DateTime();
	DateTime(const DateTime&);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	int getDifference(DateTime&);
};

#endif