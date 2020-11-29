//
// Created by Valera on 27.11.2020.
//

#include "DateTime.h"

using namespace std;

DateTime::DateTime(int day, int month, int year) {
    t = tm{0, 0, 0, day, month - 1, year - 1900};
    mktime(&t);
}

DateTime::DateTime() {
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    t.tm_mday = timeinfo->tm_mday;
    t.tm_mon = timeinfo->tm_mon;
    t.tm_year = timeinfo->tm_year;
    mktime(&t);
}

DateTime::DateTime(const DateTime &dateTime) : t(dateTime.t) {}

string DateTime::getToday() const {
    string buffer;
    if (t.tm_mday < 10) {
        buffer = "0";
        buffer += to_string(t.tm_mday);
    } else {
        buffer = to_string(t.tm_mday);
    }

    buffer += ' ';

    switch (t.tm_mon) {
        case 0:
            buffer += "january";
            break;
        case 1:
            buffer += "february";
            break;
        case 2:
            buffer += "march";
            break;
        case 3:
            buffer += "april";
            break;
        case 4:
            buffer += "may";
            break;
        case 5:
            buffer += "june";
            break;
        case 6:
            buffer += "july";
            break;
        case 7:
            buffer += "august";
            break;
        case 8:
            buffer += "september";
            break;
        case 9:
            buffer += "october";
            break;
        case 10:
            buffer += "november";
            break;
        case 11:
            buffer += "december";
    }

    buffer += ' ';
    buffer += to_string(1900 + t.tm_year);

    buffer += ", ";

    switch (t.tm_wday) {
        case 0:
            buffer += "sunday";
            break;
        case 1:
            buffer += "monday";
            break;
        case 2:
            buffer += "tuesday";
            break;
        case 3:
            buffer += "wednesday";
            break;
        case 4:
            buffer += "thursday";
            break;
        case 5:
            buffer += "friday";
            break;
        case 6:
            buffer += "saturday";
    }
    return buffer;
}

string DateTime::getYesterday() {
    t.tm_mday -= 1;
    mktime(&t);
    return getToday();
}

string DateTime::getTomorrow() {
    t.tm_mday += 1;
    mktime(&t);
    return getToday();
}

DateTime DateTime::getFuture(unsigned int N) {
    DateTime future{};
    future.t = t;
    future.t.tm_mday += N;
    mktime(&future.t);
    return future;
}

DateTime DateTime::getPast(unsigned int N) {
    DateTime past{};
    past.t = t;
    past.t.tm_mday -= N;
    mktime(&past.t);
    return past;
}

int DateTime::getDifference(DateTime &dateTime) {
    time_t x = mktime(&t);
    time_t y = mktime(&dateTime.t);
    return abs((int) (difftime(y, x) / (60 * 60 * 24)));
}
