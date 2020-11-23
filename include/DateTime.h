//
// Created by Алексей Трутнев on 16.11.2020.
//

#ifndef LAB3TEST_DATETIME_H
#define LAB3TEST_DATETIME_H

#include <iostream>
#include <ctime>
#include <string>
#include<time.h>

class DateTime {
private:
    struct tm time_info{};
public:
    time_t getDifference(DateTime&);
    std::string  getToday();
    std::string  getYesterday();
    std::string  getTomorrow();
    std::string  getFuture(unsigned int);
    std::string  getPast(unsigned int);
//  Constructors
    DateTime(){    // -> default initialisation
        time_t _timer;
        time(&_timer);
        tm* current_time = localtime(&_timer);
        this->time_info.tm_year = current_time->tm_year;
        this->time_info.tm_mon = current_time->tm_mon;
        this->time_info.tm_mday = current_time->tm_mday;
        mktime(&time_info);
     }
     DateTime(const DateTime& previous_DT){
        this->time_info = previous_DT.time_info;
        this->time_info.tm_year = previous_DT.time_info.tm_year;
        this->time_info.tm_mon = previous_DT.time_info.tm_mon;
        this->time_info.tm_mday = previous_DT.time_info.tm_mday;
        mktime(&time_info);
    }
    explicit DateTime(int _day, int _month, int _year){
        this->time_info = tm{0, 0, 0, _day, _month-1, _year-1900};
    }
};


#endif //LAB3TEST_DATETIME_H
