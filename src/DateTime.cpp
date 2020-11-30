#include <iostream>
#include <string>
#include <cctype>
#include <ctime>
#include "DateTime.h"


using namespace std;


string timeCalc(int day, int month, int year){
    char buf[80] = {0};
    tm inputTime = {0, 0, 0, day, month - 1, year - 1900};
    time_t tmp = mktime(&inputTime);
    tm *gettingTime = localtime(&tmp);
    strftime(buf, 80, "%d %B %Y, %A", gettingTime);
    string retBuf = buf;
    for (int i = 0; i < retBuf.size(); i++){
        if (retBuf[i] >= 'A' && retBuf[i] <= 'Z') retBuf[i] = tolower(retBuf[i]);
    }
    return retBuf;
}

int DateTime::getDifference(DateTime &date) {
    int dif = 0;
    struct tm oldDate = {0, 0, 0, day, month - 1, year - 1900};
    struct tm newDate = {0, 0, 0, date.day, date.month - 1, date.year - 1900};
    time_t old = mktime(&oldDate);
    time_t neww = mktime(&newDate);
    if (old != (time_t)(-1) && neww != (time_t)(-1)) dif = (int)difftime(neww, old) / (60 * 60 * 24);
    int result = abs(dif);
    return result;
}

DateTime::DateTime(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

DateTime::DateTime() {
    time_t now = time(nullptr);
    tm *localTime = localtime(&now);
    this->year = localTime->tm_year + 1970;
    this->month = localTime->tm_mon + 1;
    this->day = localTime->tm_mday;
}

DateTime::DateTime(const DateTime &date) {
    year = date.year;
    month = date.month;
    day = date.day;
}

string DateTime::getYesterday() const {
    return getPast(1);
}

string DateTime::getToday() const {
    return timeCalc(day, month, year);
}

string DateTime::getTomorrow() const {
    return getFuture(1);
}

string DateTime::getPast(unsigned int N) const {
    return timeCalc(day - N, month, year);
}

string DateTime::getFuture(unsigned int N) const {
    return timeCalc(day + N, month, year);
}


