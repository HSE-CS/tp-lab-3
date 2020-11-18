#include <string>
#include <ctime>
#include "DateTime.h"

using namespace std;

//time_t now = time(NULL);

char * weekday[] = { (char*)"Sunday", (char*)"Monday",
				(char*)"Tuesday", (char*)"Wednesday",
				(char*)"Thursday", (char*)"Friday", (char*)"Saturday" };

string DateTime::getToday()
{
	struct tm nowLocal;
	//time_t now = time(NULL);
	nowLocal = *localtime(&timer);
	year = nowLocal.tm_year + 1900;
	month = nowLocal.tm_mon + 1;
	day = nowLocal.tm_mday;
	mktime(&nowLocal);
	return to_string(day) + ' ' + to_string(month) + ' ' + to_string(year) + ", " + weekday[nowLocal.tm_wday];

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

string DateTime::getFuture(unsigned int N)
{
	DateTime temp(*this);
	temp.timer += N * 24 * 60 * 60;
	return temp.getToday();
}

string DateTime::getPast(unsigned int N)
{
	DateTime temp(*this);
	temp.timer -= N * 24 * 60 * 60;
	return temp.getToday();
}

unsigned int DateTime::getDifference(DateTime d1)
{
	return abs(d1.timer - this->timer) / (24 * 60 * 60);
}