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
	DateTime(unsigned int, unsigned int, unsigned int);
	DateTime();
	DateTime(const DateTime&);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int);
	string getPast(unsigned int);
	unsigned int getDifference(DateTime&);
	string TimeToString(struct tm*);
};
#endif 
