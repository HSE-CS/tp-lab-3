#include "DateTime.h"
#include <string>
#include <ctime>

string days[7] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
string months[12] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};

string genDate(time_t t, int n){
    time_t yt = t + 60*60*24*n;
    struct tm *st = localtime(&yt);
    string day = st->tm_mday < 10 ? '0' + to_string(st->tm_mday) : to_string(st->tm_mday);
    string s = day + ' ' + months[st->tm_mon] + ' ' + to_string(st->tm_year+1900) + ", " + days[st->tm_wday];
    return s;
}

DateTime::DateTime() {
    t = time(nullptr);
}

DateTime::DateTime(const DateTime &d) {
    t = d.t;
}

DateTime::DateTime(int d, int m, int y) {
    t = time(nullptr);
    struct tm *st = localtime(&t);
    st->tm_mday = d;
    st->tm_mon = m - 1;
    st->tm_year = y - 1900;
    t = mktime(st);
}

string DateTime::getToday(){
    return genDate(t, 0);
}
string DateTime::getYesterday(){
    return genDate(t, -1);
}
string DateTime::getTomorrow(){
    return genDate(t, 1);
}
string DateTime::getFuture(unsigned int N){
    return genDate(t, N);
}
string DateTime::getPast(unsigned int N){
    return genDate(t, -N);
}

int DateTime::getDifference(DateTime& date){
    time_t r = t > date.t ? t - date.t: date.t - t;
    return r/(60*60*24);
}

