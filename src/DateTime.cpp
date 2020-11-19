#include "DateTime.h"
#include <ctime>
#include <cctype>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS


DateTime::DateTime(u_int day, u_int month, u_int year)
{
	if ((day < 1) || (day > 31) || (month < 1) || (month > 12))
	{
		std::cout << "ERROR: Invalid date" << std::endl;
		return;
	}
	this->day = day;
	this->month = month;
	this->year = year;
}

DateTime::DateTime()
{
	time_t rawtime;
	struct tm* cur_time;
	time(&rawtime);
	cur_time = localtime(&rawtime);
	this->day = cur_time->tm_mday;
	this->month = cur_time->tm_mon + 1;
	this->year = cur_time->tm_year + 1900;
}

DateTime::DateTime(const DateTime& date_time) : day(date_time.day), month(date_time.month), year(date_time.year) {};

std::string DateTime::getStrDateByDateInSeconds(time_t raw_time)
{
	char date[100] = { '\0' };
	char correct_date[100] = { '\0' };
	struct tm* cur_time = localtime(&raw_time);
	strftime(date, 100, "%x %B %Y, %A", cur_time);
	for (int i = 0; date[i]; i++)
		date[i] = tolower(date[i]);
	int i = 2, j = 0;
	correct_date[0] = date[3];
	correct_date[1] = date[4];
	correct_date[i++] = ' ';
	while (date[j++] != ' ');
	while (date[j])
		correct_date[i++] = date[j++];
	return correct_date;
}

time_t DateTime::getTimeOffset(int days=0)
{
	struct tm* cur_time;
	time_t raw_time;

	time(&raw_time);
	cur_time = localtime(&raw_time);
	cur_time->tm_mday = day + days;
	cur_time->tm_mon = month - 1;
	cur_time->tm_year = year - 1900;
	time_t cur_time_t = mktime(cur_time);
	return cur_time_t;
}

std::string DateTime::getToday()
{
	return getStrDateByDateInSeconds(getTimeOffset());
}

std::string DateTime::getYesterday()
{
	return getStrDateByDateInSeconds(getTimeOffset(-1));
}

std::string DateTime::getTomorrow()
{
	return getStrDateByDateInSeconds(getTimeOffset(1));
}

std::string DateTime::getFuture(int N)
{
	return getStrDateByDateInSeconds(getTimeOffset(N));
}

std::string DateTime::getPast(int N)
{
	return getStrDateByDateInSeconds(getTimeOffset(-N));
}

double DateTime::getDifference(DateTime& dateTime)
{
	const time_t start_time_t = getTimeOffset();
	const time_t end_time_t = dateTime.getTimeOffset();
	double difference = difftime(start_time_t, end_time_t) / (60 * 60 * 24);
	if (difference < 0)
		difference *= (-1);
	return difference;
}
