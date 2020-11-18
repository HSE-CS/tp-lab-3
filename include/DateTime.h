#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H
#include "DateTime.h"

#include <ctime>
#include <string>

#define _CRT_SECURE_NO_WARNINGS

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;
#include <algorithm>
#include <ctime>
#include <string>

class DateTime
{
private:
    unsigned day;
    unsigned month;
    unsigned year;
    string stroka;

public:

    DateTime(unsigned, unsigned, unsigned);
    DateTime();
    DateTime(DateTime&);

    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(unsigned int N);
    std::string getPast(unsigned int N);
    unsigned getDifference(DateTime& new_date);
};

#endif //TASK1_DATETIME_H