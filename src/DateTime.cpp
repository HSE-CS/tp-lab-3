#include "DateTime.h"
#include <ctime>
#include <cstring>
using std::to_string;

DateTime::DateTime(int day, int month, int year) {
    time_t tmp = time(nullptr);
    current_time = new tm;
    memcpy(current_time, localtime(&tmp), sizeof(tm));
    current_time->tm_mday = day;
    current_time->tm_mon = month - 1;
    current_time->tm_year = year - 1900;
    mktime(current_time);
}

DateTime::DateTime() {
    time_t rawtime = time(nullptr);
    current_time = localtime(&rawtime);
}

DateTime::DateTime(const DateTime& obj) {
    current_time = new tm;
    memcpy(current_time, obj.current_time, sizeof(tm));
}

string DateTime::getToday() {
    string weekDays[] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
    string months[] = { "january", "february", "march", "april", "may", "june",
                       "july", "august", "september", "october", "november", "december" };
    string day;
    if (current_time->tm_mday < 10) {
        day = "0";
    }
    day += to_string(current_time->tm_mday);
    return (day + string(" ") +
        months[current_time->tm_mon] + string(" ") + to_string(current_time->tm_year + 1900) +
        string(",") + string(" ") + weekDays[current_time->tm_wday]);
}

string DateTime::getYesterday() {
    return this->getPast(1);
}

string DateTime::getTomorrow() {
    return this->getFuture(1);
}

string DateTime::getPast(unsigned int n) {
    DateTime past = DateTime(current_time->tm_mday - n, current_time->tm_mon + 1, current_time->tm_year + 1900);
    return past.getToday();
}

string DateTime::getFuture(unsigned int n) {
    DateTime past = DateTime(current_time->tm_mday + n, current_time->tm_mon + 1, current_time->tm_year + 1900);
    return past.getToday();
}

int DateTime::getDifference(DateTime& dt) {
    return abs((mktime(this->current_time) - mktime(dt.current_time))) / (60 * 60 * 24);
}