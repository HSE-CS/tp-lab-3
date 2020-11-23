#include "../include/DateTime.h"

std::string weekday[7]{ "sunday", "monday", "tuesday", "wednesday",
		"thursday", "friday", "saturday" };
std::string month[12]{ "january", "february", "march", "april", "may", "june", "july", 
"august", "september", "october", "november", "december" };

#define HOURS 24
#define MINUTES SECONDS
#define SECONDS 60

DateTime::DateTime()
{
	time(&(this->time_in_sec));
	int error = localtime_s(&(this->timetable), &(this->time_in_sec));
	if (error) throw 6;
}

DateTime::DateTime(int day, int month, int year) {
	this->timetable.tm_year = year - 1900;
	this->timetable.tm_mon = month - 1;
	this->timetable.tm_mday = day;
	this->time_in_sec = mktime(&(this->timetable));
}

DateTime::DateTime(const DateTime& copied) : time_in_sec(copied.time_in_sec), 
timetable(copied.timetable) {}

std::string DateTime::getToday() {
	std::string this_date;
	if (this->timetable.tm_mday < 10) this_date += "0";
	this_date += std::to_string(this->timetable.tm_mday);
	this_date += std::string(" ");
	this_date += month[this->timetable.tm_mon];
	this_date += std::string(" ");
	this_date += std::to_string(this->timetable.tm_year + 1900);
	this_date += std::string(", ");
	this_date += weekday[this->timetable.tm_wday];
	return this_date;
}//- возвращение текущей даты в виде строки, с указанием дня недели и названия месяца(например 07 november 2018, wedensday);

std::string DateTime::getYesterday() {
	DateTime yesterday(*this);
	yesterday.timetable.tm_mday--;
	mktime(&(yesterday.timetable));
	return yesterday.getToday();
}//- возвращение даты вчерашнего дня в виде строки.

std::string DateTime::getTomorrow() {
	DateTime tomorrow(*this);
	tomorrow.timetable.tm_mday++;
	mktime(&(tomorrow.timetable));
	return tomorrow.getToday();
}//- возвращение даты завтрашнего дня в виде строки.

std::string DateTime::getFuture(unsigned int N) {
	DateTime future(*this);
	future.timetable.tm_mday += N;
	mktime(&(future.timetable));
	return future.getToday();
}//- возвращение даты через N дней в будущем;

std::string DateTime::getPast(unsigned int N) {
	DateTime past(*this);
	past.timetable.tm_mday -= N;
	mktime(&(past.timetable));
	return past.getToday();
}//- возвращение даты через N дней в прошлом;

size_t DateTime::min(size_t one, size_t two) {
	if (one < two) return one;
	else return two;
}

size_t DateTime::max(size_t one, size_t two) {
	if (one >= two) return one;
	else return two;
}

size_t DateTime::getDifference(DateTime& that) {
	size_t diff = 0;
	size_t diff_in_seconds = max(this->time_in_sec, that.time_in_sec) - min(this->time_in_sec, that.time_in_sec);
	diff = (diff_in_seconds) / (SECONDS * MINUTES * HOURS);
	return diff;
}//- для расчёта разницы(в днях) между двумя датами

