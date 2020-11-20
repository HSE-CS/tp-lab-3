#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <cstring>
#include <cctype>

DateTime::DateTime(int day, int month, int year)
{
    date.tm_year = year - 1900;
    date.tm_mon = month - 1;
    date.tm_mday = day;
    date.tm_sec = 0;
    date.tm_min = 0;
    date.tm_hour = 0;
    mktime(&date);
}

DateTime::DateTime() 
{
    time_t curtime;
    time(&curtime);
    struct tm* info = localtime(&curtime);
    date = *info;
    mktime(&date);
}

DateTime::DateTime(const DateTime& obj) 
{
    date = obj.date;
}

string lower(char* str)
{
    string res = str;
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] >= 'A' && res[i] <= 'Z')
           res[i] = tolower(res[i]);
    }
    return res;
}

string DateTime::getToday() const
{ 
    char buf[80];
    strftime(buf, 80, "%d %B %Y, %A", &date);
    return lower(buf);
}

string DateTime::getYesterday() const
{
    return getPast(1);
}

string DateTime::getTomorrow() const
{
    return getFuture(1);
}

string DateTime::getFuture(unsigned int N) const
{
    tm curtime = date;
    curtime.tm_mday = curtime.tm_mday + N;
    mktime(&curtime);
    char buf[80];
    strftime(buf, 80, "%d %B %Y, %A", &curtime);
    return lower(buf);
}

string DateTime::getPast(unsigned int N) const
{
    tm curtime = date;
    curtime.tm_mday = curtime.tm_mday - N;
    mktime(&curtime);
    char buf[80];
    strftime(buf, 80, "%d %B %Y, %A", &curtime);
    return lower(buf);
}

int DateTime::getDifference(DateTime& time)
{
    int diff = abs(mktime(&time.date) - mktime(&date));
    return int(diff / (24 * 60 * 60));
}
