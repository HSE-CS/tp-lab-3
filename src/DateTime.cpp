#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
#include <sstream>
#include "DateTime.h"
using namespace std;
DateTime::DateTime()
{
	time_t rawtime;                                     
	struct tm * timeinfo; 
	time( &rawtime );                             
	timeinfo = localtime( &rawtime );
	year = timeinfo->tm_year + 1900;
	month = timeinfo->tm_mon + 1;
	day = timeinfo->tm_mday;	
}

DateTime::DateTime(int day,int month,int year)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

DateTime::DateTime(DateTime& dateTime)
{
	year = dateTime.year;
	month = dateTime.month;
	day = dateTime.day;
}
string DateTime::getToday()
{
	return getDay(0);
}

string DateTime::getYesterday()
{
	return getDay(-1);
}

string DateTime::getTomorrow()
{
	return getDay(1);
}

int DateTime::getDifference(DateTime& dateTime)
{
	time_t a = time(nullptr);
	time_t b = time(nullptr);
	struct tm* tm1; 
	tm1 = localtime(&a);
	struct tm* tm2; 
	tm2 = localtime(&b);
	tm1->tm_year = year- 1900;
	tm1->tm_mon = month - 1;
	tm1->tm_mday = day;
	tm2->tm_year = dateTime.year - 1900;
	tm2->tm_mon = dateTime.month - 1;
	tm2->tm_mday = dateTime.day;
	time_t time1 = mktime(tm1);
	time_t time2 = mktime(tm2);
	return abs((time1-time2)/(60*60*24));
	
}

string DateTime::getFuture(unsigned int N)
{

	return getDay(N);
}

string DateTime::getPast(unsigned int N)
{

	long n = N;
	return getDay(-n);
}
string DateTime::getDay(long N)
{
	std :: stringstream stream;
	time_t a = time(nullptr);
	struct tm* timeinfo = localtime(&a);
	timeinfo->tm_year = year- 1900;
	timeinfo->tm_mon = month - 1;
	timeinfo->tm_mday = day;
	time_t time = mktime(timeinfo) + N*60*60*24;
	timeinfo = localtime(&time);
	stream << "0"<<timeinfo->tm_mday<<" "<<months[timeinfo->tm_mon]<<" "<<timeinfo->tm_year+1900<<", "<<weekday[timeinfo->tm_wday];
	return stream.str();
}





