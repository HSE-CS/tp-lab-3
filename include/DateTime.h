#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

class DateTime 
{
private:
    int day;
    int month;
    int year;

public:
    string getToday();
    string getTomorrow();
    string getFuture(unsigned int N);
    string getPast(unsigned int N);
    string getYesterday();
    int getDifference(DateTime& dt);

    DateTime(int day, int month, int year) 
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    DateTime() 
    {
        const time_t timer = time(nullptr);
        tm* ltm = localtime(&timer);

        day = ltm->tm_mday;
        month = 1 + ltm->tm_mon;
        year = 1900 + ltm->tm_year;
    }
};

#endif