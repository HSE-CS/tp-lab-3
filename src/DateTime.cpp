#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <ctime>
#include <iostream>
#include <algorithm>
//-----------help_func-------------------------------
struct tm* make_time_struct(int day,int month,int year) {
	tm time_in = { 0, 0, 0,day ,month - 1, year - 1900 };

	time_t time_temp = mktime(&time_in);

	tm* time_out = localtime(&time_temp);
	return time_out;
}

string make_date_string(struct tm * time_out) {
	char s1[40] = { 0 };

	strftime(s1, 40, "%d %B %Y, %A", time_out);

	string s = s1;
	for (char& c : s) c = tolower(c);
	return s;
}
//--------------------------methods----------------------------

DateTime::DateTime() {
	time_t now = time(0);
	tm* ltm = localtime(&now);
	this->day = ltm->tm_mday;
	this->month = 1 + ltm->tm_mon;
	this->year = 1970 + ltm->tm_year;
}

DateTime::DateTime(const DateTime&obj){
	this->day = obj.day;
	this->month = obj.month;
	this->year = obj.year;
}

DateTime::DateTime(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

string DateTime::getToday() {

	tm* time_out = make_time_struct(this->day,this->month,this->year);

	return make_date_string(time_out);
}

string DateTime::getTomorrow() {
	tm* time_out = make_time_struct(this->day + 1 , this->month , this->year);

	return make_date_string(time_out);

}

string DateTime::getFuture(unsigned int N) {
	tm* time_out = make_time_struct(this->day + N, this->month, this->year);
	return make_date_string(time_out);
}

string DateTime::getPast(unsigned int N) {
	tm* time_out = make_time_struct(this->day - N, this->month, this->year);
	return make_date_string(time_out);
}

int DateTime::getDifference(DateTime& obj) {
	tm temp_time1 = { 0, 0, 0, this->day, this->month - 1, this->year - 1900 };
	time_t time1 = mktime(&temp_time1);
	tm temp_time2 = { 0, 0, 0, obj.day, obj.month - 1, obj.year - 1900 }; 
	time_t time2 = mktime(&temp_time2);
	double sek = time2 > time1 ? difftime( time2,  time1) : difftime( time1,  time2);
	return sek / 86400;
}
