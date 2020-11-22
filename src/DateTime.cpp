#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <ctime>
#include <string>
#include <iostream>
#include <cmath>

DateTime::DateTime(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

DateTime::DateTime() {
	time_t rawtime;
	struct tm* timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	this->day = timeinfo->tm_mday;
	this->month = 1 + timeinfo->tm_mon;
	this->year = 1900 + timeinfo->tm_year;
}

DateTime::DateTime(const DateTime& date) {
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
}

string resultDate(int day, int month, int year) {
	tm date = { 0, 0, 0, day, month - 1, year - 1900 };
	time_t rawtime = mktime(&date);
	struct tm* timeinfo = localtime(&rawtime);
	char buffer[100] = { 0 };
	strftime(buffer, 100, "%d %B %Y, %A", timeinfo);

	string result = buffer;
	for (auto& a : result) {
		a = tolower(a);
	}

	return result;
}

string DateTime::getToday() {
	return resultDate(this->day, this->month, this->year);
}

string DateTime::getYesterday() {
	return resultDate(this->day - 1, this->month, this->year);
}

string DateTime::getTomorrow() {
	return resultDate(this->day + 1, this->month, this->year);
}

string DateTime::getFuture(unsigned int N) {
	return resultDate(this->day + N, this->month, this->year);
}

string DateTime::getPast(unsigned int N) {
	return resultDate(this->day - N, this->month, this->year);
}

int DateTime::getDifference(DateTime& date) {
	tm first = { 0, 0, 0, this->day, this->month - 1, this->year - 1900 };
	tm second = { 0, 0, 0, date.day, date.month - 1, date.year - 1900};
	time_t date1 = mktime(&first);
	time_t date2 = mktime(&second);

	int result = abs(difftime(date1, date2)) / (60 * 60 * 24);
	return result;
}