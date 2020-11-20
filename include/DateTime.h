#ifndef DATE_H
#define DATE_H

#include <string>
#include <ctime>
#include <iostream>
using namespace std;
typedef unsigned int u_int;
#define _CRT_SECURE_NO_WARNINGS

class DateTime
{
private:
	tm date;
public:
	DateTime(u_int day, u_int month, u_int year);
	DateTime();
	DateTime(DateTime& date);
	string getToday() const;
	string getYesterday() const;
	string getTomorrow() const;
	DateTime getFuture(u_int N) const;
	DateTime getPast(u_int N) const;
	int getDifference(DateTime&);

};

#endif
