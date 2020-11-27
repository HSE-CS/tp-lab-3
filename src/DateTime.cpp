#include "DateTime.h"
#include <ctime>
#include <string>

DateTime::DateTime(int d, int m, int y){
    data.tm_mday = d;
    data.tm_mon = m-1;
    data.tm_year = y-1900;
    data.tm_hour = 0;
    data.tm_min = 0;
    data.tm_sec = 0;
    mktime(&data);
}

DateTime::DateTime(){
    time_t tt;
    time(&tt);
    data = *localtime(&tt);
}

DateTime::DateTime(DateTime& stat){
    this->data = stat.data;
}

std::string data_to_str(struct tm data){
    std::string str = {};
    if (std::to_string(data.tm_mday).length() == 1)
        str = '0' + std::to_string(data.tm_mday) + ' ';
    else
        str = std::to_string(data.tm_mday) + ' ';
    const std::string months[] = {"january", "february", "march", "april", "may", "june", "july", "august","september", "october", "november", "december"};
    str += months[data.tm_mon] + ' ' + std::to_string(data.tm_year + 1900) + ", ";
    const std::string weekdays[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    str += weekdays[data.tm_wday];
    return str;
}

std::string DateTime::getToday(){
    return data_to_str(data);
}

std::string DateTime::getYesterday(){
    return getPast(1);
}

std::string DateTime::getTomorrow(){
    return getFuture(1);
}

std::string DateTime::getFuture(unsigned int N){
    struct tm new_data = data;
    new_data.tm_mday += N;
    mktime(&new_data);
    return data_to_str(new_data);
}

std::string DateTime::getPast(unsigned int N){
    struct tm new_data = data;
    new_data.tm_mday -= N;
    mktime(&new_data);
    return data_to_str(new_data);
}

int DateTime::getDifference(DateTime& stat){
    time_t current = mktime(&data);
    time_t target = mktime(&stat.data);
    return int(abs(target - current) / (3600 * 24));
}