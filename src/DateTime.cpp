#include "DateTime.h"
#include <ctime>
#include <string.h>

using namespace std;

string getMonth(int month) {
    string months[12] = {" january ", " february ", " march ", " april ", " may ", " june ", " july ", " august ", " september ", " october ", " november ", " december "};
    return months[month];
}

string getWeekday(int day, int month, int year) {
    string weekdays[7] = {", sunday", ", monday", ", tuesday", ", wednesday", ", thursday", ", friday", ", saturday"};
    tm date = {0, 0, 0, day, month - 1, year - 1900};
    time_t tmp = mktime(&date);
    tm* t = localtime(&tmp);
    return weekdays[t->tm_wday];
}

DateTime::DateTime(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

DateTime::DateTime() {
    time_t tmp = time(0);
    tm* date = localtime(&tmp);
    year = 1900 + date->tm_year;
    month = 1 + date->tm_mon;
    day = date->tm_mday;
}

DateTime::DateTime(const DateTime& dt) {
    day = dt.day;
    month = dt.month;
    year = dt.year;
}

string DateTime::getToday() const {
    return to_string(day) + getMonth(month - 1) + to_string(year) + getWeekday(day, month, year);
}

string DateTime::getYesterday() const {
    tm date = {0, 0, 0, day, month - 1, year - 1900};
    time_t tmp = mktime(&date);
    tmp -= 24 * 60 * 60;
    tm* t = localtime(&tmp);
    return to_string(t->tm_mday) + getMonth(t->tm_mon) + to_string(1900 + t->tm_year) + getWeekday(t->tm_mday, t->tm_mon + 1, 1900 + t->tm_year);
}

string DateTime::getTomorrow() const {
    tm date = {0, 0, 0, day, month - 1, year - 1900};
    time_t tmp = mktime(&date);
    tmp += 24 * 60 * 60;
    tm* t = localtime(&tmp);
    return to_string(t->tm_mday) + getMonth(t->tm_mon) + to_string(1900 + t->tm_year) + getWeekday(t->tm_mday, t->tm_mon + 1, 1900 + t->tm_year);
}

string DateTime::getFuture(unsigned int N) const {
    tm date = {0, 0, 0, day, month - 1, year - 1900};
    time_t tmp = mktime(&date);
    tmp += 24 * 60 * 60 * N;
    tm* t = localtime(&tmp);
    return to_string(t->tm_mday) + getMonth(t->tm_mon) + to_string(1900 + t->tm_year) + getWeekday(t->tm_mday, t->tm_mon + 1, 1900 + t->tm_year);
}

string DateTime::getPast(unsigned int N) const {
    tm date = {0, 0, 0, day, month - 1, year - 1900};
    time_t tmp = mktime(&date);
    tmp -= 24 * 60 * 60 * N;
    tm* t = localtime(&tmp);
    return to_string(t->tm_mday) + getMonth(t->tm_mon) + to_string(1900 + t->tm_year) + getWeekday(t->tm_mday, t->tm_mon + 1, 1900 + t->tm_year);
}

unsigned int DateTime::getDifference(DateTime& date) const {
    tm fdate = {0, 0, 0, day, month - 1, year - 1900};
    tm sdate = {0, 0, 0, date.day, date.month - 1, date.year - 1900};
    time_t ftmp = mktime(&fdate);
    time_t stmp = mktime(&sdate);
    return abs(ftmp-stmp)/(24*60*60);
}
