#include "DateTime.h"

#include <iostream>
using namespace std;
#include <cstdlib>

char fstr[] = "%d %B %Y, %A";

DateTime::DateTime(unsigned day, unsigned month, unsigned year) {
    this->day = day;
    this->month = month;
    this->year = year - 1900;

    time_t local_time = time(NULL);
    struct tm* date_time = localtime(&local_time);
    date_time->tm_mday = this->day;
    date_time->tm_mon = this->month-1;
    date_time->tm_year = this->year;
    mktime(date_time);

    char buffer[100];

    strftime(buffer, 30, fstr, date_time);
    string str(buffer);
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
        }
    }
    this->stroka = str;

}
DateTime::DateTime() {
    time_t local_time = time(NULL);
    tm* tm_local = localtime(&local_time);

    this->day = tm_local->tm_mday;
    this->month = tm_local->tm_mon + 1;
    this->year = tm_local->tm_year;
    char buf[100];

    strftime(buf, 30, fstr, tm_local);
    string str(buf);
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
        }
    }
    this->stroka = str;
}
DateTime::DateTime(DateTime& o) {
    this->day = o.day;
    this->month = o.month;
    this->year = o.year;
    this->stroka = o.stroka;
}

string  DateTime:: getToday() {return this->stroka;}

string  DateTime:: getYesterday() {
    if ((year % 4 == 0 && year % 100 != 0)|| (year % 4 == 0 && year % 400 == 0)) {
        if (month == 3) {
            if (day - 1 == 0) {
                this->day = 29;
                this->month = month - 1;
            }
            else {
                this->day = day - 1;
            }
        }
        else if (month == 1) {
            if (day - 1 == 0) {
                this->day = 31;
                this->month = 12;
                this->year = year - 1;
            }
            else {
                this->day = day - 1;
            }
        }
        else if ((month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {
            if (day - 1 == 0) {
                this->day = 30;
                this->month = month - 1;
            }
            else {
                this->day = day - 1;
            }
        }
        else if ((month == 2)||(month == 4) || (month == 6) || (month == 9) || (month == 11)) {
            if (day - 1 == 0) {
                this->day = 31;
                this->month = month - 1;
            }
            else {
                this->day = day - 1;
            }
        }
    }
    else {
        if (month ==3) {
            if (day - 1 == 0) {
                this->day = 28;
                this->month = month - 1;
            }
            else {
                this->day = day - 1;
            }
        }
        else if (month == 1) {
            if (day - 1 == 0) {
                this->day = 31;
                this->month = 12;
                this->year = year - 1;
            }
            else {
                this->day = day - 1;
            }
        }
        else if ((month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {
            if (day - 1 == 0) {
                this->day = 30;
                this->month = month - 1;
            }
            else {
                this->day = day - 1;
            }
        }
        else if ((month == 2)||(month == 4) || (month == 6) || (month == 9) || (month == 11)) {
            if (day - 1 == 0) {
                this->day = 31;
                this->month = month - 1;
            }
            else {
                this->day = day - 1;
            }
        }
    }

    time_t local_time = time(NULL);
    struct tm* date_time = localtime(&local_time);
    date_time->tm_mday = this->day;
    date_time->tm_mon = this->month - 1;
    date_time->tm_year = this->year;
    mktime(date_time);

    char buffer[100];

    strftime(buffer, 30, fstr, date_time);
    string str(buffer);
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
        }
    }
    this->stroka = str;
    return this->stroka;
}
string  DateTime:: getTomorrow() {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0)) {
        if (month == 2) {
            if (day + 1 == 30) {
                this->day = 1;
                this->month = month + 1;
            }
            else {
                this->day = day + 1;
            }
        }
        else if (month == 12) {
            if (day + 1 == 32) {
                this->day = 1;
                this->month = 1;
                this->year = year + 1;
            }
            else {
                this->day = day + 1;
            }
        }
        else if ((month == 1)|| (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10)) {
            if (day + 1 == 32) {
                this->day = 1;
                this->month = month + 1;
            }
            else {
                this->day = day + 1;
            }
        }
        else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
            if (day + 1 == 31) {
                this->day = 1;
                this->month = month + 1;
            }
            else {
                this->day = day + 1;
            }
        }
    }
    else {
        if (month == 2) {
            if (day + 1 == 29) {
                this->day = 1;
                this->month = month + 1;
            }
            else {
                this->day = day + 1;
            }
        }
        else if (month == 12) {
            if (day + 1 == 32) {
                this->day = 1;
                this->month = 1;
                this->year = year + 1;
            }
            else {
                this->day = day + 1;
            }
        }
        else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10)) {
            if (day + 1 == 32) {
                this->day = 1;
                this->month = month + 1;
            }
            else {
                this->day = day + 1;
            }
        }
        else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
            if (day + 1 == 31) {
                this->day = 1;
                this->month = month + 1;
            }
            else {
                this->day = day + 1;
            }
        }
    }

    time_t local_time = time(NULL);
    struct tm* date_time = localtime(&local_time);
    date_time->tm_mday = this->day;
    date_time->tm_mon = this->month - 1;
    date_time->tm_year = this->year;
    mktime(date_time);

    char buffer[100];

    strftime(buffer, 30, fstr, date_time);
    string str(buffer);
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
        }
    }
    this->stroka = str;
    return this->stroka;
}
string  DateTime:: getFuture(unsigned int N) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0)) {
        if (month == 2) {
            if (day + N > 29) {
                this->day = day + N - 29;
                this->month = month + 1;
            }
            else {
                this->day = day + N;
            }
        }
        else if (month == 12) {
            if (day + N > 31) {
                this->day = day + N - 31;
                this->month = 1;
                this->year = year + 1;
            }
            else {
                this->day = day + N;
            }
        }
        else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10)) {
            if (day + N > 31) {
                this->day = day + N - 31;
                this->month = month + 1;
            }
            else {
                this->day = day + N;
            }
        }
        else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
            if (day + N > 30) {
                this->day = day + N - 30;
                this->month = month + 1;
            }
            else {
                this->day = day + N;
            }
        }
    }
    else {
        if (month == 2) {
            if (day + N > 28) {
                this->day = day + N - 28;
                this->month = month + 1;
            }
            else {
                this->day = day + N;
            }
        }
        else if (month == 12) {
            if (day + N > 31) {
                this->day = day + N - 31;
                this->month = 1;
                this->year = year + 1;
            }
            else {
                this->day = day + N;
            }
        }
        else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10)) {
            if (day + N > 31) {
                this->day = day + N - 31;
                this->month = month + 1;
            }
            else {
                this->day = day + N;
            }
        }
        else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
            if (day + N > 30) {
                this->day = day + N - 30;
                this->month = month + 1;
            }
            else {
                this->day = day + N;
            }
        }
    }

    time_t local_time = time(NULL);
    struct tm* date_time = localtime(&local_time);
    date_time->tm_mday = this->day;
    date_time->tm_mon = this->month - 1;
    date_time->tm_year = this->year;
    mktime(date_time);

    char buf[100];

    strftime(buf, 30, fstr, date_time);
    string str(buf);
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
        }
    }
    this->stroka = str;
    return this->stroka;
}
string  DateTime:: getPast(unsigned int N) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0)) {
        if (month == 3) {
            if (day - N < 1) {
                this->day = 29 +(day - N);
                this->month = month - 1;
            }
            else {
                this->day = day - N;
            }
        }
        else if (month == 1) {
            if (day - N < 1) {
                this->day = 31 + (day - N);
                this->month = 12;
                this->year = year - 1;
            }
            else {
                this->day = day - N;
            }
        }
        else if ((month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {
            if (day - N < 1) {
                this->day = 30 + (day - N);
                this->month = month - 1;
            }
            else {
                this->day = day - N;
            }
        }
        else if ((month == 2) || (month == 4) || (month == 6) || (month == 9) || (month == 11)) {
            if (day - N < 1) {
                this->day = 31 + (day - N);
                this->month = month - 1;
            }
            else {
                this->day = day - N;
            }
        }
    }
    else {
        if (month == 3) {
            if (day - N < 1) {
                this->day = 28 + (day - N);
                this->month = month - 1;
            }
            else {
                this->day = day - N;
            }
        }
        else if (month == 1) {
            if (day - N < 1) {
                this->day = 31 + (day - N);
                this->month = 12;
                this->year = year - 1;
            }
            else {
                this->day = day - N;
            }
        }
        else if ((month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {
            if (day - N < 1) {
                this->day = 30 + (day - N);
                this->month = month - 1;
            }
            else {
                this->day = day - N;
            }
        }
        else if ((month == 2) || (month == 4) || (month == 6) || (month == 9) || (month == 11)) {
            if (day - N < 1) {
                this->day = 31 + (day - N);
                this->month = month - 1;
            }
            else {
                this->day = day - N;
            }
        }
    }

    time_t local_time = time(NULL);
    struct tm* date_time = localtime(&local_time);
    date_time->tm_mday = this->day;
    date_time->tm_mon = this->month - 1;
    date_time->tm_year = this->year;
    mktime(date_time);

    char buffer[100];

    strftime(buffer, 30, fstr, date_time);
    string str(buffer);
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
        }
    }
    this->stroka = str;
    return this->stroka;
}
unsigned DateTime:: getDifference(DateTime& new_date) {
    int date_difference = 0;

    if (this->year < new_date.year) {
        int counter_month = this->month + 1;
        while (counter_month != 13) {

            if ((counter_month == 1) || (counter_month == 3) || (counter_month == 5) || (counter_month == 7) || (counter_month == 8) || (counter_month == 10) || (counter_month == 12)) {
                date_difference += 31;
            }
            else if (counter_month == 2) {
                if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 4 == 0 && this->year % 400 == 0)) {
                    date_difference += 29;
                }
                else {
                    date_difference += 28;
                }
            }
            else if ((counter_month == 4) || (counter_month == 6) || (counter_month == 9) || (counter_month == 11)) {
                date_difference += 30;
            }
            counter_month++;
        }
        counter_month = 1;
        while (counter_month != new_date.month) {

            if ((counter_month == 1) || (counter_month == 3) || (counter_month == 5) || (counter_month == 7) || (counter_month == 8) || (counter_month == 10) || (counter_month == 12)) {
                date_difference += 31;
            }
            else if (counter_month == 2) {
                if ((new_date.year % 4 == 0 && new_date.year % 100 != 0) || (new_date.year % 4 == 0 && new_date.year % 400 == 0)) {
                    date_difference += 29;
                }
                else {
                    date_difference += 28;
                }
            }
            else if ((counter_month == 4) || (counter_month == 6) || (counter_month == 9) || (counter_month == 11)) {
                date_difference += 30;
            }
            counter_month++;
        }
        
        if ((this->month == 1) || (this->month == 3) || (this->month == 5) || (this->month == 7) || (this->month == 8) || (this->month == 10) || (this->month == 12)) {
            date_difference += 31 - this->day;
        }
        else if (this->month == 2) {
            if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 4 == 0 && this->year % 400 == 0)) {
                date_difference += 29 - this->day;
            }
            else {
                date_difference += 28 - this->day;
            }
        }
        else if ((this->month == 4) || (this->month == 6) || (this->month == 9) || (this->month == 11)) {
            date_difference += 30 - this->day;
        }

        date_difference += new_date.day;
        int counter_year = this->year + 1;
        while (counter_year != new_date.year) {
            if ((counter_year % 4 == 0 && counter_year % 100 != 0) || (counter_year % 4 == 0 && counter_year % 400 == 0)) {
                date_difference += 366;
            }
            else {
                date_difference += 365;
            }
            counter_year++;
        }
        date_difference++;
    }
    else if (new_date.year < this->year) {

        int counter_month = new_date.month + 1;
        while (counter_month != 13) {

            if ((counter_month == 1) || (counter_month == 3) || (counter_month == 5) || (counter_month == 7) || (counter_month == 8) || (counter_month == 10) || (counter_month == 12)) {
                date_difference += 31;
            }
            else if (counter_month == 2) {
                if ((new_date.year % 4 == 0 && new_date.year % 100 != 0) || (new_date.year % 4 == 0 && new_date.year % 400 == 0)) {
                    date_difference += 29;
                }
                else {
                    date_difference += 28;
                }
            }
            else if ((counter_month == 4) || (counter_month == 6) || (counter_month == 9) || (counter_month == 11)) {
                date_difference += 30;
            }
            counter_month++;
        }
        counter_month = 1;
        while (counter_month != this->month) {

            if ((counter_month == 1) || (counter_month == 3) || (counter_month == 5) || (counter_month == 7) || (counter_month == 8) || (counter_month == 10) || (counter_month == 12)) {
                date_difference += 31;
            }
            else if (counter_month == 2) {
                if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 4 == 0 && this->year % 400 == 0)) {
                    date_difference += 29;
                }
                else {
                    date_difference += 28;
                }
            }
            else if ((counter_month == 4) || (counter_month == 6) || (counter_month == 9) || (counter_month == 11)) {
                date_difference += 30;
            }
            counter_month++;
        }

        if ((new_date.month == 1) || (new_date.month == 3) || (new_date.month == 5) || (new_date.month == 7) || (new_date.month == 8) || (new_date.month == 10) || (new_date.month == 12)) {
            date_difference += 31 - new_date.day;
        }
        else if (new_date.month == 2) {
            if ((new_date.year % 4 == 0 && new_date.year % 100 != 0) || (new_date.year % 4 == 0 && new_date.year % 400 == 0)) {
                date_difference += 29 - new_date.day;
            }
            else {
                date_difference += 28 - new_date.day;
            }
        }
        else if ((new_date.month == 4) || (new_date.month == 6) || (new_date.month == 9) || (new_date.month == 11)) {
            date_difference += 30 - new_date.day;
        }
        //===========================================================
        date_difference += this->day;

        int counter_year = new_date.year + 1;
        while (counter_year != this->year) {
            if ((counter_year % 4 == 0 && counter_year % 100 != 0) || (counter_year % 4 == 0 && counter_year % 400 == 0)) {
                date_difference += 366;
            }
            else {
                date_difference += 365;
            }
            counter_year++;
        }
        date_difference++;
    }
    else if (this->year == new_date.year) {
        if (this->month < new_date.month) {
            int counter_month = this->month + 1;
            while (counter_month != new_date.month) {

                if ((counter_month == 1) || (counter_month == 3) || (counter_month == 5) || (counter_month == 7) || (counter_month == 8) || (counter_month == 10) || (counter_month == 12)) {
                    date_difference += 31;
                }
                else if (counter_month == 2) {
                    if ((new_date.year % 4 == 0 && new_date.year % 100 != 0) || (new_date.year % 4 == 0 && new_date.year % 400 == 0)) {
                        date_difference += 29;
                    }
                    else {
                        date_difference += 28;
                    }
                }
                else if ((counter_month == 4) || (counter_month == 6) || (counter_month == 9) || (counter_month == 11)) {
                    date_difference += 30;
                }
            }
            date_difference += new_date.day;

            if ((this->month == 1) || (this->month == 3) || (this->month == 5) || (this->month == 7) || (this->month == 8) || (this->month == 10) || (this->month == 12)) {
                date_difference += 31 - this->day;
            }
            else if (this->month == 2) {
                if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 4 == 0 && this->year % 400 == 0)) {
                    date_difference += 29 - this->day;
                }
                else {
                    date_difference += 28 - this->day;
                }
            }
            else if ((this->month == 4) || (this->month == 6) || (this->month == 9) || (this->month == 11)) {
                date_difference += 30 - this->day;
            }

        }
        else if (new_date.month < this->month) {
            int counter_month = new_date.month+ 1;
            while (counter_month != this->month) {

                if ((counter_month == 1) || (counter_month == 3) || (counter_month == 5) || (counter_month == 7) || (counter_month == 8) || (counter_month == 10) || (counter_month == 12)) {
                    date_difference += 31;
                }
                else if (counter_month == 2) {
                    if ((new_date.year % 4 == 0 && new_date.year % 100 != 0) || (new_date.year % 4 == 0 && new_date.year % 400 == 0)) {
                        date_difference += 29;
                    }
                    else {
                        date_difference += 28;
                    }
                }
                else if ((counter_month == 4) || (counter_month == 6) || (counter_month == 9) || (counter_month == 11)) {
                    date_difference += 30;
                }
            }
            date_difference += this->day;

            if ((new_date.month == 1) || (new_date.month == 3) || (new_date.month == 5) || (new_date.month == 7) || (new_date.month == 8) || (new_date.month == 10) || (new_date.month == 12)) {
                date_difference += 31 - new_date.day;
            }
            else if (new_date.month == 2) {
                if ((new_date.year % 4 == 0 && new_date.year % 100 != 0) || (new_date.year % 4 == 0 && new_date.year % 400 == 0)) {
                    date_difference += 29 - new_date.day;
                }
                else {
                    date_difference += 28 - new_date.day;
                }
            }
            else if ((new_date.month == 4) || (new_date.month == 6) || (new_date.month == 9) || (new_date.month == 11)) {
                date_difference += 30 - new_date.day;
            }
        }
        else if (this->month == new_date.month) {
            date_difference = abs((int)this->day - (int)new_date.day);
        }
    }
    return date_difference;
}