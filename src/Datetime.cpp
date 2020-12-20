#include "DateTime.h"
#include <string>
#include <ctype.h>
#include <cmath>


std::string makeString(struct tm *new_date) {
    char buf_date[SIZE] = {0};
    std::string str_date;

    strftime(buf_date, SIZE, "%d %B %Y, %A", new_date);
    str_date = buf_date;

    for (auto& c: str_date){
        c = tolower(c);
    }

    return str_date;
}

std::string DateTime::getToday() {
    return makeString(&data_info);
}

std::string DateTime::getYesterday() {
    return getPast(1);
}

std::string DateTime::getTomorrow() {
    return getFuture(1);
}

std::string DateTime::getFuture(unsigned int N) {
    DateTime new_date;

    new_date.data_info = data_info;
    new_date.data_info.tm_mday = new_date.data_info.tm_mday + N;
    mktime(&new_date.data_info);

    return makeString(&new_date.data_info);
}

std::string DateTime::getPast(unsigned int N) {
    DateTime new_date;

    new_date.data_info = data_info;
    new_date.data_info.tm_mday = new_date.data_info.tm_mday - N;
    mktime(&new_date.data_info);

    return makeString(&new_date.data_info);
}

int DateTime::getDifference(DateTime& new_date) {
    time_t date_1 = mktime(&data_info);
    time_t date_2 = mktime(&new_date.data_info);
    int diff = int(abs(date_2 - date_1) / (60 * 60 * 24));

    return diff;
} 