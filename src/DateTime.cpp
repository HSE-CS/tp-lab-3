#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <iostream>
#include <ctime>
#include <string>

DateTime::DateTime() {

	time_in = time(NULL);

}

DateTime::DateTime(int day, int month, int year) {

	time_t rtime = time(NULL);
	struct tm* timeinfo = localtime(&rtime);

	timeinfo->tm_mday = day;
	timeinfo->tm_mon = month - 1;
	timeinfo->tm_year = year - 1900;

	time_in = mktime(timeinfo);

}

DateTime::DateTime(DateTime& inform) {

	time_in = inform.time_in;

}

std::string DateTime::getToday() {

	char res[100];
	time_t rtime = time(NULL);
	struct tm* timeinfo = localtime(&rtime);

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
	time_t rtime = time(NULL);
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
	time_t rtime = time(NULL);
	rtime -= N * 60 * 60 * 24;
	struct tm* timeinfo = localtime(&rtime);

	strftime(res, 100, "%d %B %Y, %A", timeinfo);
	std::string result = res;

	for (size_t i = 0; i < result.size(); i++) {
		if (result[i] >= 'A' && result[i] <= 'Z') result[i] += 'a' - 'A';
	}

	return result;
	
}

double DateTime::getDifference(DateTime& second) {

	return (abs(time_in - second.time_in) / (60 * 60 * 24));

}
