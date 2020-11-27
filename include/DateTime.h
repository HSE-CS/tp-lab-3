#ifndef DATETIME_H
#define DATETIME_H
#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>

class DateTime
{
private:
	struct tm str_time;
public:
	DateTime(int, int, int);   // конструктор с параметром числового типа
	DateTime();
	DateTime(const DateTime&);
	std::string getToday();
	std::string  getYesterday();
	std::string  getTomorrow();
	std::string  getFuture(unsigned int);
	std::string  getPast(unsigned int);
	int getDifference(DateTime&);

};
#endif

