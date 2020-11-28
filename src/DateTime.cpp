#include "DateTime.h"

DateTime::DateTime()
{
    time_t localTime = time(NULL);
    struct tm *tmDate = localtime(&localTime);

    date = *(tmDate);
};

DateTime::DateTime(int day, int month, int year)
{
    time_t localTime = time(NULL);
    struct tm *tmDate = localtime(&localTime);

    tmDate->tm_year = year - 1900;
    tmDate->tm_mon = month - 1;
    tmDate->tm_mday = day;
    mktime(tmDate);
    date = *(tmDate);
};

DateTime::DateTime(const DateTime &copiedElement)
{
    date = copiedElement.date;
};

std::string DateTime::getToday()
{
    const std::string MONTH[] = {"january", "february", "march", "april", "may", "june", "july", "august",
                                 "september", "october", "november", "decemeber"};
    const std::string WEEKDAY[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    std::string result;

    if (date.tm_mday < 10)
        result += '0';
    result += std::to_string(date.tm_mday) + ' ' + MONTH[date.tm_mon] + ' ' + std::to_string(1900 + date.tm_year) +
              ", " + WEEKDAY[date.tm_wday];

    return result;
};

std::string DateTime::getYesterday()
{
    time_t yesterday = mktime(&date);

    yesterday -= 86400;
    tm *ptrYesterday = localtime(&yesterday);

    const std::string MONTH[] = {"january", "february", "march", "april", "may", "june", "july", "august",
                                 "september", "october", "november", "decemeber"};
    const std::string WEEKDAY[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    std::string result;

    if (ptrYesterday->tm_mday < 10)
        result += '0';
    result += std::to_string(ptrYesterday->tm_mday) + ' ' + MONTH[ptrYesterday->tm_mon] + ' ' +
              std::to_string(1900 + ptrYesterday->tm_year) + ", " + WEEKDAY[ptrYesterday->tm_wday];

    return result;
};

std::string DateTime::getTomorrow()
{
    time_t tomorrow = mktime(&date);

    tomorrow += 86400;
    tm *ptrTomorrow = localtime(&tomorrow);

    const std::string MONTH[] = {"january", "february", "march", "april", "may", "june", "july", "august",
                                 "september", "october", "november", "decemeber"};
    const std::string WEEKDAY[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    std::string result;

    if (ptrTomorrow->tm_mday < 10)
        result += '0';
    result += std::to_string(ptrTomorrow->tm_mday) + ' ' + MONTH[ptrTomorrow->tm_mon] + ' ' +
              std::to_string(1900 + ptrTomorrow->tm_year) + ", " + WEEKDAY[ptrTomorrow->tm_wday];

    return result;
};

std::string DateTime::getFuture(unsigned int N)
{
    time_t future = mktime(&date);

    future += 86400 * N;
    tm *ptrFuture = localtime(&future);

    const std::string MONTH[] = {"january", "february", "march", "april", "may", "june", "july", "august",
                                 "september", "october", "november", "decemeber"};
    const std::string WEEKDAY[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    std::string result;

    if (ptrFuture->tm_mday < 10)
        result += '0';
    result += std::to_string(ptrFuture->tm_mday) + ' ' + MONTH[ptrFuture->tm_mon] + ' ' +
              std::to_string(1900 + ptrFuture->tm_year) + ", " + WEEKDAY[ptrFuture->tm_wday];

    return result;
};

std::string DateTime::getPast(unsigned int N)
{
    time_t past = mktime(&date);

    past -= 86400 * N;
    tm *ptrPast = localtime(&past);

    const std::string MONTH[] = {"january", "february", "march", "april", "may", "june", "july", "august",
                                 "september", "october", "november", "decemeber"};
    const std::string WEEKDAY[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    std::string result;

    if (ptrPast->tm_mday < 10)
        result += '0';
    result += std::to_string(ptrPast->tm_mday) + ' ' + MONTH[ptrPast->tm_mon] + ' ' +
              std::to_string(1900 + ptrPast->tm_year) + ", " + WEEKDAY[ptrPast->tm_wday];

    return result;
};

unsigned int DateTime::getDifference(DateTime &secondDate)
{
    unsigned int difference = 0;

    if (mktime(&date) > mktime(&secondDate.date))
        difference = (unsigned int)(mktime(&date) - mktime(&secondDate.date));
    else
        difference = (unsigned int)(mktime(&secondDate.date) - mktime(&date));
    difference /= 86400;

    return difference;
};