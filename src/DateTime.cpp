#include "DateTime.h"
#include <iostream>
#include <string.h>


using namespace std;

string months[12] = {"january", "february", "march", "april", "may", "june", "july", "august", "septeber", "october", "november", "december" };
string days[7] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
int countDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };



DateTime::DateTime(int day, int month, int year){
	now = time(NULL);
	date = localtime(&now);
	date->tm_mday = day;
	date->tm_mon = month - 1;
	date->tm_year = year - 1900;
	now = mktime(date);
	mktime( date );
}

DateTime::DateTime() {
	now = time(NULL);
	date = localtime(&now);
}

DateTime::DateTime(const DateTime& object) {
	now = object.now;
	date = localtime(&now); 
}

string DateTime::answer(struct tm *time) {
	string  answer = "";
	if (time->tm_mday < 10) {
		answer += "0" + to_string(time->tm_mday);
	}
	else {
		answer += to_string(time->tm_mday);
	}
	answer += " " + months[time->tm_mon] + " " + to_string(time->tm_year + 1900) + ", " + days[time->tm_wday];

	return answer;
}

string DateTime::getToday() {
	return answer(date);
}

string DateTime::getPast(unsigned int N){
	string past = "";
	int day = date->tm_mday - N;
	int month = date->tm_mon;
	int year = date->tm_year;

	if (day < 0) {
		day += countDays[month - 1];
		month--;
		if (month < 0) {
			month = 11 + month;
			year--;
		}
	}
	now = time(NULL);
	tm *newdate = localtime(&now);
	newdate->tm_mday = day;
	newdate->tm_mon = month;
	newdate->tm_year = year;
	mktime( newdate );
	return answer(newdate);
}

string DateTime::getFuture(unsigned int N) {
	string past = "";
	int day = date->tm_mday + N;
	int month = date->tm_mon;
	int year = date->tm_year;

	if (day > countDays[month]){
		day -= countDays[month];
		month++;
		if (month > 11) {
			month = month - 11;
			year++;
		}
	}
	now = time(NULL);
	tm* newdate = localtime(&now);
	newdate->tm_mday = day;
	newdate->tm_mon = month;
	newdate->tm_year = year;
	mktime(newdate);
	return answer(newdate);
}

string DateTime::getTomorrow()
{
	return getFuture(1);
}

string DateTime::getYesterday()
{
	return getPast(1);
}

int DateTime::getDifference(DateTime& newdate)
{
	time_t targetTime = newdate.now;
	return abs(targetTime - now) / (24 * 60 * 60);

}