#pragma once
#ifndef DATETIME_H
#define DATETIME_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>
#include <vector>

#define SECONDS_AT_DAY 60*60*24

class DateTime
{
private:
	tm data;
public:
	DateTime();
	DateTime(int, int, int);
	DateTime(DateTime&);

	tm getdata();

	std::string getToday();
	std::string getYesterday();
	std::string getTomorrow();
	std::string getFuture(size_t N);
	std::string getPast(size_t N);
	size_t getDifference(DateTime&);

};

#endif // DATETIME_H
