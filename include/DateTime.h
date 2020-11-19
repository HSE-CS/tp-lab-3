//
//  task1.hpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#ifndef DateTime_h
#define DateTime_h

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class DateTime{
private:
    time_t current_time;
    const char* week_str[7] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
    const char* month_str[12] = { "january", "february", "march", "april", "may", "june",
                                "july", "august", "september","october", "november", "december" };
public:
    DateTime(){
        this->current_time = time(nullptr);
    }
    
    DateTime(DateTime& dt){
        this->current_time = dt.current_time;
    }
    
    DateTime(unsigned int day, unsigned int month, unsigned int year){
        struct tm* builded_time = localtime(&(this->current_time));
        builded_time->tm_mday = day;
        builded_time->tm_mon = month - 1;
        builded_time->tm_year = year - 1900;
        this->current_time = mktime(builded_time);
    }
    
    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int);
    string getPast(unsigned int);
    int getDifference(DateTime&);
};

#endif
