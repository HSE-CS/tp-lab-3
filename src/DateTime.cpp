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
	struct tm* tm1 = new tm;
	struct tm* tm2 = new tm;
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
	struct tm* timeinfo = new tm;
	timeinfo->tm_year = year- 1900;
	timeinfo->tm_mon = month - 1;
	timeinfo->tm_mday = day;
	time_t time = mktime(timeinfo) + N*60*60*24;
	timeinfo = localtime(&time);
	stream << "0"<<timeinfo->tm_mday<<" "<<months[timeinfo->tm_mon-1]<<" "<<timeinfo->tm_year+1900<<", "<<weekday[timeinfo->tm_wday-1];
	return stream.str();
}





