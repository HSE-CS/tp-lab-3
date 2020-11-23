
#include "DateTime.h"

const char *days[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
const char *months[] = {"january", "february", "march", "april", "may", "june", "july", "august", "september",
                        "october", "november", "december"};

string DateTime::getToday()
{
    string date;
    tm *t = localtime(&seconds);
    if (t->tm_mday <= 9)
    {
        date += "0";
        date += (char) (t->tm_mday + 48);
    } else
    {
        date += to_string(t->tm_mday);
    }
    date += " ";
    date += months[t->tm_mon];
    date += " ";
    date += to_string(t->tm_year + 1900);
    date += ", ";
    date += days[t->tm_wday];
    return date;
}

string DateTime::getYesterday()
{
    DateTime yesterday(*this);
    return yesterday.getPast(1);
}

string DateTime::getTomorrow()
{
    DateTime tomorrow(*this);
    return tomorrow.getFuture(1);
}

string DateTime::getFuture(unsigned int N)
{
    DateTime tomorrowN(*this);
    tomorrowN.seconds += 86400 * N;
    return tomorrowN.getToday();
}

string DateTime::getPast(unsigned int N)
{
    DateTime yestedayN(*this);
    yestedayN.seconds -= 86400 * N;
    return yestedayN.getToday();
}

int DateTime::getDifference(DateTime &d)
{
    int difference;
    difference = seconds - d.seconds;
    difference /= 86400;
    difference = abs(difference);
    return difference;
}
