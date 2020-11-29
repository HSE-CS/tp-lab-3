#pragma once
#ifndef DATETIME_H
#define DATETIME_H
#include <ctime>
#include <string>
#include <vector>
class DateTime
{
private:
	tm data;
public:
	DateTime();
	DateTime(int, int, int);
	DateTime(DateTime&);

	std::string getToday();
	std::string getYesterday();
	std::string getTomorrow();
	std::string getFuture(size_t N);
	std::string getPast(size_t N);
	size_t getDifference(DateTime&);

};

std::string makeData(time_t time);
#endif // DATETIME_H
