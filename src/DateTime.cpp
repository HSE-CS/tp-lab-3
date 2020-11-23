#include "DateTime.h"
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX_DATETIME_STR_LEN 64

DateTime::DateTime(){
    time_t now = time(NULL);
    tm *date = localtime(&now);
    tm *date_copy = (tm*)calloc(1, sizeof(tm));
    if (date_copy == NULL) exit(1);
    date->tm_hour = 0;
    date->tm_min = 0;
    date->tm_sec = 0;
    memcpy(date_copy, date, sizeof(tm));
    this->date = date_copy;
}

DateTime::DateTime(DateTime& other){
    tm *date_copy = (tm*)malloc(sizeof(tm));
    if (date_copy == NULL) exit(1);
    memcpy(date_copy, other.date, sizeof(tm));
    this->date = date_copy;
}

DateTime::DateTime(uint8_t day, uint8_t month, uint32_t year){
    tm* date = (tm*)calloc(1, sizeof(tm));
    if (date == NULL) exit(1);
    // Who needs input validation anyway?
    date->tm_mday = day;
    date->tm_mon = month-1;
    date->tm_year = year-1900;
    time_t tmp = mktime(date);
    memcpy(date, localtime(&tmp), sizeof(tm));
    this->date = date;
}

std::string DateTime::getToday(){
    char *date_str = (char*)calloc(1, MAX_DATETIME_STR_LEN);
    if (date_str == NULL) exit(1);
    strftime(date_str, MAX_DATETIME_STR_LEN, "%d %B %Y, %A", this->date);
    // Inefficient and lazy
    for (int i = 0; i < MAX_DATETIME_STR_LEN; ++i)
        date_str[i] = tolower(date_str[i]);
    return std::string(date_str);
}

std::string DateTime::getYesterday(){
    return this->getPast(1);
}

std::string DateTime::getTommorow(){
    return this->getFuture(1);
}

std::string DateTime::getPast(uint32_t n){
    time_t offset_time = mktime(this->date) - n*24*60*60;
    tm *new_date = localtime(&offset_time);
    DateTime new_datetime(new_date->tm_mday, new_date->tm_mon+1, new_date->tm_year+1900);
    return new_datetime.getToday();
}

std::string DateTime::getFuture(uint32_t n){
    time_t offset_time = mktime(this->date) + n*24*60*60;
    tm *new_date = localtime(&offset_time);
    DateTime new_datetime(new_date->tm_mday, new_date->tm_mon+1, new_date->tm_year+1900);
    return new_datetime.getToday();
}

uint32_t DateTime::getDifference(DateTime& other){
    return abs((int32_t)mktime(this->date) - (int32_t)mktime(other.date))/(60*60*24);
}