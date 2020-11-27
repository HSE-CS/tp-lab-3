#include "../include/DateTime.h"

DateTime::DateTime() {
    time_t t;
    time(&t);
    struct std::tm *time = localtime(&t);
    day = time->tm_mday;
    month = time->tm_mon + 1;
    year = time->tm_year + 1900;
    week_day = time->tm_wday;
}

DateTime::DateTime(int d, int m, int y) : day{d}, month{m}, year{y} {
    time_t t;
    time(&t);
    struct std::tm *time = localtime(&t);
    time->tm_mday = d;
    time->tm_mon = m - 1;
    time->tm_year = y - 1900;
    mktime(time);
    week_day = time->tm_wday;
}

DateTime::DateTime(const DateTime &date)
        : day{date.day}, month{date.month}, year{date.year}, week_day{
        date.week_day} {}

std::string DateTime::DateToString(int N = 0) {
    time_t t = this->getTime() + N * SEC_IN_DAY;
    struct std::tm *time = localtime(&t);
    std::string day;
    if (time->tm_mday < 10) {
        day += "0";
    }
    day = day + std::to_string(time->tm_mday) + " " +
          month_of_year[time->tm_mon + 1] + " " +
          std::to_string(time->tm_year + 1900) + ", " +
          day_of_week[time->tm_wday];
    return day;
}

time_t DateTime::getTime() {
    time_t t;
    time(&t);
    struct std::tm *time = localtime(&t);
    time->tm_mday = this->day;
    time->tm_mon = this->month - 1;
    time->tm_year = this->year - 1900;
    t = mktime(time);
    return t;
}

std::string DateTime::getToday() { return this->DateToString(); }

std::string DateTime::getYesterday() { return this->DateToString(-1); }

std::string DateTime::getTomorrow() { return this->DateToString(1); }

std::string DateTime::getFuture(unsigned int N) {
    return this->DateToString(N);
}

std::string DateTime::getPast(unsigned int N) { return this->DateToString(-N); }

int DateTime::getDifference(DateTime &D) {
    return abs(this->getTime() - D.getTime()) / SEC_IN_DAY;
}