#ifndef DATETIME_H
#define DATETIME_H
#include <string>
using namespace std;

class DateTime {
	public:
		string getToday();
		string getYesterday();
		string getTomorrow();
		string getFuture(unsigned int N);
		string getPast(unsigned int N);
		int getDifference(DateTime&);
		DateTime();
		DateTime(int day, int month, int year);
		DateTime(DateTime& dateTime);
	private:
		int day;
		int month;
		int year;
};

#endif DATETIME_H