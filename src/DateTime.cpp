#include <iostream>
#include <string>
#include "DateTime.h"

using namespace std;

const char* Week[] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
const char* mon[] = { "january", "february", "march", "april", "may", "june",
                      "july", "august", "september","october", "november", "december" };


string DateTime::getToday() {
    string retStr;

    struct tm* struct_time = localtime(&raw_time);

    if (struct_time->tm_mday <= 9) {
        retStr += '0';
        retStr += (char)(struct_time->tm_mday + 48);
    }
    else
    {
        retStr += to_string(struct_time->tm_mday);
    }

    retStr += ' ';

    retStr += mon[struct_time->tm_mon];
    retStr += ' ';

    retStr += to_string(struct_time->tm_year + 1900);
    retStr += ", ";
    retStr += Week[struct_time->tm_wday];

    return retStr;
}


string DateTime::getYesterday()
{
    DateTime yest(*this);
    yest.raw_time -= 3600 * 24;
    return yest.getToday();
}

string DateTime::getTomorrow()
{
    DateTime tomor(*this);
    tomor.raw_time += 3600 * 24;
    return tomor.getToday();
}

string DateTime::getFuture(unsigned int days) {
    DateTime futur(*this);
    futur.raw_time += 3600 * 24 * days;
    return futur.getToday();
}

string DateTime::getFuture(unsigned int days) {
    DateTime past(*this);
    past.raw_time -= 3600 * 24 * days;
    return past.getToday();
}

unsigned int DateTime::getDifference(DateTime& data) 
{
    return (abs(raw_time - data.raw_time) / (3600 * 24));
}