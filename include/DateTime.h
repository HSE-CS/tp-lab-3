#ifndef DATATIME_H
#define DATATIME_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

#define SECPERDAY 86400
#define STARTYEAR 1900

class DateTime
{
private:
	unsigned int day = 0;
	unsigned int month = 0;
	unsigned int year = 0;
	std::time_t seconds = 0;

	static const std::vector<std::string> WEEKDAYS;
	static const std::vector<std::string> MONTHS;

	std::string getDayByDifference(int n);
	std::string getDayOfWeek();
	std::string getFullNameOfDay();

public:
	DateTime(unsigned int, unsigned int, unsigned int);
	DateTime();
	DateTime(DateTime&);
	std::string getToday(); //(e. g. 07 november 2018, wednesday)
	std::string getYesterday(); //(e. g. 07 november 2018, wednesday)
	std::string getTomorrow(); //(e. g. 07 november 2018, wednesday)
	std::string getFuture(unsigned int n); //(e. g. 07 november 2018, wednesday)
	std::string getPast(unsigned int n); //(e. g. 07 november 2018, wednesday)
	unsigned int getDifference(DateTime&); //(seconds - this->seconds)/SECPERDAY
	const std::time_t getSeconds() const;
	DateTime(std::time_t seconds);
};

#endif