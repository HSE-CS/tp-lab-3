//
// Created by vladimir on 20.12.2020.
//

#include "DateTime.h"

DateTime::DateTime(unsigned day, unsigned month, unsigned year) {
    time_t timee = time(nullptr);
    struct tm* tmp = localtime(&timee);
    tmp->tm_mday = day;
    tmp->tm_mon = month - 1;
    tmp->tm_year = year - 1900;
    new_time = mktime(tmp);
}

DateTime::DateTime() {
    new_time = time(nullptr);
}

DateTime::DateTime(DateTime &timee) {
    new_time = timee.new_time;
}

std::string DateTime::getToday() {
    char time[100];
    struct tm* tmp = localtime(&new_time);
    strftime(time, 100, "%d %b %y, %a", tmp);
    std::string result;
    result.append(time);
    return result;

}

std::string DateTime::getYesterday() const {
    return getPast(1);
}

std::string DateTime::getTomorrow() const {
    return getFuture(1);
}

std::string DateTime::getPast(unsigned int N) const {
    time_t past = this->new_time - 60*60*24*N;
    char time[100];
    strftime(time,100, "%d %b %y, %a", gmtime(&(past)));
    std::string tmp;
    tmp.append(time);
    return tmp;
}

std::string DateTime::getFuture(unsigned int N) const {
    time_t future = this->new_time + 60*60*24*N;
    char time[100];
    strftime(time,100, "%d %b %y, %a", gmtime(&(future)));
    std::string tmp;
    tmp.append(time);
    return tmp;
}

int DateTime::getDifference(DateTime &timee) const {
    time_t tmp = std::abs(this->new_time - timee.new_time);
    return (int)(tmp / 60 / 60 / 24);
}
