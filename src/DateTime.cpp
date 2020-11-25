#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <iostream>
#include <ctime>
#include <string>
#include <cctype>

DateTime::DateTime() {

	time_in = time(nullptr);

}

DateTime::DateTime(int day, int month, int year) {

	time_t rtime = time(nullptr);
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
	struct tm* timeinfo = localtime(&time_in);

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

	DateTime temp(*this);
	temp.time_in += (60 * 60 * 24) * (long)N;
	return temp.getToday();

}

std::string DateTime::getPast(unsigned int N) {

	DateTime temp(*this);
	temp.time_in -= (60 * 60 * 24) * (long)N;
	return temp.getToday();
	
}

double DateTime::getDifference(DateTime& second_in) {

	return abs(time_in - second_in.time_in) / (60 * 60 * 24);

}
