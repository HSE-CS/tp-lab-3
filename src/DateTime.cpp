

#define _CRT_SECURE_NO_WARNINGS	

#include "DateTime.h"

#define SIZE 28

std::string convert2String(int day, int month, int year)
{
	tm in = { 0, 0, 0, day, month - 1, year - 1900 };
	time_t tmp = mktime(&in);
	tm* out = localtime(&tmp);

	char buf[SIZE] = { 0 };

	strftime(buf, SIZE, "%d %B %Y, %A", out);

	std::string result = buf;

	for (auto& letter : result) {
		letter = tolower(letter);
	}
	return result;

}

DateTime::DateTime(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

DateTime::DateTime()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);

	this->day = ltm->tm_mday;
	this->month = 1 + ltm->tm_mon;
	this->year = 1970 + ltm->tm_year;
}

DateTime::DateTime(DateTime& dt)
{
	this->day = dt.day;
	this->month = dt.month;
	this->year = dt.year;
}

std::string DateTime::getToday()
{
	return convert2String(this->day, this->month, this->year);
}

std::string DateTime::getYesterday()
{
	return getPast(1);
}

std::string DateTime::getTomorrow()
{
	return getFuture(1);
}

std::string DateTime::getFuture(unsigned int N)
{
	return convert2String(this->day + N, this->month, this->year);
}

std::string DateTime::getPast(unsigned int N)
{
	return convert2String(this->day - N, this->month, this->year);
}

int DateTime::getDifference(DateTime& dt)
{
	tm tm_f_date = { 0, 0, 0, this->day, this->month - 1, this->year - 1900 };
	time_t f_date = mktime(&tm_f_date);
	
	tm tm_s_date = { 0, 0, 0, dt.day, dt.month - 1, dt.year - 1900 };
	time_t s_date = mktime(&tm_s_date);

	return abs(f_date - s_date) / (60 * 60 * 24);;
}
