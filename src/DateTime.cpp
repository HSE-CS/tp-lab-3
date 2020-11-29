#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <time.h>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

DateTime::DateTime(int day, int month, int year)
{
    struct tm* tmp = new tm;
    memset(tmp, 0, sizeof(tm));
    tmp->tm_mday = day;
    tmp->tm_mon = month - 1;
    tmp->tm_year = year - 1900;
    this->td = mktime(tmp);
}

DateTime::DateTime()
{
    this->td = time(NULL);
}

DateTime::DateTime(const DateTime& b)
{
    this->td = b.td;
}

std::string DateTime::getToday()
{
    char time[50];
    strftime(time, 50, "%d %b %Y, %a", gmtime(&(this->td)));
    std::string tmp;
    tmp.append(time);
    return tmp;
}

std::string DateTime::getYesterday()
{
    time_t yesterday = this->td - 60 * 60 * 24;
    char time[50];
    strftime(time, 50, "%d %b %Y, %a", gmtime(&(yesterday)));
    std::string tmp;
    tmp.append(time);
    return tmp;
}

std::string DateTime::getTomorrow()
{
    time_t tomorrow = this->td + 60 * 60 * 24;
    char time[50];
    strftime(time, 50, "%d %b %Y, %a", gmtime(&(tomorrow)));
    std::string tmp;
    tmp.append(time);
    return tmp;
}

std::string DateTime::getPast(int n)
{
    time_t yesterday = this->td - 60 * 60 * 24 * n;
    char time[50];
    strftime(time, 50, "%d %b %Y, %a", gmtime(&(yesterday)));
    std::string tmp;
    tmp.append(time);
    return tmp;
}

std::string DateTime::getFuture(int n)
{
    time_t tomorrow = this->td + 60 * 60 * 24 * n;
    char time[50];
    strftime(time, 50, "%d %b %Y, %a", gmtime(&(tomorrow)));
    std::string tmp;
    tmp.append(time);
    return tmp;
}

int DateTime::getDifference(DateTime& b)
{
    time_t tmp = abs(this->td - b.td);
    return (int)(tmp / 60 / 60 / 24);
}
