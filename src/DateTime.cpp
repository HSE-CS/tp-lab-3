//
// Created by Данил on 24.11.2020.
//

#include "DateTime.h"

std::map<int, int> yearStartsWith{
        {2020, 2},
        {2019, 1},
        {2018, 0},
        {2017, 6},
        {2016, 5}
};

std::string months[12]{
        "january",
        "february",
        "march",
        "april",
        "may",
        "june",
        "july",
        "august",
        "september",
        "october",
        "november",
        "december",
};

std::string days[7]{
        "monday",
        "tuesday",
        "wednesday",
        "thursday",
        "friday",
        "saturday",
        "sunday",
};


DateTime::DateTime() {
    std::time_t t = std::time(nullptr);
    std::tm *now = std::localtime(&t);
    this->year = now->tm_year + 1900;
    this->month = now->tm_mon;
    this->monthDay = now->tm_mday;
    this->weekDay = now->tm_wday - 1;
    this->monthSize = new int[12]{31, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int rDay = 1;
    int rMonth = 0;
    while (rMonth != this->month) rDay += this->monthSize[rMonth++];
    this->rawDateDay = rDay + this->monthDay;
}

DateTime::DateTime(int newDay, int newMonth, int newYear) {
    this->monthDay = newDay;
    this->month = newMonth;
    this->year = newYear;
    this->weekDay = yearStartsWith[this->year];
    this->monthSize = new int[12]{31, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int rDay = 1;
    int rMonth = 0;
    while (rMonth != this->month) rDay += this->monthSize[rMonth++];
    this->rawDateDay = rDay + this->monthDay;
}

DateTime::DateTime(const DateTime *other) {
    this->monthDay = other->monthDay;
    this->month = other->month;
    this->year = other->year;
    this->weekDay = other->weekDay;
    this->monthSize = new int[12]{31, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int rDay = 1;
    int rMonth = 0;
    while (rMonth != this->month) rDay += this->monthSize[rMonth++];
    this->rawDateDay = rDay + this->monthDay;
}

std::string DateTime::getToday() {
    return repr(this);
}

std::string DateTime::repr(const DateTime *date) {
    std::string dateString;

    if (date->monthDay < 10) dateString += std::string("0");

    dateString += std::to_string(date->monthDay);
    dateString += std::string(" ");
    dateString += months[date->month];
    dateString += std::string(" ");
    dateString += std::to_string(date->year);
    dateString += std::string(", ");
    dateString += days[date->weekDay];

    return dateString;
}

std::string DateTime::getYesterday() {
    return std::__cxx11::string();
}

std::string DateTime::getTomorrow() {
    return std::__cxx11::string();
}

DateTime DateTime::getFuture(unsigned int n) {

    DateTime newDate;

    int rawDay = 1;
    int curMonth = 0;

    // Calculating year:

    int nextYear = this->year;

    while (curMonth != this->month) rawDay += this->monthSize[curMonth++];
    rawDay += this->monthDay;

    if (rawDay + n > 365 + (int) this->isLeap()) nextYear++;

    newDate.year = nextYear;

    // Calculating month and day:

    int nextMonth = curMonth;

    int nextDay = this->monthDay;

    int rawMDay = rawDay;
    unsigned int remaining{n};

    while (true) {
        if (remaining > monthSize[nextMonth]) {
            remaining -= monthSize[nextMonth];
            nextMonth = (nextMonth + 1) % 12;
        } else {
            nextDay += remaining;
            if (nextDay > monthSize[nextMonth]) {
                nextDay -= monthSize[nextMonth++];
            }
            break;
        }
    }

    newDate.month = nextMonth;
    newDate.monthDay = nextDay;

    newDate.weekDay = (this->getRawDay(newDate.month, newDate.monthDay) + 7 - yearStartsWith[newDate.year]);

    return newDate;
}

DateTime DateTime::getPast(unsigned int n) {
    return DateTime();
}

bool DateTime::isLeap() {
    return !(this->year % 4);
}

int DateTime::getDifference(DateTime &other) {
    return 0;
}

int DateTime::getRawDay(int month, int day) {
    int rDay = 1;
    int rMonth = 0;
    while (rMonth != month) rDay += this->monthSize[rMonth++];
    return rDay + day;
}
