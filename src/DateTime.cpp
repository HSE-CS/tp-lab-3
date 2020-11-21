#define _CRT_SECURE_NO_WARNINGS
//#include "../include/DateTime.h"
#include "DateTime.h"


DateTime::DateTime() {
	time_t time_;
	time(&time_);
	tm* timeinfo;
	timeinfo = localtime(&time_);

	timer.tm_year = timeinfo->tm_year;
	timer.tm_mon = timeinfo->tm_mon;
	timer.tm_mday = timeinfo->tm_mday;
	mktime(&timer);
}


DateTime::DateTime(const DateTime& dateToCopy) {
	timer.tm_year = dateToCopy.timer.tm_year;
	timer.tm_mon = dateToCopy.timer.tm_mon;
	timer.tm_mday = dateToCopy.timer.tm_mday;
	mktime(&timer);
}


DateTime::DateTime(int day, int month, int year) {
	timer = tm{ 0,0, 0, day, month - 1, year - 1900 };
	mktime(&timer);
}


std::string DateTime::getToday() {
	char buff[100];
	strftime(buff, 80, "%d %B %Y, %A", &timer);
	std::string ans = buff;
	for (size_t i = 0; i < ans.size(); i++) {
		if (ans[i] >= 'A' && ans[i] <= 'Z') ans[i] += 'a' - 'A';
	}
	return ans;
}


std::string DateTime::getYesterday() {
	DateTime yesterday(timer.tm_mday - 1, timer.tm_mon + 1, timer.tm_year + 1900);
	std::string buff = yesterday.getToday();
	return buff;
}


std::string DateTime::getTomorrow() {
	DateTime tomorrow(timer.tm_mday + 1, timer.tm_mon + 1, timer.tm_year + 1900);
	std::string buff = tomorrow.getToday();
	return buff;
}


std::string DateTime::getFuture(unsigned int N) {
	DateTime future(timer.tm_mday + N, timer.tm_mon + 1, timer.tm_year + 1900);
	std::string buff = future.getToday();
	return buff;
}


std::string DateTime::getPast(unsigned int N) {
	DateTime past(timer.tm_mday - N, timer.tm_mon + 1, timer.tm_year + 1900);
	std::string buff = past.getToday();
	return buff;
}


int DateTime::getDifference(DateTime& diff) {
	time_t num1 = mktime(&timer);
	time_t num2 = mktime(&diff.timer);
	return abs(int(difftime(num1, num2) / (60 * 60 * 24)));
}