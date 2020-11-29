#include "DateTime.h"
#include <iostream>
#include <ctime>
#include <string>
#include <cctype>

DateTime::DateTime() {
	f_time = time(nullptr);
}

DateTime::DateTime(unsigned int day, unsigned int month, unsigned int year) {

	time_t s_time = time(nullptr);
	struct tm* i_time = localtime(&s_time);

	i_time->tm_mday = day;
	i_time->tm_mon = month - 1;
	i_time->tm_year = year - 1900;
	f_time = mktime(i_time);
}

DateTime::DateTime(DateTime& k) {
	f_time = k.f_time;
}

std::string DateTime::getToday() {

	char res[100];
	struct tm* i_time = localtime(&f_time);
	strftime(res, 100, "%d %B %Y, %A", i_time);
	std::string res1 = res;

	for (size_t i = 0; i < res1.size(); i++) {

		if (res1[i] >= 'A') {
			res1[i] += 'a' - 'A';
		}
	}
	return res1;
}

std::string DateTime::getYesterday() {
	return getPast(1);
}

std::string DateTime::getTomorrow() {
	return getFuture(1);
}

std::string DateTime::getFuture(unsigned int N) {

	DateTime st(*this);
	st.f_time += 86400 * (long)N;
	return st.getToday();
}

std::string DateTime::getPast(unsigned int N) {

	DateTime st(*this);
	st.f_time -= 86400 * (long)N;
	return st.getToday();
}

double DateTime::getDifference(DateTime& nex) {
	int dif = f_time - nex.f_time;
	return abs(dif) / 86400;
}
