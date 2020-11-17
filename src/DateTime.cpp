//
// Created by freeb on 16.11.2020.
//

#include "DateTime.h"

DateTime::DateTime(int _day, int _month, int _year){
    dt = tm{0, 0, 0, _day, _month-1, _year-1900};
    mktime(&dt);
}

DateTime::DateTime(){
    time_t raw_time;
    tm * timeinfo;

    time (&raw_time);
    timeinfo = localtime (&raw_time);
    dt.tm_mday = timeinfo->tm_mday;
    dt.tm_mon = timeinfo->tm_mon;
    dt.tm_year = timeinfo->tm_year;
    mktime(&dt);
}

DateTime::DateTime(const DateTime& dateTime) : dt(dateTime.dt){};

std::string DateTime::getToday() const{
    std::string buffer;
    if (dt.tm_mday < 10) {
        buffer = "0";
        buffer += (char) (dt.tm_mday + '0');
    } else {
        buffer += (char) (dt.tm_mday / 10 + '0');
        buffer += (char) (dt.tm_mday % 10 + '0');
    }

    buffer += ' ';

    switch (dt.tm_mon) {
        case 0: buffer += "january";
            break;
        case 1: buffer += "february";
            break;
        case 2: buffer += "march";
            break;
        case 3: buffer += "april";
            break;
        case 4: buffer += "may";
            break;
        case 5: buffer += "june";
            break;
        case 6: buffer += "july";
            break;
        case 7: buffer += "august";
            break;
        case 8: buffer += "september";
            break;
        case 9: buffer += "october";
            break;
        case 10: buffer += "november";
            break;
        case 11: buffer += "december";
    }

    buffer += ' ';
    int year = 1900 + dt.tm_year;
    buffer += (char) (year / 1000 + '0');
    buffer += (char) (year / 100 % 10 + '0');
    buffer += (char) (year/ 10 % 10 + '0');
    buffer += (char) (year % 10 + '0');

    buffer += ", ";

    switch (dt.tm_wday) {
        case 0: buffer += "sunday";
            break;
        case 1: buffer += "monday";
            break;
        case 2: buffer += "tuesday";
            break;
        case 3: buffer += "wednesday";
            break;
        case 4: buffer += "thursday";
            break;
        case 5: buffer += "friday";
            break;
        case 6: buffer += "saturday";
    }
    return  buffer;
}

std::string DateTime::getYesterday(){
    dt.tm_mday -= 1;
    mktime(&dt);
    return getToday();
}

std::string DateTime::getTomorrow(){
    dt.tm_mday += 1;
    mktime(&dt);
    return getToday();
}

DateTime DateTime::getFuture(unsigned int N){
    DateTime future{};
    future.dt = dt;
    future.dt.tm_mday -= N;
    mktime(&future.dt);
    return future;
}

DateTime DateTime::getPast(unsigned int N){
    DateTime past{};
    past.dt = dt;
    past.dt.tm_mday -= N;
    mktime(&past.dt);
    return past;
}

int DateTime::getDifference(DateTime &dateTime) {
    std::time_t x = std::mktime(&dt);
    std::time_t y = std::mktime(&dateTime.dt);
    return abs((int) (difftime(y, x) / (60 * 60 * 24)));
}
