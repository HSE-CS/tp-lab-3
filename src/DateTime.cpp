#include "DateTime.h"

using namespace std;

DateTime::DateTime(int day, int month, int year) {
	time_t nul_time = 0;
	int day_in_month[12] = { 31,28,31,30,31,30, 31,31,30,31,30,31 };
	int amount_day = 0;

	for (int i = 1970; i < year; i++) {
		if (i % 4 == 0) {
			amount_day++;
		}
		amount_day += 365;
	}

	if ((year % 4 == 0) && (month > 2)) {
		amount_day++;
	}

	for (int i = 0; i < month - 1; i++) {
		amount_day += day_in_month[i];
	}

	amount_day += day;
	nul_time += amount_day * 3600 * 24 - 1;
	time_string = *gmtime(&nul_time);
}
DateTime::DateTime() {
	time_t nul_time;
	time(&nul_time);
	struct tm* copy;
	copy = &time_string;
	copy = localtime(&nul_time);
	time_string = *copy;
}

DateTime::DateTime(const DateTime& s) {
	time_string = s.time_string;
}

std::string DateTime::getToday() {
	const char* week[] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	const char* mounth[] = { "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };

	char output[100];

	if (time_string.tm_mday > 9) {
		output[0] = (time_string.tm_mday / 10 + '0');
		output[1] = ((time_string.tm_mday % 10) + '0');
	}
	else {
		output[0] = '0';
		output[1] = ((time_string.tm_mday % 10) + '0');
	}

	output[2] = ' ';

	int len = 0;
	int ind = 3;

	while (len < strlen(mounth[time_string.tm_mon])) {
		output[ind] = mounth[time_string.tm_mon][len];
		len++;
		ind++;
	}

	output[ind] = ' ';
	ind++;
	char year[11];

	int save = time_string.tm_year + 1900;
	int raz = 100000;
	int i = 0;

	while (raz != 0) {
		if (i == 0 && (save / raz == 0)) {
			raz = raz / 10;
		}
		else {
			year[i] = (save / raz) + '0';
			save = save - (save / raz * raz);
			raz = raz / 10;
			i++;
		}
	}

	year[i] = '\0';
	len = 0;

	while (year[len] >= '0' && year[len] <= '9' && len < strlen(year)) {
		output[ind] = year[len];
		len++;
		ind++;
	}

	output[ind] = ',';
	output[++ind] = ' ';
	ind++;

	len = 0;

	while (len < strlen(week[time_string.tm_wday])) {
		output[ind] = week[time_string.tm_wday][len];
		len++;
		ind++;
	}

	output[ind] = '\0';
	string str = string(output);
	return output;
}

std::string  DateTime::getYesterday() {
	DateTime yesterday_time;
	time_t time_yesterday = mktime(&time_string);
	time_yesterday -= 86400;
	yesterday_time.time_string = *gmtime(&time_yesterday);
	return yesterday_time.getToday();
}

std::string  DateTime::getTomorrow() {
	DateTime tommorow_time;
	time_t time_tommorow = mktime(&time_string);
	time_tommorow += 86400;
	tommorow_time.time_string = *gmtime(&time_tommorow);
	return tommorow_time.getToday();;
}

std::string  DateTime::getFuture(unsigned int N) {
	DateTime y_time;
	time_t time_y = mktime(&time_string);
	time_y += 86400 * N;
	y_time.time_string = *gmtime(&time_y);
	return y_time.getToday();
}

std::string DateTime::getPast(unsigned int N) {
	DateTime y_time;
	time_t time_y = mktime(&time_string);
	time_y -= 86400 * N;
	y_time.time_string = *gmtime(&time_y);
	return  y_time.getToday();
}

int DateTime::getDifference(DateTime& tim) {

	time_t time_y = mktime(&time_string);
	time_t time_y2 = mktime(&tim.time_string);
	time_t diff = 0;
	int days = 0;

	if (time_y >= time_y2) {
		diff = time_y - time_y2;
		days = diff / 86400;
		cout << days << endl;
		return days;
	}

	else {
		diff = time_y2 - time_y;
		days = diff / 86400;
		cout << days << endl;
		return days;
	}

}