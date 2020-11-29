#include "DateTime.h"
#include <time.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

double DAY = 3600 * 24;

DateTime::DateTime(unsigned int new_day, unsigned int new_month, unsigned int new_year) {
	day = new_day;
	month = new_month - 1;
	year = new_year;
}

DateTime::DateTime(){
	time_t now;
	time(&now);
	tm* T = localtime(&now);
	day = T->tm_mday;
	month = T->tm_mon;
	year = 1900 + T->tm_year;
}

string DateTime::getToday() {
	return makeDate(getSec());
}

string DateTime::getYesterday() {
	return makeDate(getSec() - DAY);
}

string DateTime::getTomorrow() {
	return makeDate(getSec() + DAY);
}

string DateTime::getFuture(unsigned int N) {
	return makeDate(getSec() + N * DAY);
}

string DateTime::getPast(unsigned int N) {
	return makeDate(getSec() - N * DAY);
}

unsigned int DateTime::getDifference(DateTime& D) {
	return abs(getSec() - D.getSec()) / DAY;
}

string makeDate(time_t t) {
	vector<string> months{ "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };
	vector<string> weekday{ "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	tm* T = localtime(&t);
  string date = "";
	//mktime(T);
	date = to_string(T->tm_mday) + " " + months[T->tm_mon] + " " + to_string(T->tm_year) + ", " + weekday[T->tm_wday];
	return date;
}

time_t DateTime::getSec() {
	time_t t;
	time(&t);
	tm* T = localtime(&t);
	T->tm_year = year - 1900;
	T->tm_mon = month;
	T->tm_mday = day;
	t = mktime(T);
	return t;
}
