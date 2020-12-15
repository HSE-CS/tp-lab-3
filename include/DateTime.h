//
// Created by stoja on 10.12.2020.
//

#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H
#include <ctime>
#include <string>

using namespace std;
class DateTime{
public:
    DateTime();

    DateTime(unsigned day, unsigned month, unsigned year);

    DateTime(DateTime const & object);

    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int);
    string getPast(unsigned int);
    unsigned getDifference(DateTime&);

private:
    tm dateTime;
    static string getDateTimeStr(tm);
};
#endif //TASK1_DATETIME_H
