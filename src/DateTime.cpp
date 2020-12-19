#include "DateTime.h"

DateTime::DateTime(int day, int month, int year) {
    dateTime.tm_mday = day;
    dateTime.tm_mon = month - 1;
    dateTime.tm_year = year;
    mktime(&dateTime);
}

DateTime::DateTime() {
    time_t seconds = time(NULL);
    dateTime = *(localtime(&seconds));
}

DateTime::DateTime(const DateTime &date) {
    dateTime = date.dateTime;
}

string DateTime::getToday() {
    char *temp = (char*)malloc(50);
    strftime(temp, 50, "%d %B %G, %A", &dateTime);
    string today(temp);
    transform(today.begin(), today.end(), today.begin(), [](unsigned char c){return tolower(c);});
    free(temp);
    return today;
}

string DateTime::getYesterday() {
    dateTime.tm_mday = dateTime.tm_mday - 1;
    mktime(&dateTime);
    string yesterday = this->getToday();
    dateTime.tm_mday = dateTime.tm_mday + 1;
    mktime(&dateTime);
    return yesterday;
}

string DateTime::getTomorrow() {
    dateTime.tm_mday = dateTime.tm_mday + 1;
    mktime(&dateTime);
    string tomorrow = this->getToday();
    dateTime.tm_mday = dateTime.tm_mday - 1;
    mktime(&dateTime);
    return tomorrow;
}

string DateTime::getFuture(unsigned int N) {
    dateTime.tm_mday = dateTime.tm_mday + N;
    mktime(&dateTime);
    string future = this->getToday();
    dateTime.tm_mday = dateTime.tm_mday - N;
    mktime(&dateTime);
    return future;
}

string DateTime::getPast(unsigned int N) {
    dateTime.tm_mday = dateTime.tm_mday - N;
    mktime(&dateTime);
    string past = this->getToday();
    dateTime.tm_mday = dateTime.tm_mday + N;
    mktime(&dateTime);
    return past;
}

int DateTime::getDifference(DateTime &date) {
    int seconds = difftime(mktime(&dateTime), mktime(&date.dateTime));
    return seconds / 86400;
}