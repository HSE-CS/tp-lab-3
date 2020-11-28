#include "DateTime.h"

DateTime::DateTime(){
    time_t current_date = time(NULL);
    date = *localtime(&current_date);
    mktime(&date);
}

DateTime::DateTime(const DateTime& first_date){
    date = first_date.date;
    mktime(&date);
}

DateTime::DateTime(int day, int month, int year){
    date = {0, 0, 0, day, month-1, year-1900};
    mktime(&date);
}

string DateTime::getFuture(unsigned int N){
    DateTime tmp_date(date.tm_mday, date.tm_mon + 1, date.tm_year + 1900);
    tmp_date.date.tm_mday += N;
    mktime(&tmp_date.date);
    char str[80];
    strftime(str,80,"%d %B %Y, %A", &tmp_date.date);
    for (int i = 0; i < 100; i++){
		if (str[i] >= 'A') str[i] = tolower(str[i]);
	}
    return str;
}

string DateTime::getPast(unsigned int N){
    return getFuture(-N);
}

string DateTime::getYesterday(){
	return getPast(1);
}

string DateTime::getTomorrow(){
	return getFuture(1);
}

string DateTime::getToday(){
	return getFuture(0);
}

int DateTime::getDifference(DateTime& tmp_date){
    return difftime(mktime(&date), mktime(&tmp_date.date)) / 86400;
}