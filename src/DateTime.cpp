#include "DateTime.h"
#include <iostream>

const std::vector<std::string> DateTime::WEEKDAYS{"sunday", "monday", "tuesday",
                                                "wednesday", "thursday",
                                                "friday", "saturday"};

const std::vector<std::string> DateTime::MONTHS{"january", "february", "march",
                                                "april", "may", "june", "july",
                                                "august", "september", "october",
                                                "november", "december"};

DateTime::DateTime(unsigned int day, unsigned int month, unsigned int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
    std::time_t seconds = std::time(0);
	struct std::tm* structTime = localtime(&seconds);
    structTime->tm_mday = day;
    structTime->tm_mon = month - 1;
    structTime->tm_year = year - STARTYEAR;
    this->seconds = std::mktime(structTime);
}

DateTime::DateTime()
{
    this->seconds = std::time(0);
    struct std::tm *structTime = std::localtime(&seconds);
    this->day = (unsigned int)(structTime->tm_mday);
    this->month = (unsigned int)(structTime->tm_mon + 1);
    this->year = (unsigned int)(structTime->tm_year + STARTYEAR);
}

DateTime::DateTime(DateTime &dateTime): day(dateTime.day), month(dateTime.month), year(dateTime.year), seconds(dateTime.seconds) {};

DateTime::DateTime(std::time_t seconds)
{
    this->seconds = seconds;
    struct std::tm *structTime = std::localtime(&seconds);
    this->day = (unsigned int)(structTime->tm_mday);
    this->month = (unsigned int)(structTime->tm_mon + 1);
    this->year = (unsigned int)(structTime->tm_year + STARTYEAR);

}

std::string DateTime::getToday()
{
    return getDayByDifference(0);
}
std::string DateTime::getYesterday()
{
    return getDayByDifference(-1);
}

std::string DateTime::getTomorrow()
{
    return getDayByDifference(1);
}

std::string DateTime::getPast(unsigned int n)
{
    return getDayByDifference(-n);
}

std::string DateTime::getFuture(unsigned int n)
{
    return getDayByDifference(n);
}

unsigned int DateTime::getDifference(DateTime &dateTime)
{
    return abs(seconds - dateTime.getSeconds()) / SECPERDAY;
}

std::string DateTime::getDayByDifference(int n)
{
    std::time_t newSeconds = seconds + n * SECPERDAY;
    DateTime dateTime(newSeconds);
    return dateTime.getFullNameOfDay();
}

std::string DateTime::getDayOfWeek()
{
    struct std::tm *structTime = std::localtime(&seconds);
    return WEEKDAYS[structTime->tm_wday];
}

std::string DateTime::getFullNameOfDay()
{
    std::ostringstream fullName;
    fullName << std::setw(2) << std::setfill('0') << day << " " << MONTHS[month - 1] << " " << year << ", " << getDayOfWeek();
    return fullName.str();
}

const std::time_t DateTime::getSeconds() const
{
	return seconds;
}


