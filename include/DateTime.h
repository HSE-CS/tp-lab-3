//
// Created by freeb on 16.11.2020.
//

#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <ctime>
#include <string>


class DateTime {
private:
    tm dt;

public:
    DateTime(int _day, int _month, int _year);

    DateTime();

    DateTime(const DateTime&);

    std::string getToday() const;

    std::string getYesterday();

    std::string getTomorrow();

    DateTime getFuture(unsigned int N);

    DateTime getPast(unsigned int N);

    int getDifference(DateTime&);

};


#endif //TASK1_DATETIME_H
