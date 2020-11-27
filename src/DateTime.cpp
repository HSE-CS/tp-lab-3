//
// Created by arkly on 25.11.2020.
//

//Поменять 01.03.2019 - yestarday Может быть день 31, 30 и месяц поменять
#include "DateTime.h"

DateTime::DateTime(int _day, int _month, int _year) {
    day = _day;
    month = _month;
    year = _year;

    struct tm *s_time;
    tm f_time{0, 0, 0, day, month - 1, year - 1900};
    time_t time_temp = mktime(&f_time);
    s_time = localtime(&time_temp);
    wday = s_time->tm_wday;
}
DateTime::DateTime() {
    struct tm *s_time;
    const time_t f_time = time(nullptr);
    s_time = localtime(&f_time);
    day = s_time->tm_mday;
    month = s_time->tm_mon + 1;
    year = s_time->tm_year + 1900;
    wday = s_time->tm_wday;
}
DateTime::DateTime(const DateTime &_datetime) :
        day(_datetime.day), month(_datetime.month), year(_datetime.year), wday(_datetime.wday) {}

std::string DateTime::getToday() const {
    std::string date_time;

    if(day > 0 && day < 10) {
        date_time = '0' + std::to_string(day) + ' ';
    } else {
        date_time = std::to_string(day) + ' ';
    }

    switch(month) {
        case 1:
            date_time += "january ";
            break;
        case 2:
            date_time += "february ";
            break;
        case 3:
            date_time += "march ";
            break;
        case 4:
            date_time += "april ";
            break;
        case 5:
            date_time += "may ";
            break;
        case 6:
            date_time += "june ";
            break;
        case 7:
            date_time += "july ";
            break;
        case 8:
            date_time += "august ";
            break;
        case 9:
            date_time += "september ";
            break;
        case 10:
            date_time += "october ";
            break;
        case 11:
            date_time += "november ";
            break;
        case 12:
            date_time += "december ";
            break;
        default:
            break;
    }

    date_time = date_time + std::to_string(year) + ", ";

    switch(wday) {
        case 0:
            date_time += "sunday";
            break;
        case 1:
            date_time += "monday";
            break;
        case 2:
            date_time += "tuesday";
            break;
        case 3:
            date_time += "wednesday";
            break;
        case 4:
            date_time += "thursday";
            break;
        case 5:
            date_time += "friday";
            break;
        case 6:
            date_time += "saturday";
            break;
        default:
            break;
    }

    return date_time;
}
std::string DateTime::getYesterday() const {
    std::string date_time;

    time_t time_temp;
    struct tm f_time{0, 0, 0, day, month - 1, year - 1900};
    time_temp = mktime(&f_time);
    time_temp -= 24 * 60 * 60;
    struct tm *s_time = localtime(&time_temp);

    if( s_time->tm_mday > 0 && s_time->tm_mday < 10) {
        date_time = '0' + std::to_string(s_time->tm_mday) + ' ';
    } else {
        date_time = std::to_string(s_time->tm_mday) + ' ';
    }

    switch(s_time->tm_mon + 1) {
        case 1:
            date_time += "january ";
            break;
        case 2:
            date_time += "february ";
            break;
        case 3:
            date_time += "march ";
            break;
        case 4:
            date_time += "april ";
            break;
        case 5:
            date_time += "may ";
            break;
        case 6:
            date_time += "june ";
            break;
        case 7:
            date_time += "july ";
            break;
        case 8:
            date_time += "august ";
            break;
        case 9:
            date_time += "september ";
            break;
        case 10:
            date_time += "october ";
            break;
        case 11:
            date_time += "november ";
            break;
        case 12:
            date_time += "december ";
            break;
    }

    date_time = date_time + std::to_string(s_time->tm_year + 1900) + ", ";

    switch(s_time->tm_wday) {
        case 0:
            date_time += "sunday";
            break;
        case 1:
            date_time += "monday";
            break;
        case 2:
            date_time += "tuesday";
            break;
        case 3:
            date_time += "wednesday";
            break;
        case 4:
            date_time += "thursday";
            break;
        case 5:
            date_time += "friday";
            break;
        case 6:
            date_time += "saturday";
            break;
    }

    return date_time;
}
std::string DateTime::getTomorrow() const {
    std::string date_time;

    time_t time_temp;
    struct tm f_time{0, 0, 0, day, month - 1, year - 1900};
    time_temp = mktime(&f_time);
    time_temp += 24 * 60 * 60;
    struct tm *s_time = localtime(&time_temp);

    if( s_time->tm_mday > 0 && s_time->tm_mday < 10) {
        date_time = '0' + std::to_string(s_time->tm_mday) + ' ';
    } else {
        date_time = std::to_string(s_time->tm_mday) + ' ';
    }

    switch(s_time->tm_mon + 1) {
        case 1:
            date_time += "january ";
            break;
        case 2:
            date_time += "february ";
            break;
        case 3:
            date_time += "march ";
            break;
        case 4:
            date_time += "april ";
            break;
        case 5:
            date_time += "may ";
            break;
        case 6:
            date_time += "june ";
            break;
        case 7:
            date_time += "july ";
            break;
        case 8:
            date_time += "august ";
            break;
        case 9:
            date_time += "september ";
            break;
        case 10:
            date_time += "october ";
            break;
        case 11:
            date_time += "november ";
            break;
        case 12:
            date_time += "december ";
            break;
    }

    date_time = date_time + std::to_string(s_time->tm_year + 1900) + ", ";

    switch(s_time->tm_wday) {
        case 0:
            date_time += "sunday";
            break;
        case 1:
            date_time += "monday";
            break;
        case 2:
            date_time += "tuesday";
            break;
        case 3:
            date_time += "wednesday";
            break;
        case 4:
            date_time += "thursday";
            break;
        case 5:
            date_time += "friday";
            break;
        case 6:
            date_time += "saturday";
            break;
    }

    return date_time;
}
std::string DateTime::getFuture(unsigned int N) {
    std::string date_time;

    time_t time_temp;
    struct tm f_time{0, 0, 0, day, month - 1, year - 1900};
    time_temp = mktime(&f_time);
    time_temp += N * 24 * 60 * 60;
    struct tm *s_time = localtime(&time_temp);

    if( s_time->tm_mday > 0 && s_time->tm_mday < 10) {
        date_time = '0' + std::to_string(s_time->tm_mday) + ' ';
    } else {
        date_time = std::to_string(s_time->tm_mday) + ' ';
    }

    switch(s_time->tm_mon + 1) {
        case 1:
            date_time += "january ";
            break;
        case 2:
            date_time += "february ";
            break;
        case 3:
            date_time += "march ";
            break;
        case 4:
            date_time += "april ";
            break;
        case 5:
            date_time += "may ";
            break;
        case 6:
            date_time += "june ";
            break;
        case 7:
            date_time += "july ";
            break;
        case 8:
            date_time += "august ";
            break;
        case 9:
            date_time += "september ";
            break;
        case 10:
            date_time += "october ";
            break;
        case 11:
            date_time += "november ";
            break;
        case 12:
            date_time += "december ";
            break;
    }

    date_time = date_time + std::to_string(s_time->tm_year + 1900) + ", ";

    switch(s_time->tm_wday) {
        case 0:
            date_time += "sunday";
            break;
        case 1:
            date_time += "monday";
            break;
        case 2:
            date_time += "tuesday";
            break;
        case 3:
            date_time += "wednesday";
            break;
        case 4:
            date_time += "thursday";
            break;
        case 5:
            date_time += "friday";
            break;
        case 6:
            date_time += "saturday";
            break;
    }

    return date_time;
}
std::string DateTime::getPast(unsigned int N) {
    std::string date_time;

    time_t time_temp;
    struct tm f_time{0, 0, 0, day, month - 1, year - 1900};
    time_temp = mktime(&f_time);
    time_temp -= N * 24 * 60 * 60;
    struct tm *s_time = localtime(&time_temp);

    if( s_time->tm_mday > 0 && s_time->tm_mday < 10) {
        date_time = '0' + std::to_string(s_time->tm_mday) + ' ';
    } else {
        date_time = std::to_string(s_time->tm_mday) + ' ';
    }

    switch(s_time->tm_mon + 1) {
        case 1:
            date_time += "january ";
            break;
        case 2:
            date_time += "february ";
            break;
        case 3:
            date_time += "march ";
            break;
        case 4:
            date_time += "april ";
            break;
        case 5:
            date_time += "may ";
            break;
        case 6:
            date_time += "june ";
            break;
        case 7:
            date_time += "july ";
            break;
        case 8:
            date_time += "august ";
            break;
        case 9:
            date_time += "september ";
            break;
        case 10:
            date_time += "october ";
            break;
        case 11:
            date_time += "november ";
            break;
        case 12:
            date_time += "december ";
            break;
    }

    date_time = date_time + std::to_string(s_time->tm_year + 1900) + ", ";

    switch(s_time->tm_wday) {
        case 0:
            date_time += "sunday";
            break;
        case 1:
            date_time += "monday";
            break;
        case 2:
            date_time += "tuesday";
            break;
        case 3:
            date_time += "wednesday";
            break;
        case 4:
            date_time += "thursday";
            break;
        case 5:
            date_time += "friday";
            break;
        case 6:
            date_time += "saturday";
            break;
    }

    return date_time;
}
int DateTime::getDifference(DateTime& _date) {
    time_t time_temp1;
    struct tm f_time1{0, 0, 0, day, month - 1, year - 1900};
    time_temp1 = mktime(&f_time1);
    struct tm *time_out1 = localtime(&time_temp1);
    int _yday1 = time_out1->tm_yday + 1;

    time_t time_temp2;
    struct tm f_time2{0, 0, 0, _date.day, _date.month - 1, _date.year - 1900};
    time_temp2 = mktime(&f_time2);
    struct tm *time_out2 = localtime(&time_temp2);
    int _yday2 = time_out2->tm_yday + 1;

    int _yeardif = (year > _date.year) ? year - _date.year : _date.year - year;

    if (_yeardif == 0) {
        return (_yday1 > _yday2) ? (_yday1 - _yday2) : _yday2 - _yday1;
    } else {
        _yeardif = 365 * _yeardif;
        return (_yday1 > _yday2) ? _yeardif + _yday1 - _yday2 : _yeardif + _yday2 - _yday1;
    }

}
