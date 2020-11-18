#ifndef DATATIME_H
#define DATATIME_H

#include <algorithm>
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <cstring>

class DateTime
{
private:
    std::string dateInStr;
    unsigned day;
    unsigned month;
    unsigned year;

public:
    //constructors
    DateTime(unsigned, unsigned, unsigned);
    DateTime();
    DateTime(DateTime &);

    //methods
    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(unsigned int N);
    std::string getPast(unsigned int N);
    double getDifference(DateTime&);


};

#endif