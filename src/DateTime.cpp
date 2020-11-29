#include "DateTime.h"

#include <vector>
#include <string>

namespace
{
	std::string timeToString(const std::time_t t)
	{
		std::vector<std::string> daysOfWeek{ "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
		std::vector<std::string> monthNames{ "january", "february", "march", "april", "may", "june", "july", "september", "october", "november", "december" };
		const auto tm = *std::localtime(&t);
		std::string date;
		date += (tm.tm_mday >= 10 ? "" : "0") + std::to_string(tm.tm_mday) + " ";
		date += monthNames[tm.tm_mon - 1] + " ";
		date += std::to_string(tm.tm_year + 1900) + ", ";
		date += daysOfWeek[tm.tm_wday];
		return date;
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
