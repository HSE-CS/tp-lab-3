#pragma once
#ifndef DATA_TIME_H
#define DATA_TIME_H
#include <string>
using namespace std;
class DateTime {
private:
	int day, month, year;

public:
	DateTime();
	DateTime(const DateTime& obj);
	DateTime(int day, int month, int year);
	string getToday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	int getDifference(DateTime&);
};

#endif 

