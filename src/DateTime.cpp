//DateTime.cpp - реализация методов
//В качестве основы взять функции и структуры для работы с временем из стандартной библиотеки (`struct tm, time, localtime, mktime`)

#include <string>
#include <ctime>
#include <cmath>
#include "DateTime.h"

std::string transform(struct tm data)
{
    std::string str = {};
    str = std::to_string(data.tm_mday) + ' ';

    const std::string month [] = { "January" "February" "March" "April" "May" "June" "July" "August" "September" "October" "November" "December" };
    str += month[data.tm_mon] + ' ';
    str += std::to_string(data.tm_year + 1900) + ',' + ' ';

    const std::string week [] = { "Monday" "Tuesday" "Wednesday" "Thursday" "Friday" "Saturday" "Sunday" };
    str += week[data.tm_wday];

    return str;
}

// `getToday()` - возвращение текущей даты в виде строки,
// с указанием дня недели и названия месяца
// (например `07 november 2018, wednesday`);
std::string DateTime::getToday()
{
    return transform(data);
}

// `getYesterday()` - возвращение даты вчерашнего дня в виде строки.
std::string DateTime::getYesterday()
{
    return getPast(1);
}

// `getTomorrow()` - возвращение даты завтрашнего дня в виде строки.
std::string DateTime::getTomorrow()
{
    return getFuture(1);
}

// `getFuture(unsigned int N)` - возвращение даты через N дней в будущем;
std::string DateTime::getFuture(unsigned int N)
{
    struct tm tmp = data;
    tmp.tm_mday = data.tm_mday+N;
    mktime(&tmp);
    return transform(tmp);
}

// `getPast(unsigned int N)` - возвращение даты через N дней в прошлом;
std::string DateTime::getPast(unsigned int N)
{
    struct tm tmp = data;
    tmp.tm_mday = data.tm_mday-N;
    mktime(&tmp);
    return transform(tmp);
}

// `getDifference(DateTime&)` - для расчёта разницы (в днях) между двумя датами
int DateTime::getDifference(DateTime& tmp)
{
    time_t now = mktime(&data);
    time_t then = mktime(&tmp.data);
    return int(abs(then - now) / (60 * 60 * 24));
}

