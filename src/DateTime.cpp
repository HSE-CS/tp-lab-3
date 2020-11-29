#include "DateTime.h"

namespace
{
	std::string timeToString(const std::time_t t)
	{
		char buf[32];
		std::strftime(buf, 256, "%d.%m.%Y (%a)", std::localtime(&t));
		return std::string(buf);
	}
}

DateTime::DateTime()
{
	dateTime = std::time(nullptr);
	std::tm tm = *std::localtime(&dateTime);
	tm.tm_hour = tm.tm_min = tm.tm_sec = 0;
	dateTime = std::mktime(&tm);
}

DateTime::DateTime(const int day, const int month, const int year)
{
	std::tm tm;
	tm.tm_year = year - 1900;
	tm.tm_mon = month - 1;
	tm.tm_mday = day;
	tm.tm_hour = tm.tm_min = tm.tm_sec = 0;
	dateTime = std::mktime(&tm);
}

DateTime::DateTime(const DateTime& other) : dateTime(other.dateTime)
{
}

std::string DateTime::getToday() const
{
	return timeToString(dateTime);
}

std::string DateTime::getYesterday() const
{
	std::tm tm = *std::localtime(&dateTime);
	tm.tm_mday -= 1;
	const auto x = std::mktime(&tm);
	return timeToString(x);
}

std::string DateTime::getTomorrow() const
{
	std::tm tm = *std::localtime(&dateTime);
	tm.tm_mday += 1;
	const auto x = std::mktime(&tm);
	return timeToString(x);
}

namespace
{
	DateTime offsetDate(const time_t t, const long N)
	{
		std::tm tm = *std::localtime(&t);
		tm.tm_mday += N;
		std::mktime(&tm);
		return { tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900 };
	}
}

DateTime DateTime::getFuture(unsigned int N) const
{
	return offsetDate(dateTime, N);
}

DateTime DateTime::getPast(unsigned int N) const
{
	return offsetDate(dateTime, -N);
}

int DateTime::getDifference(const DateTime& other) const
{
	const auto diff = dateTime - other.dateTime;
	return std::difftime(dateTime, other.dateTime) / (60 * 60 * 24);
}
