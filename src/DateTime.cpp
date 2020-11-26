#include "DateTime.h"
#include <time.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

double DAY = 3600 * 24;

DateTime::DateTime()
{
  time(&now);
  data = localtime(&now);
}


DateTime::DateTime(const int day, const int month, const int year)
{
  data->tm_mday = day;
  data->tm_mon = month -1;
  data->tm_year = year;
}

string DateTime::getToday()
{
	return makeDate(getSec());
}

string DateTime::getYesterday()
{
	return makeDate(getSec() - DAY);
}

string DateTime::getTomorrow()
{
	return makeDate(getSec() + DAY);
}

string DateTime::getFuture(unsigned int N)
{
	return makeDate(getSec() + N * DAY);
}

string DateTime::getPast(unsigned int N)
{
	return makeDate(getSec() - N * DAY);
}

unsigned int DateTime::getDifference(DateTime& D)
{
	return abs(getSec() - D.getSec()) / DAY;
}

string makeDate(time_t t)
{
  string months [] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
	string weekday[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
	tm* T = localtime(&t);
  string date = "";
  date = to_string(T->tm_mday) + " " + months[T->tm_mon] + " " + to_string(T->tm_year) + ", " + weekday[T->tm_wday];
	// date << setw(2) << setfill('0') << T->tm_mday << " " << months[T->tm_mon] << " " << 1900 + T->tm_year << ", " << weekday[T->tm_wday];
  return date;
}

time_t DateTime::getSec() {
	time_t t;
	time(&t);
	tm* T = localtime(&t);
	T->tm_year = data->tm_year;
	T->tm_mon = data->tm_mon;
	T->tm_mday = data->tm_mday;
	t = mktime(T);
	return t;
}
