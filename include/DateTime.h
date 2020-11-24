#ifndef DATATIME_H
#define DATATIME_H

#include <string>
#include <ctime>
#include <cstring>

class DateTime
{
private:
    time_t td;
public:
    DateTime(int day, int month, int year);
    DateTime();
    DateTime(const DateTime&);
    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getPast(int);
    std::string getFuture(int);
    int getDifference(DateTime&);
};

#endif