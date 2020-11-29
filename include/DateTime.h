#ifndef _DATETIME_H
#define _DATETIME_H

#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <iostream>
#include <string>


using namespace std;


class DateTime
{
private:
	time_t time_i;
public:
	DateTime()
	{
		time_i = time(nullptr);
	};
	
	DateTime(int day, int month, int year)
	{
		time_t a = time(nullptr);
		struct tm* struct_time = localtime(&a);
		struct_time->tm_mday = day;
		struct_time->tm_mon = month-1;
		struct_time->tm_year = year-1900;
		time_i = mktime(struct_time);
	};

	DateTime(DateTime& class_input)
	{
		time_i = class_input.time_i;
	};
	
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	unsigned getDifference(DateTime&);
};

#endif 