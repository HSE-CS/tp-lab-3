#include "DateTime.h"
using namespace std;

DateTime::DateTime(size_t day, size_t month, size_t year)
{
    time_t onetime = time(nullptr);
    struct tm* timeinfo = localtime(&onetime);

    timeinfo->tm_mday = day;
    timeinfo->tm_mon = month - 1;
    timeinfo->tm_year = year - 1900;

    infotime = mktime(timeinfo);
}

DateTime::DateTime()
{
    infotime = time(nullptr);
}

DateTime::DateTime(DateTime& info)
{
    infotime = info.infotime;
}

string DateTime::getToday()
{
    char date[20];
    struct tm* info = localtime(&infotime);
    strftime(date, 20, "%d %b %Y %a", info);
    return date;
}

string DateTime::getYesterday()
{
    DateTime date;
    date.infotime -= (86400);
    return date.getToday();
}

string DateTime::getTomorrow()
{
    DateTime date;
    date.infotime += (86400);
    return date.getToday();
}

string DateTime::getFuture(unsigned int N)
{
    DateTime date;
    date.infotime += (86400) * (double)N;
    return date.getToday();
}

string DateTime::getPast(unsigned int N)
{
    DateTime date;
    date.infotime -= (86400) * (double)N;
    return date.getToday();
}

double DateTime::getDifference(DateTime& anotherdate)
{
    return abs(infotime - anotherdate.infotime) / (86400);
}

