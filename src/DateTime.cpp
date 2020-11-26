#include "DateTime.h"

using namespace std;


DateTime::DateTime(int day, int mounth, int year)
{
	time_t rawtime = 0;

	int month[12] = { 31,28,31,30,31,30, 31,31,30,31,30,31 };

	int amount_day = 0;
	for (int i = 1970; i < year; i++)
	{
		if (i % 4 == 0) amount_day++;
		amount_day += 365;
	}

	if ((year % 4 == 0) && (mounth > 2)) amount_day++;

	for (int i = 0; i < mounth - 1; i++)
	{
		amount_day += month[i];
	}

	amount_day += day;

	rawtime += amount_day * 3600 * 24 - 1;
	str_time = *gmtime(&rawtime);
}
DateTime::DateTime()
{
	time_t rawtime;
	time(&rawtime);
	struct tm* kopy;
	kopy = &str_time;
	kopy = localtime(&rawtime);
	str_time = *kopy;
}

DateTime::DateTime(const DateTime& s)
{
	str_time = s.str_time;
}

std::string DateTime::getToday()
{
	const char* weekday[] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	const char* mounth[] = { "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };

	char output[100];
	if (str_time.tm_mday > 9)
	{
		output[0] = (str_time.tm_mday / 10 + '0');
		output[1] = ((str_time.tm_mday % 10) + '0');
	}
	else
	{
		output[0] = '0';
		output[1] = ((str_time.tm_mday % 10) + '0');
	}

	output[2] = ' ';

	int len = 0;
	int ind = 3;
	while (len < strlen(mounth[str_time.tm_mon]))
	{
		output[ind] = mounth[str_time.tm_mon][len];
		len++;
		ind++;
	}

	output[ind] = ' ';
	ind++;
	char year[10];

	itoa((str_time.tm_year + 1900), year, 10);

	len = 0;
	while (year[len] >= '0' && year[len] <= '9' && len < strlen(year))
	{
		output[ind] = year[len];
		len++;
		ind++;
	}
	output[ind] = ',';
	output[++ind] = ' ';
	ind++;

	len = 0;
	while (len < strlen(weekday[str_time.tm_wday]))
	{
		output[ind] = weekday[str_time.tm_wday][len];
		len++;
		ind++;
	}

	output[ind] = '\0';

	string str = string(output);
	return output;
}

std::string  DateTime::getYesterday()
{
	DateTime y_time;
	time_t time_y = mktime(&str_time);
	time_y -= 86400;
	y_time.str_time = *gmtime(&time_y);
	return y_time.getToday();
}

std::string  DateTime::getTomorrow()
{
	DateTime y_time;
	time_t time_y = mktime(&str_time);
	time_y += 86400;
	y_time.str_time = *gmtime(&time_y);
	return y_time.getToday();;
}

std::string  DateTime::getFuture(unsigned int N)
{
	DateTime y_time;
	time_t time_y = mktime(&str_time);
	time_y += 86400 * N;
	y_time.str_time = *gmtime(&time_y);
	return y_time.getToday();
}

std::string DateTime::getPast(unsigned int N)
{
	DateTime y_time;
	time_t time_y = mktime(&str_time);
	time_y -= 86400 * N;
	y_time.str_time = *gmtime(&time_y);
	return  y_time.getToday();
}

int DateTime::getDifference(DateTime& tim)
{
	time_t time_y = mktime(&str_time);
	time_t time_y2 = mktime(&tim.str_time);
	time_t diff = 0;
	int days = 0;
	if (time_y >= time_y2)
	{
		diff = time_y - time_y2;
		days = diff / 86400;
		cout << days << endl;
		return days;
	}
	else
	{
		diff = time_y2 - time_y;
		days = diff / 86400;
		cout << days << endl;
		return days;
	}

}