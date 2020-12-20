#include "DateTime.h"

string month[12] = { "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };
string weekday[7] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

string DateTime::TimeToString(struct tm* time)
{
	string result("");
	if (time->tm_mday < 10)	result += "0" + to_string(time->tm_mday);
	else result += to_string(time->tm_mday);
	result += " " + month[time->tm_mon] + " " + to_string(time->tm_year + 1900) + ", " + weekday[time->tm_wday];
	return result;
}

DateTime::DateTime()
{
	time_t currTime = time(NULL);
	date = *localtime(&currTime);
}

DateTime::DateTime(unsigned int day, unsigned int month, unsigned int year)
{
	time_t currTime = time(NULL);
	date = *localtime(&currTime);
	date.tm_mday = day;
	date.tm_mon = month - 1;
	date.tm_year = year - 1900;
	currTime = mktime(&date);
	date = *localtime(&currTime);
}

DateTime::DateTime(const DateTime& newTime)
{
	this->date = newTime.date;
}

string DateTime::getToday()
{
	return TimeToString(&date);
}

string DateTime::getFuture(unsigned int N)
{
	tm  newDate = date;
	newDate.tm_mday += N;
	time_t newDateInSeconds = mktime(&newDate);
	newDate = *localtime(&newDateInSeconds);
	return TimeToString(&newDate);
}

string DateTime::getPast(unsigned int N)
{
	tm newDate = date;
	newDate.tm_mday -= N;
	time_t newDateInSeconds = mktime(&newDate);
	newDate = *localtime(&newDateInSeconds);
	return TimeToString(&newDate);
}

string DateTime::getYesterday() {
	return getPast(1);
}

string DateTime::getTomorrow() {
	return getFuture(1);
}

unsigned int DateTime::getDifference(DateTime& _newDate)
{
	return abs(mktime(&date) - mktime(&_newDate.date)) / (24 * 60 * 60);
}
