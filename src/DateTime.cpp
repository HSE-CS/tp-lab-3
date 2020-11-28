#include "DateTime.h"
#include <cmath>
#include <ctime>
#include <string>
#include <cstring>

const char *weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

DateTime::DateTime(){
    this->seconds = time(NULL);

    this->time_x = localtime(&(this->seconds));
    this->seconds = mktime(this->time_x);
}

DateTime::DateTime(int day, int month, int year){
    year = year < 1900 ? 1900 : year;
//    struct tm init = {
//        .tm_mday = day,
//        .tm_mon = month - 1,
//        .tm_year = year - 1900
//    };

    struct tm init{};
    init.tm_mday = day;
    init.tm_mon = month - 1;
    init.tm_year = year - 1900;

    this->seconds = mktime(&init);
    this->time_x = &init;
}

DateTime::DateTime(DateTime &datetime){
//    struct tm init = {
//        .tm_mday = datetime.time_x->tm_mday,
//        .tm_mon = datetime.time_x->tm_mon,
//        .tm_year = datetime.time_x->tm_year
//    };

    struct tm init{};
    init.tm_mday = datetime.time_x->tm_mday;
    init.tm_mon = datetime.time_x->tm_mon;
    init.tm_year = datetime.time_x->tm_year;


    this->seconds = mktime(&init);
    this->time_x = &init;
}

struct tm DateTime::getDayByDelta(long long N){
    struct tm date = *(this->time_x);
    date.tm_mday += N;
    mktime(&date);
    return date;
}

std::string DateTime::toString(struct tm time13){


    char buffer[80] = {'\0'};
    strftime(buffer, sizeof(buffer), "%d %B %Y", &time13);

    int weekday = time13.tm_wday;
    sprintf(buffer, "%s, %s", buffer, weekdays[weekday]);

    for(size_t i = 0; i < strlen(buffer); i++){
        buffer[i] = tolower(buffer[i]);
    }
    std::string str(buffer);
    return str;
}

std::string DateTime::getToday(){
    return toString(*(this->time_x));
}

std::string DateTime::getTomorrow(){
    return toString(getDayByDelta(1));
}

std::string DateTime::getYesterday(){
    return toString(getDayByDelta(-1));
}

std::string DateTime::getFuture(unsigned int N){
    return toString(getDayByDelta(N));
}

std::string DateTime::getPast(unsigned int N){
    return toString(getDayByDelta(-N));
}

unsigned int DateTime::getDifference(DateTime& second){
    int seconds_dif = abs(this->seconds - second.seconds);
    return seconds_dif / 60 / 60 / 24;
}
