#ifndef DATETIME_H
#define DATETIME_H

#include <ctime>
#include <string>

using namespace std;

class DateTime {
private:
    tm dt;
public:
    DateTime(int _day, int _month, int _year);
    DateTime();
    DateTime(const DateTime&);
    string getToday() const;
    string getYesterday();
    string getTomorrow();
    DateTime getFuture(unsigned int N);
    DateTime getPast(unsigned int N);
    int getDifference(DateTime&);
};


#endif