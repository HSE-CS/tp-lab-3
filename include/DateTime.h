//
// Created by victor on 25.11.2020.
//

#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H
#include <ctime>
#include "string"
class DateTime
{
private:
    int day = 0;
    int month = 0;
    int year = 0;

public:
    DateTime(int day_, int month_, int year_);
    DateTime(const DateTime &datetime);
    DateTime();

    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(unsigned int N);
    std::string getPast(unsigned int N);
    int getDifference(DateTime& datetime);

};
#endif //TASK1_DATETIME_H
