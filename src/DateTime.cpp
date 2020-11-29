#include "../include/DateTime.h"
#include <ctime>
#include <string>

std::string DateTime::getToday() {
    return ((time_struct.tm_mday < 10) ? "0":"") + std::to_string(time_struct.tm_mday) + " "+ month[time_struct.tm_mon] + " " + std::to_string(time_struct.tm_year + 1900) + ", " + weekday[time_struct.tm_wday];
}

std::string DateTime::getYesterday() {
    std::time_t time_temp = std::mktime(&time_struct);
    time_temp -= (24*60*60);
    const std::tm * time_out = std::localtime(&time_temp);
    return ((time_struct.tm_mday < 10) ? "0":"") + std::to_string(time_out->tm_mday) + " "+ month[time_out->tm_mon] + " " + std::to_string(time_out->tm_year + 1900) + ", " + weekday[time_out->tm_wday];
}

std::string DateTime::getTomorrow() {
    std::time_t time_temp = std::mktime(&time_struct);
    time_temp += (24*60*60);
    const std::tm * time_out = std::localtime(&time_temp);
    return ((time_struct.tm_mday < 10) ? "0":"") + std::to_string(time_out->tm_mday) + " "+ month[time_out->tm_mon] + " " + std::to_string(time_out->tm_year + 1900) + ", " + weekday[time_out->tm_wday];
}

std::string DateTime::getFuture(unsigned int N) {
    std::time_t time_temp = std::mktime(&time_struct);
    time_temp += (24*60*60) * N;
    const std::tm * time_out = std::localtime(&time_temp);
    return ((time_struct.tm_mday < 10) ? "0":"") + std::to_string(time_out->tm_mday) + " "+ month[time_out->tm_mon] + " " + std::to_string(time_out->tm_year + 1900) + ", " + weekday[time_out->tm_wday];
}

std::string DateTime::getPast(unsigned int N) {
    std::time_t time_temp = std::mktime(&time_struct);
    time_temp -= N * (24*60*60);
    const std::tm * time_out = std::localtime(&time_temp);
    return ((time_struct.tm_mday < 10) ? "0":"") + std::to_string(time_out->tm_mday) + " "+ month[time_out->tm_mon] + " " + std::to_string(time_out->tm_year + 1900) + ", " + weekday[time_out->tm_wday];
}

int DateTime::getDifference(DateTime& dt2) { 
    const int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    long int n1 = time_struct.tm_year * 365 + time_struct.tm_mday;
    for (int i = 0; i < time_struct.tm_mon - 1; i++)
        n1 += monthDays[i];

    int years = time_struct.tm_year;
    if (time_struct.tm_mon <= 2)
        years--;
 
    n1 +=  years / 4 - years / 100 + years / 400;
    
 
 
    long int n2 = dt2.time_struct.tm_year * 365 + dt2.time_struct.tm_mday;
    for (int i = 0; i < dt2.time_struct.tm_mon - 1; i++)
        n2 += monthDays[i];
    years = time_struct.tm_year;
    if (dt2.time_struct.tm_mon <= 2)
        years--;
 
    n2 +=  years / 4 - years / 100 + years / 400;

    return (n2 - n1);
}