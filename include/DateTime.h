#ifndef DATETIME_H
#define DATETIME_H
#include <string>
using namespace std;

class DateTime
{
private:
	int day;
	int month;
	int year;
public:
	DateTime();
	DateTime(int day, int month, int year);
	DateTime(const DateTime& other);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	int getDifference(DateTime &other);
};

#endif
