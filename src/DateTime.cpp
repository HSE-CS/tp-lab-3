#include <string>
#include <ctime>
#include "DateTime.h"

using namespace std;

//time_t now = time(NULL);

char * weekday[] = { (char*)"sunday", (char*)"monday",
				(char*)"tuesday", (char*)"wednesday",
				(char*)"thursday", (char*)"friday", (char*)"saturday" };

const char* months[] = { "january", "february", "march",
						"april", "may", "june", "july",
						"august", "september",
						"october","november",
						"december" };

string DateTime::getToday()
{
	struct tm nowLocal;
	//time_t now = time(NULL);
	nowLocal = *localtime(&timer);
	year = nowLocal.tm_year + 1900;
	month = nowLocal.tm_mon + 1;
	day = nowLocal.tm_mday;
	mktime(&nowLocal);
	if (day < 10)
		return "0" + to_string(day) + ' ' + months[nowLocal.tm_mon] + ' ' + to_string(year) + ", " + weekday[nowLocal.tm_wday];
	else return to_string(day) + ' ' + months[nowLocal.tm_mon] + ' ' + to_string(year) + ", " + weekday[nowLocal.tm_wday]; //weekday[nowLocal.tm_wday] removed due to tests

}

string DateTime::getYesterday()
{
	DateTime temp(*this);
	temp.timer -= 24 * 60 * 60;
	return temp.getToday();
}

string DateTime::getTomorrow()
{
	DateTime temp(*this);
	temp.timer += 24 * 60 * 60;
	return temp.getToday();
}

string DateTime::getFuture(uint16_t N)
{
	DateTime temp(*this);
	temp.timer += N * 24 * 60 * 60;
	return temp.getToday();
}

string DateTime::getPast(uint16_t N)
{
	DateTime temp(*this);
	temp.timer -= N * 24 * 60 * 60;
	return temp.getToday();
}

unsigned int DateTime::getDifference(DateTime d1)
{
	return abs(d1.timer - this->timer) / (24 * 60 * 60);
}