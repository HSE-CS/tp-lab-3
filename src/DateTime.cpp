//
// Created by Vadim Makarov on 16.11.2020.
//

#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
#include "DateTime.h"

using namespace std;

int daysInMonth(int x) {
    return 28 + (x + (int)floor(x/8)) % 2 + 2 % x + 2 * (int)floor(1/x);
}

int dayOfWeek( int D, int M, int Y )
{
    int a, y, m, R;
    a = ( 14 - M ) / 12;
    y = Y - a;
    m = M + 12 * a - 2;
    R = 7000 + ( D + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12 );
    return R % 7;
}


string dayOfWeekParser(int day){
    switch (day) {
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

string dayParser(int day){
    string str;
    if (day > 10) {
        str = to_string(day);
        //cout << str << endl;
        return str;
    }
    else {
        str += "0";
        str += to_string(day);
        str += " ";
        return str;
    }
}

string monthParser(int month){
    switch (month) {
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

string DateTime::getToday(){
    string date;
    date += dayParser(day);
    date += monthParser(month);
    date += to_string(year) + ", ";
    date += dayOfWeekParser(dayOfWeek(day, month, year));
    return date;

}

string DateTime::getTomorrow(){
    string date;

    int HMdays = daysInMonth(month);
    //cout << HMdays << endl;

    if (HMdays == day){
        date += dayParser(1);
        date += monthParser(month + 1);
        date += to_string(year) + ", ";
        date += dayOfWeekParser(dayOfWeek(1, month + 1, year));
    } else {
        date += dayParser(day + 1);
        date += monthParser(month);
        date += to_string(year) + ", ";
        date += dayOfWeekParser(dayOfWeek(day + 1, month, year));
    }

    return date;

}

int DateTime::getDifference(DateTime &dt) {
    return (max(dt.day, this->day) - min(dt.day, this->day));
}