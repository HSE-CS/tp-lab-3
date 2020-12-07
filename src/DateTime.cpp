#include "DateTime.h"

DateTime::DateTime() {
    time_t currentTime;
    time(&currentTime);
    dateTime = *(localtime(&currentTime));
    mktime(&dateTime);
}

DateTime::DateTime(unsigned day, unsigned month, unsigned year) {
    dateTime.tm_hour = 0;
    dateTime.tm_min = 0;
    dateTime.tm_sec = 0;
    dateTime.tm_mday = day;
    dateTime.tm_mon = month - 1;
    dateTime.tm_year = year - 1900;
    mktime(&dateTime);
}

DateTime::DateTime(DateTime const &object) {
    dateTime = object.dateTime;
}


std::string DateTime::getTomorrow() {
    return getFuture(1);
}

std::string DateTime::getYesterday() {
    return getPast(1);
}

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
    pastTime.tm_mday = pastTime.tm_mday - N;
    mktime(&pastTime);
    return getDateTimeString(pastTime);
}

unsigned int DateTime::getDifference(DateTime &object) {
    return std::abs(mktime(&dateTime) - mktime(&object.dateTime)) / 86400;
}