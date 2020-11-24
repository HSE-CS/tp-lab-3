//
// Created by Данил on 24.11.2020.
//

#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H


#include <ctime>

#include <iostream>
#include <map>

template<typename T>
void print(T t) {
    std::cout << t << '\n';
}

// {31, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class DateTime {

private:
    int year;
    int month;
    int monthDay;
    int weekDay;
    int rawDateDay;

    int *monthSize;

public:
    DateTime();

    explicit DateTime(int newDay, int newMonth, int newYear);

    explicit DateTime(const DateTime *other);

    std::string getToday();

    std::string repr(const DateTime *date);

    std::string getYesterday();

    std::string getTomorrow();

    DateTime getFuture(unsigned int n);

    DateTime getPast(unsigned int n);

    int getDifference(DateTime &other);

    bool isLeap();

    int getRawDay(int month, int day);

    void reEstablishByRawDay(int rawDay, int &array);

};


#endif //TASK1_DATETIME_H
