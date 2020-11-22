#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <cstring> 
#include <string.h>
using namespace std;

string make_low_register(char* buffer)
{
	for (int i = 0; i < strlen(buffer); i++)
		if (buffer[i] >= 'A' && buffer[i] <= 'Z')
		{
			buffer[i] = buffer[i] + 32;
		}
		else
		{
			buffer[i] = buffer[i];
		}
	return buffer;
}
string DateTime::getToday()
{
	char buffer[80];
	strftime(buffer, 80, "%d %B %Y, %A", &date);
	return make_low_register(buffer);
};

string DateTime::getYesterday()
{
	char buffer[80];
	date.tm_mday = date.tm_mday - 1;
	mktime(&date);
	strftime(buffer, 80, "%d %B %Y, %A", &date);
	return make_low_register(buffer);
};

string DateTime::getTomorrow()
{
	char buffer[80];
	date.tm_mday = date.tm_mday + 1;
	mktime(&date);
	strftime(buffer, 80, "%d %B %Y, %A", &date);
	return make_low_register(buffer);
};

string DateTime::getFuture(unsigned int N)
{
	char buffer[80];
	date.tm_mday = date.tm_mday + N;
	mktime(&date);
	strftime(buffer, 80, "%d %B %Y, %A", &date);
	return make_low_register(buffer);
};

string DateTime::getPast(unsigned int N)
{
	char buffer[80];
	date.tm_mday = date.tm_mday - N;
	mktime(&date);
	strftime(buffer, 80, "%d %B %Y, %A", &date);
	return make_low_register(buffer);
};

int DateTime::getDifference(DateTime& date_other)
{
	time_t raznica = abs(mktime(&date) - mktime(&date_other.date));
	return (raznica / (60 * 60 * 24));
};

DateTime::DateTime(DateTime& information)
{
	date = information.date;
};

DateTime::DateTime()
{
	tm* time_struct;
	time_t time_now_in_sec;
	time(&time_now_in_sec);
	time_struct = localtime(&time_now_in_sec);
	date = *time_struct;
	mktime(&date);
};

DateTime::DateTime(unsigned day, unsigned month, unsigned year)
{
	date.tm_year = year - 1900;
	date.tm_mon = month - 1;
	date.tm_mday = day;
	date.tm_sec = 0;
	date.tm_min = 0;
	date.tm_hour = 0;
	mktime(&date);
};