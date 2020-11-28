#include "DateTime.h"

string DateTime::getToday()
{
	string days[7] = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };
	string months[12] = { "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };
	string str;
	struct tm* TIME;
	TIME = localtime(&_time);
	if (TIME->tm_mday < 10)
		str =str+ "0";
	str =str + to_string(TIME->tm_mday)+ " " + (months[TIME->tm_mon])+ " " + to_string(TIME->tm_year + 1900)+ ", " + (days[TIME->tm_wday - 1]);
	return str;
}
string DateTime::getYesterday()
{
	DateTime Yesterday(*this);
	Yesterday._time = Yesterday._time- 86400;//prev. day
	return Yesterday.getToday();
};
string DateTime::getTomorrow()
{
	DateTime Tomorrow(*this);
	Tomorrow._time = Tomorrow._time + 86400;//next day
	return Tomorrow.getToday();
}
string DateTime::getFuture(unsigned int N)
{
	DateTime Future(*this);
	Future._time = Future._time+ N * 86400;//next N day
	return Future.getToday();
}
string DateTime::getPast(unsigned int N)
{
	DateTime Past(*this);
	Past._time = Past._time- N * 86400;//prev. N day
	return Past.getToday();
}
unsigned DateTime::getDifference(DateTime& compete)
{
	int difference = abs((this->_time) - (compete._time));
	int correct = difference / 86400;
	return correct;
}