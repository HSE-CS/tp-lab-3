#include "DateTime.h"
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<ctime>


using namespace std;


string DateTime::getToday()
{
	const string days[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	const string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
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
	
	return str;


	
}

string DateTime::getYesterday()
{
	DateTime a(*this);
	a.time_i -= 86400;
	return a.getToday();
}

string DateTime::getTomorrow()
{
	DateTime a(*this);
	a.time_i += 86400;
	return a.getToday();
}

string DateTime::getFuture(unsigned int N)
{
	DateTime a(*this);
	a.time_i += N * 86400;
	return a.getToday();
}

string DateTime::getPast(unsigned int N)
{
	DateTime a(*this);
	a.time_i -= N * 86400;
	return a.getToday();
}

unsigned DateTime::getDifference(DateTime& t)
{
	unsigned difference = abs((this->time_i) - (t.time_i));
	return difference/(86400);
}