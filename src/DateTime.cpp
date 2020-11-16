//
// Created by Алексей Трутнев on 16.11.2020.
//

#include "DateTime.h"
#include<ctime>
#include<cstring>
#include <algorithm>
#include <cmath>
using namespace std;


string DateTime::getToday(){
    char buffer [80];
    strftime (buffer,80,"%d %B %Y, %A", this->time_info);
    std::string s = buffer;
    return s;
}

string DateTime::getFuture(unsigned int N){
    struct tm* future_day;
    time_t buff;
    buff = mktime(time_info);
    buff += N * 86400;
    future_day = localtime(&buff);
    char buffer [80];
    strftime (buffer, 80, "%d %B %Y, %A", future_day);
    std::string s = buffer;
    return s;
}

string DateTime::getPast(unsigned int N){
    struct tm* previous_day;
    time_t buff;
    buff = mktime(time_info);
    buff -= N * 86400;
    previous_day = localtime(&buff);
    char buffer [80];
    strftime (buffer, 80, "%d %B %Y, %A", previous_day);
    std::string s = buffer;
    return s;
}

string DateTime::getYesterday(){
    return getPast(1);
}

string DateTime::getTomorrow(){
    return getFuture(1);
}



