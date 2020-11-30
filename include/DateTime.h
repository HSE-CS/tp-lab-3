//
// Created by jmax on 30.11.2020.
//

#ifndef LAB_3_DATETIME_H
#define LAB_3_DATETIME_H
#include <ctime>
#include <string>

class DateTime{
private:
    tm dateTime;

    static std::string getDateTimeString(tm);
public:
    DateTime(){
        time_t currentTime;
        time(&currentTime);
        dateTime = *(localtime(&currentTime));
        mktime(&dateTime);
    }

    DateTime(unsigned day, unsigned month, unsigned year) {
        dateTime.tm_mday = day;
        dateTime.tm_mon = month - 1;
        dateTime.tm_year = year - 1900;
        dateTime.tm_hour = 0;
        dateTime.tm_min = 0;
        dateTime.tm_sec = 0;
        mktime(&dateTime);
    }

    DateTime(DateTime const &obj) {
        dateTime = obj.dateTime;
    }

    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(unsigned int);
    std::string getPast(unsigned int);
    unsigned getDifference(DateTime&);
};
#endif //LAB_3_DATETIME_H
