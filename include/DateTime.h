//
// Created by vladimir on 20.12.2020.
//

#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <string>
#include <ctime>
#include <cstring>

class DateTime {
private:
    time_t new_time;

public:
    DateTime();
    DateTime(unsigned day, unsigned month, unsigned year);
    DateTime(DateTime&);

    std::string getToday();
    std::string getYesterday() const;
    std::string getTomorrow() const;
    std::string getFuture(unsigned int N) const;
    std::string getPast(unsigned int N) const;
    int getDifference(DateTime&) const;
};
#endif //TASK1_DATETIME_H
