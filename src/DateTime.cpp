#include "DateTime.h"

DateTime::DateTime()
{
	time_t today;
	time(&today);
	tm* temptimer = localtime(&today);
	this->data.tm_year = temptimer->tm_year;
	this->data.tm_mon = temptimer->tm_mon;
	this->data.tm_mday = temptimer->tm_mday;
	mktime(&(this->data));
}
DateTime::DateTime(int date, int mounth, int year)
{
	this->data.tm_year = year - 1900;
	this->data.tm_mday = date;
	this->data.tm_mon = mounth-1;
	mktime(&(this->data));
}
DateTime::DateTime(DateTime& from)
{
	this->data = from.data;
	mktime(&(this->data));
}

tm DateTime::getdata()
{
	return this->data;
}

std::string DateTime::getToday()
{
	char temp[100];
	tm data1 = this->data;
	strftime(temp, 80, "%d %B %Y, %A", &data1);
	std::string res;
	for (size_t i = 0; i < res.size(); i++) {
		if (res[i] >= 'A' && res[i] <= 'Z') res[i] += 'a' - 'A';
	}
	return res;
}
std::string DateTime::getYesterday()
{
	DateTime yesterday(this->data.tm_mday - 1, this->data.tm_mon + 1, this->data.tm_year + 1900);
	std::string res = yesterday.getToday();
	return res;
}
std::string DateTime::getTomorrow()
{
	DateTime tomorrow(this->data.tm_mday + 1, this->data.tm_mon + 1, this->data.tm_year + 1900);
	std::string res = tomorrow.getToday();
	return res;
}
std::string DateTime::getFuture(size_t N)
{
	DateTime future(this->data.tm_mday + N, this->data.tm_mon + 1, this->data.tm_year + 1900);
	std::string res = future.getToday();
	return res;
}
std::string DateTime::getPast(size_t N)
{
	DateTime tomorrow(this->data.tm_mday - N, this->data.tm_mon + 1, this->data.tm_year + 1900);
	std::string res = tomorrow.getToday();
	return res;
}
size_t DateTime::getDifference(DateTime& day2)
{
	tm data1 = this->data;
	time_t day_1 = mktime(&data1);
	tm data2 = day2.getdata();
	time_t day_2 = mktime(&data2);
	day_1 = difftime(day_1, day_2);
	return abs(int(day_1 / SECONDS_AT_DAY));
}


