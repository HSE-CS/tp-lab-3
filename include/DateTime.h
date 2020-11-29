//
// Created by Valera on 27.11.2020.
//

#ifndef UNTITLED1_DATETIME_H
#define UNTITLED1_DATETIME_H
#include <ctime>
#include <string>


class DateTime {
private:
    tm t;

public:
    DateTime(int day, int month, int year);

    DateTime();

    DateTime(const DateTime&);

    std::string getToday() const;

    std::string getYesterday();

    std::string getTomorrow();

    DateTime getFuture(unsigned int N);

    DateTime getPast(unsigned int N);

    int getDifference(DateTime&);

};

#endif //UNTITLED1_DATETIME_H
