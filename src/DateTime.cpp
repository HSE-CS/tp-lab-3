#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <ctime>
#include <cstring>
#include <iostream>

using namespace std;
DateTime::DateTime(int day, int month, int year)
{
	dt.tm_sec = 0;
	dt.tm_min = 0;
	dt.tm_hour = 0;
	dt.tm_mday = day;
	dt.tm_mon = month - 1;
	dt.tm_year = year - 1900;
	mktime(&dt);
}
DateTime::DateTime()
{
	time_t loctime;
	time(&loctime);
	dt = *localtime(&loctime);
	mktime(&dt);

}
DateTime::DateTime(const DateTime& datetime)
{
	dt = datetime.dt;
}

string formatDate(const tm* datetime)
{
	char strdate[100];
	strftime(strdate, 100, "%d %B %Y, %A", datetime);
	for (int i = 0; i < strlen(strdate); i++)
	{
		if (strdate[i] >= 'A')
			strdate[i] = tolower(strdate[i]);
	}
	return strdate;
}

string DateTime::getToday()
{
	return formatDate(&dt);
}
string DateTime::getYesterday()
{
	return getPast(1);
}
string DateTime::getTomorrow()
{
	return getFuture(1);
}
string DateTime::getFuture(unsigned int N)
{
	tm loctime = dt;
	loctime.tm_mday = loctime.tm_mday + N;
	mktime(&loctime);
	return formatDate(&loctime);
}
string DateTime::getPast(unsigned int N)
{
	tm loctime = dt;
	loctime.tm_mday = loctime.tm_mday - N;
	mktime(&loctime);
	return formatDate(&loctime);
}
int DateTime::getDifference(DateTime& time)
{
	int diff = abs(mktime(&dt) - mktime(&time.dt));
	return int(diff / (24 * 60 * 60));
}