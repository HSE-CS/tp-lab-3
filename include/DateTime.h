#pragma once
#include <cmath>
#include <ctime>
#include <string>

#ifndef DATETIME_H
#define DATETIME_H

class DateTime{
private:
    struct tm *time_x;
    time_t seconds;
    std::string toString(struct tm time13);
public:
    DateTime();
    DateTime(int day, int month, int year);
    DateTime(DateTime &datetime);

    struct tm getDayByDelta(long long N);

    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();

    std::string getFuture(unsigned int N);
    std::string getPast(unsigned int N);

    unsigned int getDifference(DateTime& datetime);
};

#endif // DATETIME_H
