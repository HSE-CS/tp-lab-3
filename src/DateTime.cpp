//
// Created by jmax on 30.11.2020.
//
#include "DateTime.h"

std::string DateTime::getDateTimeString(tm timeToShow) {
    char date[100] = {'\0'};
    strftime(date, 100, "%d %B %Y, %A", &timeToShow);
    for (char &c: date) { c = tolower(c); }
    return date;
}

std::string DateTime::getToday() {
    return getDateTimeString(dateTime);
}

std::string DateTime::getFuture(unsigned int N) {
    tm futureTime = dateTime;
    futureTime.tm_mday += N;
    mktime(&futureTime);
    return getDateTimeString(futureTime);
}

std::string DateTime::getPast(unsigned int N) {
    tm pastTime = dateTime;
    pastTime.tm_mday -= N;
    mktime(&pastTime);
    return getDateTimeString(pastTime);
}

std::string DateTime::getTomorrow() {
    return getFuture(1);
}

std::string DateTime::getYesterday() {
    return getPast(1);
}

unsigned int DateTime::getDifference(DateTime &obj) {
    return std::abs(mktime(&dateTime) - mktime(&obj.dateTime)) / 86400;
}

