#pragma once
#define _CRT_SECURE_NO_WARNINGS
#ifndef DATETIME_H
#define DATETIME_H
#include <ctime>
#include <string>
#include <math.h>

using namespace std;
class DateTime 
{
	private:
		time_t now;
		tm* date;
	public:
		DateTime(int day, int monday, int year);
		DateTime();
		DateTime(const DateTime & object);
		string answer(struct tm*);
		string getToday();
		string getYesterday();
		string getTomorrow();
		string getFuture(unsigned int N);
		string getPast(unsigned int N);
		int getDifference(DateTime&);

};
#endif