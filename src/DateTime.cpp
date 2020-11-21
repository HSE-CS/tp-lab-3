/*
 * @author Stanislav Stoianov
 */

/*
 * https://www.wikiwand.com/ru/Time.h
 */

#include "../include/DateTime.h"

DateTime::DateTime() { this->raw_time = time(nullptr); }

DateTime::DateTime(unsigned int day, unsigned int month, unsigned int year) {
    time_t rawValue = time(nullptr);
    struct tm *time = localtime(&rawValue);
    time->tm_mday = day;
    time->tm_mon = month - 1;
    time->tm_year = year - 1900;
    this->raw_time = mktime(time);
}

DateTime::DateTime(DateTime &datetime) { this->raw_time = datetime.raw_time; }

std::string DateTime::getToday() {
    char date[100] = {'\0'};
    strftime(date, 100, "%d %B %Y, %A", localtime(&this->raw_time));
    for (auto &c: date) c = tolower(c);
    return date;
}

std::string DateTime::getYesterday() { return getPast(1); }

std::string DateTime::getTomorrow() { return getFuture(1); }

std::string DateTime::getFuture(unsigned int days) {
    DateTime tmp(*this);
    tmp.raw_time += 86400 * days;
    return tmp.getToday();
}

std::string DateTime::getPast(unsigned int days) {
    DateTime tmp(*this);
    tmp.raw_time -= 86400 * days;
    return tmp.getToday();
}

unsigned int DateTime::getDifference(DateTime &datetime) const {
    return std::abs(this->raw_time - datetime.raw_time) / 86400;
}