#pragma once

#include <string>
#include <ctime>
#include <iostream>

using namespace std;

class DateTime
{
private:
    time_t seconds;
public:
    string getToday();

    string getYesterday();

    string getTomorrow();

    string getFuture(unsigned int N);

    string getPast(unsigned int N);

    int getDifference(DateTime &);

    DateTime()
    {
        seconds = time(nullptr);
    }

    DateTime(int d, int m, int y)
    {
        seconds = time(nullptr);
        tm *t = localtime(&seconds);
        t->tm_mday = d;
        t->tm_mon = m - 1;
        t->tm_year = y - 1900;
        seconds = mktime(t);
    }

    DateTime(DateTime &CopyDate)
    {
        seconds = CopyDate.seconds;
    }
};