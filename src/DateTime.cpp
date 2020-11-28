#include "DateTime.h"
#include <cmath>
#include <ctime>
#include <string>
#include <cstring>

const char *weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

DateTime::DateTime() {
    this->seconds = time(NULL);

    this->time_x = localtime(&(this->seconds));
    this->seconds = mktime(this->time_x);
}

DateTime::DateTime(int day, int month, int year) {
    this->time_x = new tm();
    this->time_x->tm_mday = day;
    this->time_x->tm_mon = month - 1;
    year = year < 1900 ? 1900 : year;
    this->time_x->tm_year = year - 1900;
    this->seconds = mktime(this->time_x);
}

DateTime::DateTime(DateTime& datetime) {
    this->time_x = new tm();
    this->time_x->tm_mday = datetime.time_x->tm_mday;
    this->time_x->tm_mon = datetime.time_x->tm_mon;
    this->time_x->tm_year = datetime.time_x->tm_year;
    this->seconds = mktime(this->time_x);
}

struct tm DateTime::getDayByDelta(long long N) {
    struct tm date = *(this->time_x);
    date.tm_mday += N;
    mktime(&date);
    return date;
}

std::string DateTime::toString(struct tm time13) {

    char buffer[80] = { '\0' };
    strftime(buffer, sizeof(buffer), "%d %B %Y", &time13);

    int weekday = time13.tm_wday;
    sprintf(buffer, "%s, %s", buffer, weekdays[weekday]);

    for (size_t i = 0; i < strlen(buffer); i++) {
        buffer[i] = tolower(buffer[i]);
    }
    std::string str(buffer);
    return str;
}

std::string DateTime::getToday() {
    return toString(*(this->time_x));
}

std::string DateTime::getTomorrow() {
    return toString(getDayByDelta(1));
}

std::string DateTime::getYesterday() {
    return toString(getDayByDelta(-1));
}

std::string DateTime::getFuture(unsigned int N) {
    return toString(getDayByDelta(N));
}

std::string DateTime::getPast(unsigned int N) {
    return toString(getDayByDelta((long long)N * (-1)));
}

unsigned int DateTime::getDifference(DateTime& second) {
    int seconds_dif = abs(this->seconds - second.seconds);
    return seconds_dif / 60 / 60 / 24;
}
