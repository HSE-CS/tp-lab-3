#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <ctime>
#include <string>
#include <cstring>
#include <algorithm>


using namespace std;

class DateTime {
private:
    tm dateTime;
    
public:
    DateTime(int day, int month, int year);
    DateTime();
    DateTime(const DateTime &date);

    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int N);
    string getPast(unsigned int N);
    int getDifference(DateTime&);
};

#endif //TASK1_DATETIME_H
