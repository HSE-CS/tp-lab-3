#ifndef DATE_TIME_H
#define DATE_TIME_H
#include <ctime>
#include <string>
using namespace std;

class DateTime {
private:
	tm date;
public:
	DateTime();
	DateTime(const DateTime& first_date);
	DateTime(int day, int month, int year);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	int getDifference(DateTime& tmp_date);
};

#endif