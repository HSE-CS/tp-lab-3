#include "DateTime.h"

const string daysOfTheWeek[] = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };
const string months[] = { "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };

string DateTime::getToday() {
    string date;
    struct tm *struct_time = localtime(&dateAtime);

    date += to_string(struct_time->tm_mday);
    date += ' ';
    date += months[struct_time->tm_mon];
    date += ' ';
    date += to_string(struct_time->tm_year + 1900);
    date += ", ";
    date += daysOfTheWeek[struct_time->tm_wday];
    return date;
}

string DateTime::getYesterday() {
    DateTime yday(*this);
    yday.dateAtime -= 86400;
    return yday.getToday();
}

string DateTime::getTomorrow() {
    DateTime tom(*this);
    tom.dateAtime += 86400;
    return tom.getToday();
}

string DateTime::getPast(unsigned int amountOfDays) {
    DateTime past(*this);
    past.dateAtime -= 86400 * amountOfDays;
    return past.getToday();
}

string DateTime::getFuture(unsigned int amountOfDays) {
    DateTime future(*this);
    future.dateAtime += 86400 * amountOfDays;
    return future.getToday();
}

unsigned int DateTime::getDifference(DateTime &data) {
    return (abs(dateAtime - data.dateAtime) / 86400);
}