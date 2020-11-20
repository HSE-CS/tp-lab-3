#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <string>
#include <cctype>
#include <iostream>
#include "DateTime.h"



DateTime::DateTime() {
	time_t now_time = time(0);
	tm* time;
	time = localtime(&now_time);
	datetime.tm_mday = time->tm_mday;
	datetime.tm_mon = time->tm_mon;
	datetime.tm_year = time->tm_year;
	mktime(&datetime);
};
DateTime::DateTime(int day, int month,int year) {
	datetime.tm_mday = day;
	datetime.tm_mon = month - 1;
	datetime.tm_year = year - 1900;
	mktime(&datetime);
}

DateTime::DateTime(const DateTime& new_datetime) {
	datetime = new_datetime.datetime;
}

string strDatetime(tm* datetime) {
	char buffer[80];
	strftime(buffer, 80, "%d %B %Y, %A", datetime);
	string result = buffer;
	for (auto& s : result) {
		s = tolower(s);
	}
	return result;
}

string DateTime::getToday(){
	return strDatetime(&datetime);
}

string DateTime::getYesterday() const {
	return getPast(1);
}

string DateTime::getFuture(unsigned int N) {
	time_t time;
	time = mktime(&datetime);
	time += N * 60 * 60 * 24;
	return strDatetime(localtime(&time));
}

string DateTime::getTomorrow() {
	return getFuture(1);
}

string DateTime::getPast(unsigned int N) const {
	tm time = datetime;
	time.tm_mday -= N;
	return strDatetime(&time);
}

int DateTime::getDifference(DateTime& time){
	int seconds = abs(difftime(mktime(&time.datetime), mktime(&datetime)));
	return seconds / 60 / 60 / 24;
}