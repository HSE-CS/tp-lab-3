//
// Created by Алексей Трутнев on 16.11.2020.
//

#include "DateTime.h"
#include <ctime>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;


string DateTime::getToday(){
    char buffer [80];
    strftime(buffer,80,"%d %B %Y, %A", &time_info);
    return std::string (buffer);
}

string DateTime::getFuture(unsigned int N){
    DateTime future_time;
    future_time.time_info = time_info;
    future_time.time_info.tm_mday = future_time.time_info.tm_mday + N;
    mktime(&future_time.time_info);
    return future_time.getToday();
}

string DateTime::getPast(unsigned int N){
    DateTime future_time;
    future_time.time_info = time_info;
    future_time.time_info.tm_mday = future_time.time_info.tm_mday - N;
    mktime(&future_time.time_info);
    return future_time.getToday();
}

string DateTime::getYesterday(){
    return getPast(1);
}

string DateTime::getTomorrow(){
    return getFuture(1);
}

time_t DateTime::getDifference(DateTime& data){
    if (mktime(&time_info) >= mktime(&data.time_info))
        return abs(int(difftime(mktime(&time_info), mktime(&data.time_info)) / 86400));
    else
        return abs(int(difftime(mktime(&time_info), mktime(&data.time_info)) / 86400)) + 1;
}
