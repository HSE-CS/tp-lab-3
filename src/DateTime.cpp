#include "DateTime.h"

using namespace std;
const char *months[] = {"january", "february", "march", "april", "may", "june", "july", "august", "september",
                        "october", "november", "december"};

const char *days_Of_The_Week[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};

string DateTime::getToday() {
    string dateString;
    struct tm *struct_time = localtime(&raw_time);
    if (struct_time->tm_mday > 9)
        dateString += to_string(struct_time->tm_mday);
    else {
        dateString += '0';
        dateString += (char) (struct_time->tm_mday + 48);
    }
    dateString += ' ';
    dateString += months[struct_time->tm_mon];
    dateString += ' ' + to_string(struct_time->tm_year + 1900) + ", ";
    dateString += days_Of_The_Week[struct_time->tm_wday];
    return dateString;
}

string DateTime::getYesterday() {
    DateTime yesterday(*this);
    yesterday.raw_time -= 86400;
    return yesterday.getToday();
}

string DateTime::getTomorrow() {
    DateTime tomorrow(*this);
    tomorrow.raw_time += 86400;
    return tomorrow.getToday();
}

string DateTime::getPast(unsigned int amountOfDays) {
    DateTime pastDate(*this);
    pastDate.raw_time -= 86400 * amountOfDays;
    return pastDate.getToday();
}

string DateTime::getFuture(unsigned int amountOfDays) {
    DateTime futureDate(*this);
    futureDate.raw_time += 86400 * amountOfDays;
    return futureDate.getToday();
}

unsigned int DateTime::getDifference(DateTime &data) {
    return (abs(raw_time - data.raw_time) / 86400);
}
