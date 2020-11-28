#ifndef DATETIME_H
#define DATETIME_H

#include <iostream>
#include <ctime>
#include <string>

class DateTime
{
private:
    tm date;

public:
    DateTime();
    DateTime(int, int, int);
    DateTime(const DateTime &);
    std::string GetToday();
    std::string GetYesterday();
    std::string GetTomorrow();
    std::string getFuture(unsigned int n);
    std::string getPast(unsigned int n);
    unsigned int getDifference(DateTime &);
};

#endif