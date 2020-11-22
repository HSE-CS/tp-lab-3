#pragma once
#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <ctime>
using namespace std;

class DateTime
{
private:
	time_t date;
public:
	DateTime(unsigned  day, unsigned month, unsigned year);
	DateTime(DateTime &);
	DateTime();
	string getToday();
	string getYesterday();
	string getTomorrow();
	DateTime getFuture(unsigned int N);
	DateTime getPast(unsigned int N);
	int getDifference(DateTime&);

};