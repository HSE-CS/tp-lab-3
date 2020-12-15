#include <typeinfo>
#include <cstring>
#include <iostream>
using namespace std;

class DateTime{
private:
    time_t raw_time;
public:
    string getToday();

    string getYesterday();

    string getTomorrow();

    string getPast(unsigned int);

    string getFuture(unsigned int);

    unsigned int getDifference(DateTime &);

    DateTime(int dayValue, int monthValue, int yearValue) {
        raw_time = time(nullptr);
        struct tm *struct_time = localtime(&raw_time);
        struct_time->tm_mday = dayValue;
        struct_time->tm_mon = monthValue - 1;
        struct_time->tm_year = yearValue - 1900;
        raw_time = mktime(struct_time);
    }

    DateTime() {
        raw_time = time(nullptr);
    }

    DateTime(DateTime &oldDate) {
        raw_time = oldDate.raw_time;
    }
};