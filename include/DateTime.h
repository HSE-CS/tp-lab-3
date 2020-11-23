#pragma once

#include <string>
#include <ctime>

using namespace std;

class DateTime {
private:
    time_t t;
public:
    DateTime();
    DateTime(const DateTime &);
    DateTime(int, int, int);
    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int);
    string getPast(unsigned int);
    int getDifference(DateTime&);
};

