#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H
#include <iostream>

using namespace std;

class DateTime{
private:
    time_t timeInf;
public:
    DateTime(size_t day, size_t month, size_t year){
        timeInf = time(nullptr);
        struct tm *struct_time = localtime(&timeInf);

        struct_time->tm_mday = day;
        struct_time->tm_mon = month - 1;
        struct_time->tm_year = year - 1900;
        timeInf = mktime(struct_time);
    }

    DateTime() {
        timeInf = time(nullptr);
    }

    DateTime(DateTime &oldDate){
        timeInf = oldDate.timeInf;
    }

    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int N);
    string getPast(unsigned int N);
    double getDifference(DateTime&);
};

#endif //TASK1_DATETIME_H
