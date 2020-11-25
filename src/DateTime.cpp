#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <iostream>
#include <ctime>
#include <string>
#include <cctype>

DateTime::DateTime() {

	time_t rtime;
	struct tm* timeinfo = localtime(&rtime);

	time(&rtime);
	time_in.tm_mday = timeinfo->tm_mday;
	time_in.tm_mon = timeinfo->tm_mon;
	time_in.tm_year = timeinfo->tm_year;
	time_in.tm_wday = timeinfo->tm_wday;
	mktime(&time_in);

}

DateTime::DateTime(int day, int month, int year) {

	time_in = { 0, 0, 0, day, month - 1, year - 1900 };
	mktime(&time_in);

}

DateTime::DateTime(DateTime& inform) {

	time_in = inform.time_in;

}

std::string DateTime::getToday() {

	char res[100];
	
	strftime(res, 100, "%d %B %Y, %A", timeinfo);
	std::string result = res;

	for (size_t i = 0; i < result.size(); i++) {
		if (result[i] >= 'A' && result[i] <= 'Z') result[i] += 'a' - 'A';
	}

	return result;
}

std::string DateTime::getYesterday() {

	return getPast(1);

}

std::string DateTime::getTomorrow() {

	return getFuture(1);

}

std::string DateTime::getFuture(unsigned int N) {

	char res[100];
	time_t rtime = mktime(&this->time_in);
	rtime += N * 60 * 60 * 24;
	struct tm* timeinfo = localtime(&rtime);

	strftime(res, 100, "%d %B %Y, %A", timeinfo);
	std::string result = res;

	for (size_t i = 0; i < result.size(); i++) {
		if (result[i] >= 'A' && result[i] <= 'Z') result[i] += 'a' - 'A';
	}

	return result;

}

std::string DateTime::getPast(unsigned int N) {

	char res[100];
	time_t rtime = mktime(&this->time_in);
	rtime -= N * 60 * 60 * 24;
	struct tm* timeinfo = localtime(&rtime);

	strftime(res, 100, "%d %B %Y, %A", timeinfo);
	std::string result = res;

	for (size_t i = 0; i < result.size(); i++) {
		if (result[i] >= 'A' && result[i] <= 'Z') result[i] += 'a' - 'A';
	}

	return result;
	
}

double DateTime::getDifference(DateTime& second_in) {

	time_t first = mktime(&this->time_in);
	time_t second = mktime(&second_in.time_in);
	return (abs(first - second) / (60 * 60 * 24));

}
