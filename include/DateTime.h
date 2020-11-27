#ifndef DateTime_h
#define DateTime_h

#include <cstring>
#include <iostream>

std::string getMonth(int month);
std::string getWeekday(int day, int month, int year);

class DateTime {
private:
    int day;
    int month;
    int year;
public:
    DateTime(int day, int month, int year);
    DateTime();
    DateTime(const DateTime&);
    std::string getToday() const;
    std::string getYesterday() const;
    std::string getTomorrow() const;
    std::string getFuture(unsigned int N) const;
    std::string getPast(unsigned int N) const;
    unsigned int getDifference(DateTime&) const;
};

#endif
