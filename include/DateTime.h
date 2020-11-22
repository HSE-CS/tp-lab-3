#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <ctime>
#include <string> 
using namespace std;

class DateTime
{
private:
	tm date;
public:
	DateTime(unsigned  day, unsigned month, unsigned year);
	DateTime(DateTime&);
	DateTime();
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	int getDifference(DateTime&);
};