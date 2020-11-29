#include "DateTime.h"

DateTime::DateTime(unsigned day, unsigned month, unsigned year) {

	time_t rtime = time(nullptr);
	struct tm* tmp = localtime(&rtime);

	tmp->tm_mday = day;
	tmp->tm_mon = month - 1;
	tmp->tm_year = year - 1900;

	time_input = mktime(tmp);

}

DateTime::DateTime() {

	time_input = time(nullptr);

}

DateTime::DateTime(DateTime &b) {

	time_input = b.time_input;

}

std::string DateTime::getToday() {

	char time[100];
	struct tm* tmp = localtime(&time_input);

	strftime(time, 100, "%d %B %Y, %A", tmp);
	std::string result;
    result.append(time);
	return result;

}

std::string DateTime::getYesterday() {

	return getPast(1);

}

std::string DateTime::getTomorrow() {

	return getFuture(1);

}

std::string DateTime::getPast(unsigned int N)
{
    time_t past = this->time_input - 60*60*24*N;
    char time[100];

    strftime(time,100, "%d %B %Y, %A", gmtime(&(past)));
    std::string tmp;
    tmp.append(time);
    return tmp;
}

std::string DateTime::getFuture(unsigned int N)
{
    time_t future = this->time_input + 60*60*24*N;
    char time[100];

    strftime(time,100, "%d %B %Y, %A", gmtime(&(future)));
    std::string tmp;
    tmp.append(time);
    return tmp;
}

int DateTime::getDifference(DateTime &b)
{
    time_t tmp = abs(this->td - b.td);
    return (int)(tmp/60/60/24);
}