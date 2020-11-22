#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <ctime>
#include <cmath>

string getStringDate(int day, int month, int year)
{
	struct tm currentTime = { 0, 0, 0, day, month - 1, year - 1900 };
	time_t ct = mktime(&currentTime);
	struct tm* timeinfo = localtime(&ct);
	char buffer[50];
	strftime(buffer, 50, "%d %B %Y, %A", timeinfo);
	string result = buffer;
	for (auto& a : result) {
		a = tolower(a);
	}
	return result;
}

string DateTime::getToday() {
	return getStringDate(this->day, this->month, this->year);
}
string DateTime::getYesterday() {
	return getStringDate(this->day - 1, this->month, this->year);
}
string DateTime::getTomorrow() {
	return getStringDate(this->day + 1, this->month, this->year);
}
string DateTime::getFuture(unsigned int N) {
	return getStringDate(this->day + N, this->month, this->year);
}
string DateTime::getPast(unsigned int N) {
	return getStringDate(this->day - N, this->month, this->year);
}
int DateTime::getDifference(DateTime& dateTime1) {
	struct tm currentDate = { 0, 0, 0, this->day, this->month - 1, this->year - 1900 };
	struct tm dateToCompare = { 0, 0, 0, dateTime1.day, dateTime1.month - 1, dateTime1.year - 1900 };

	time_t time1 = mktime(&currentDate);
	time_t time2 = mktime(&dateToCompare);

	return abs(difftime(time1, time2)) / (60 * 60 * 24);

}

DateTime::DateTime() {
	time_t currentTime = time(0);
	tm* currentLocalTime = localtime(&currentTime);
	this->day = currentLocalTime->tm_mday;
	this->month = currentLocalTime->tm_mon + 1;
	this->year = currentLocalTime->tm_year + 1970;
}

DateTime::DateTime(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

DateTime::DateTime(DateTime& dateTime) {
	this->day = dateTime.day;
	this->month = dateTime.month;
	this->year = dateTime.year;
}