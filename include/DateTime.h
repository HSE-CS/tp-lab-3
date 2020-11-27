//
// Created by arkly on 25.11.2020.
//

#include <ctime>
#include <cstring>
#include <iostream>
#ifndef LAB3_DATETIME_H
#define LAB3_DATETIME_H
class DateTime{
private:
    int day;
    int month;
    int year;
    int wday;
public:
    DateTime(int _day, int _month, int _year);
    DateTime();
    DateTime(const DateTime &_datetime);

    std::string getToday() const;
    std::string getYesterday() const;
    std::string getTomorrow() const;
    std::string getFuture(unsigned int N);
    std::string getPast(unsigned int N);
    int getDifference(DateTime& _date);
};
#endif //LAB3_DATETIME_H
