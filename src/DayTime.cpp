//#include <iostream>
//#include <math.h>
//#include <algorithm>
#include "DayTime.h"

const char* weeks[] = { "sunday", "monday", "tuesday", "wednesday","thursday" , "friday", "saturday" };
const char* months[] = { "january", "february", "march", "april", "may", "june","july", "august", "september","october", "november", "december" };

DateTime::DateTime(int d , int m, int y){
	time_t t = time(0);
	struct tm* today = localtime(&t);

	today->tm_mday = d;
	today->tm_mon = m - 1;
	today->tm_year = y - 1900;

	all_time = mktime(today);
};
DateTime::DateTime() {
	all_time = time(0);
};
DateTime::DateTime(DateTime& a) {
	all_time = a.all_time;
};

string DateTime::getToday() {
	string s;
	tm* today = localtime(&all_time);
	if (today->tm_mday <= 9)
		s += '0';
	s += to_string(today->tm_mday);
	s += ' ';
	s += months[today->tm_mon];
	s += ' ' + to_string(today->tm_year + 1900) + ", ";
	s += weeks[today->tm_wday];
	return s;
}

string DateTime::getYesterday() {
	all_time -= 86400;
	string s=getToday();
	all_time += 86400;
	return s;
}
string DateTime::getTomorrow() {
	all_time += 86400;
	string s = getToday();
	all_time -= 86400;
	return s;
}
string DateTime::getFuture(unsigned int N) {
	all_time += 86400*N;
	string s = getToday();
	all_time -= 86400*N;
	return s;
};
string DateTime::getPast(unsigned int N) {
	all_time -= 86400 * N;
	string s = getToday();
	all_time += 86400 * N;
	return s;
};
double DateTime::getDifference(DateTime& a) {
	return (abs(all_time - a.all_time) / 86400);
};


