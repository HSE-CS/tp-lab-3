#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
#include "DateTime.h"

using namespace std;

int daysInMonth(int x) 
{
    return 28 + (x + (int)floor(x / 8)) % 2 + 2 % x + 2 * (int)floor(1 / x);
}

int dayOfWeek(int D, int M, int Y)
{
    int a, y, m, R;
    a = (14 - M) / 12;
    y = Y - a;
    m = M + 12 * a - 2;
    R = 7000 + (D + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12);
    return R % 7;
}


string dayOfWeekParser(int day) 
{
    switch (day) 
    {
    case 1:
        return "monday";
    case 2:
        return "tuesday";
    case 3:
        return "wednesday";
    case 4:
        return "thursday";
    case 5:
        return "friday";
    case 6:
        return "saturday";
    case 7:
        return "sunday";
    default:
        return "error";
    }
}

string dayParser(int day) 
{
    string str;
    if (day > 10) 
    {
        str = to_string(day);
        //cout << str << endl;
        str += " ";
        return str;
    }
    else 
    {
        str += "0";
        str += to_string(day);
        str += " ";
        return str;
    }
}

string monthParser(int month) 
{
    switch (month) 
    {
    case 1:
        return "january ";
    case 2:
        return "february ";
    case 3:
        return "march ";
    case 4:
        return "april ";
    case 5:
        return "may ";
    case 6:
        return "june ";
    case 7:
        return "july ";
    case 8:
        return "august ";
    case 9:
        return "september ";
    case 10:
        return "october ";
    case 11:
        return "november ";
    case 12:
        return "december ";
    default:
        return "error";
    }
}

string DateTime::getToday() 
{
    string date;
    date += dayParser(day);
    date += monthParser(month);
    date += to_string(year) + ", ";
    date += dayOfWeekParser(dayOfWeek(day, month, year));
    return date;

}

string DateTime::getTomorrow() 
{
    return getFuture(1);
}

string DateTime::getYesterday() 
{
    return getPast(1);
}

int DateTime::getDifference(DateTime& dt) 
{
    int day1 = 0;
    int day2 = 0;

    day1 += 365 * this->year;
    for (int i = 1; i < this->month; ++i) 
    {
        day1 += daysInMonth(i);
    }
    day1 += this->day;


    day2 += 365 * dt.year;
    for (int i = 1; i < dt.month; ++i) 
    {
        day2 += daysInMonth(i);
    }
    day2 += dt.day;

    return (max(day1, day2) - min(day1, day2));
}

string DateTime::getFuture(unsigned int N) 
{
    string date;
    int days = 0;

    days += 365 * year;
    for (int i = 1; i < month; ++i) 
    {
        days += daysInMonth(i);
    }
    days += day;
    days += N;

    int y = days / 365;
    days -= 365 * y;

    int m = 1;
    int HMdays = daysInMonth(1);
    while (days > HMdays) 
    {
        days -= HMdays;
        m++;
        HMdays = daysInMonth(m);
    }

    int d = days;

    date += dayParser(d);
    date += monthParser(m);
    date += to_string(y) + ", ";
    date += dayOfWeekParser(dayOfWeek(d, m, y));
    return date;


}

string DateTime::getPast(unsigned int N) 
{
    string date;
    int days = 0;

    days += 365 * year;
    for (int i = 1; i < month; ++i) 
    {
        days += daysInMonth(i);
    }
    days += day;
    days -= N;

    int y = days / 365;
    days -= 365 * y;

    int m = 1;
    int HMdays = daysInMonth(1);
    while (days > HMdays) 
    {
        days -= HMdays;
        m++;
        HMdays = daysInMonth(m);
    }

    int d = days;

    date += dayParser(d);
    date += monthParser(m);
    date += to_string(y) + ", ";
    date += dayOfWeekParser(dayOfWeek(d, m, y));
    return date;
}