//
// Created by Алексей Трутнев on 16.11.2020.
//

#ifndef LAB3TEST_DATETIME_H
#define LAB3TEST_DATETIME_H

#include <iostream>
#include <ctime>
#include <string>

class DateTime {
private:
    struct tm* time_info;
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
         time(nullptr);
         time_info = localtime(&_timer);
        mktime(time_info);
     }
    explicit DateTime(const DateTime& previous_DT){
        time_t previous_time = mktime(previous_DT.time_info);
        time_info = localtime(&previous_time);
        mktime(time_info);
    }
    explicit DateTime(size_t day,size_t month,size_t year){
        time_t _timer;
        time(nullptr);
        time_info = localtime(&_timer);
        time_info->tm_year = size_t(year - 1900);
        time_info->tm_mon = size_t(month - 1);
        time_info->tm_mday = day;
        mktime(time_info);
     }
};


#endif //LAB3TEST_DATETIME_H
