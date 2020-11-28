#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <string>
#include <ctime>
using namespace std;

class DateTime
{
private:
    time_t infotime;
public:
    DateTime(size_t day, size_t month, size_t year);
    DateTime();
    DateTime(DateTime&);
    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int N);
    string getPast(unsigned int N);
    double getDifference(DateTime&);
};

#endif //TASK1_DATETIME_H
