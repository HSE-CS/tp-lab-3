#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"

#define MAX(a, b) (a) > (b) ? (a) : (b)
#define MIN(a, b) (a) < (b) ? (a) : (b)

DateTime::DateTime(int day, int month, int year)
{
	//this->timeinfo = new tm;
	time(&rawtime);
	this->timeinfo = localtime(&rawtime);

	this->timeinfo->tm_year = year - 1900;
	this->timeinfo->tm_mon = month - 1;
	this->timeinfo->tm_mday = day;
	this->secTime = mktime(this->timeinfo);
	
}

DateTime::DateTime()
{
	//this->timeinfo = new tm;
	time(&rawtime);
	this->timeinfo = localtime(&rawtime);
	this->secTime = mktime(this->timeinfo);
}

DateTime::DateTime(const DateTime& obj)
{
	//this->timeinfo = new tm;
	this->timeinfo = obj.timeinfo;
	this->secTime = obj.secTime;
}

tm* DateTime::GetTimeInfo()
{
	return this->timeinfo;
}

string DateTime::GetDate()
{
	string date;
	date += to_string(this->timeinfo->tm_mday);
	date += ' ';
	date += this->months[this->timeinfo->tm_mon];
	date += ' ';
	date += to_string(this->timeinfo->tm_year+1900);
	date += ", ";
	date += this->getWeekDay();
	return date;
}

string DateTime::getWeekDay()
{
	mktime(this->timeinfo);
	return this->weekday[this->timeinfo->tm_wday];
}

string DateTime::getToday()
{
	return this->GetDate();
}

string DateTime::getYesterday()
{
	this->timeinfo->tm_mday--;
	mktime(this->timeinfo);
	string date = this->GetDate();
	this->timeinfo->tm_mday++;
	mktime(this->timeinfo);
	return date;
}

string DateTime::getTomorrow()
{
	this->timeinfo->tm_mday++;
	mktime(this->timeinfo);
	string date = this->GetDate();
	this->timeinfo->tm_mday--;
	mktime(this->timeinfo);
	return date;
}

string DateTime::getFuture(unsigned int N)
{
	this->timeinfo->tm_mday += N;
	mktime(this->timeinfo);
	string date = this->GetDate();
	this->timeinfo->tm_mday -= N;
	mktime(this->timeinfo);
	return date;
}

string DateTime::getPast(unsigned int N)
{
	this->timeinfo->tm_mday -= N;
	mktime(this->timeinfo);
	string date = this->GetDate();
	this->timeinfo->tm_mday += N;
	mktime(this->timeinfo);
	return date;
}

int DateTime::getDifference(DateTime& date2)
{
	//time_t time1 = mktime(this->timeinfo);
	//time_t time2 = mktime(date2.GetTimeInfo());
	time_t time1 = this->secTime;
	time_t time2 = date2.secTime;
	return (int)(difftime(MAX(time1, time2), MIN(time1, time2)) / 60.0 / 60.0 / 24.0);
	
}
