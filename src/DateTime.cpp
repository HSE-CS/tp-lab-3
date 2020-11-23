#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<ctime>
#include "DateTime.h"

using namespace std;
string DateTime::getToday()
{
	const string days[] = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };
	const string months[] = { "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };
	string str;
	struct tm* struct_time;
	struct_time = localtime(&time_i);
	if (struct_time->tm_mday < 10)
		str += "0";
	str += to_string(struct_time->tm_mday);
	str += " ";
	str += (months[struct_time->tm_mon]);
	str += " ";
	str += to_string(struct_time->tm_year+1900);
	str += ", ";
	str += (days[struct_time->tm_wday-1]);
	str += "\0";
	//cout << str << endl;
	return str;


	//time_i = mktime(struct_time);
}
string DateTime::getYesterday()
{
	DateTime a(*this);
	a.time_i -= 24 * 60 * 60;
	return a.getToday();
};
string DateTime::getTomorrow()
{
	DateTime a(*this);
	a.time_i += 24 * 60 * 60;
	return a.getToday();
}
string DateTime::getFuture(unsigned int N)
{
	DateTime a(*this);
	a.time_i += N * 24 * 60 * 60;
	return a.getToday();
}
string DateTime::getPast(unsigned int N)
{
	DateTime a(*this);
	a.time_i -= N * 24 * 60 * 60;
	return a.getToday();
}
unsigned DateTime::getDifference(DateTime& a)
{
	unsigned difference = abs((this->time_i) - (a.time_i));
	return difference/(24*60*60);
}