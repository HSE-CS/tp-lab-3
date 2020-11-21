//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>

#include "DateTime.h"

#include <iostream>
#include <cstdlib>
#include <string>

string DateTime::getToday(){
    string time_str;
    struct tm* time_struct = localtime(&(this->current_time));
    
    unsigned int day = time_struct->tm_mday,
    month = time_struct->tm_mon,
    year = time_struct->tm_year + 1900,
    week_day = time_struct->tm_wday;
    
    if(day < 10)
        time_str += '0';
    time_str += to_string(day) + ' ';

    time_str += this->month_str[month];
    
    time_str += " " + to_string(year) + ", ";
    
    time_str += this->week_str[week_day];
    
    return time_str;
}

string DateTime::getYesterday(){
    DateTime yesterday(*this);
    yesterday.current_time -= 86400;
    return yesterday.getToday();
}

string DateTime::getTomorrow()
{
    DateTime tomorrow(*this);
    tomorrow.current_time += 86400;
    return tomorrow.getToday();
}

string DateTime::getFuture(unsigned int days) {
    DateTime future_day(*this);
    future_day.current_time += 86400 * days;
    return future_day.getToday();
}

string DateTime::getPast(unsigned int days) {
    DateTime past_day(*this);
    past_day.current_time -= 86400 * days;
    return past_day.getToday();
}

unsigned int DateTime::getDifference(DateTime& dt)
{
//    return abs((int)((difftime(this->current_time, dt.current_time)) / 86400));
    unsigned long int dif = abs(current_time - dt.current_time);
    unsigned int days = dif / 86400;
    return days;
}

