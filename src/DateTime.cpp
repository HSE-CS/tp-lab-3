#include "DateTime.h"
#include "time.h"
#include <math.h>
#include <string.h>

string toStr(tm *date)
{
	char newStr[30];

	strftime(newStr, 30, "%d %B %Y, %A", date);
	for (int i = 0; i < strlen(newStr); i++)
	{
		newStr[i] = tolower(newStr[i]);
	}

	return newStr;
}

tm* makeToday()
{
	time_t rightNow = time(0);
	tm *today = localtime(&rightNow);
	return today;
}

string makeOtherDay(int day, int month, int year, int days)
{
	tm* theDay = makeToday();
	theDay->tm_mday = day + days;
	theDay->tm_mon = month - 1;
	theDay->tm_year = year - 1900;
	time_t temp = mktime(theDay);
	theDay = localtime(&temp);
	return toStr(theDay);
}

//---------------class methods---------------//

DateTime::DateTime()
{	
	tm *today = makeToday();
	day = today->tm_mday;
	month = 1 + today->tm_mon;
	year = today->tm_year + 1900;
}

DateTime::DateTime(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

DateTime::DateTime(const DateTime& other)
{
	this->day = other.day;
	this->month = other.month;
	this->year = other.year;
}

string DateTime::getToday()// âîçâðàùåíèå òåêóùåé äàòû â âèäå ñòðîêè, ñ óêàçàíèåì äíÿ íåäåëè è íàçâàíèÿ ìåñÿöà(íàïðèìåð 07 november 2018, wedensday);
{
	return makeOtherDay(day, month, year, 0);
}

string DateTime::getYesterday()//âîçâðàùåíèå äàòû â÷åðàøíåãî äíÿ â âèäå ñòðîêè.
{
	return makeOtherDay(day, month, year, -1);
}

string DateTime::getTomorrow()//âîçâðàùåíèå äàòû çàâòðàøíåãî äíÿ â âèäå ñòðîêè.
{
	return makeOtherDay(day, month, year, 1);
}

string DateTime::getFuture(unsigned int N)//âîçâðàùåíèå äàòû ÷åðåç N äíåé â áóäóùåì;
{
	return makeOtherDay(day, month, year, N);
}

string DateTime::getPast(unsigned int N) // âîçâðàùåíèå äàòû ÷åðåç N äíåé â ïðîøëîì;
{
	return makeOtherDay(day, month, year, -N);
}

int DateTime::getDifference(DateTime &other)
{
	tm day1 = { 0, 0, 0, day, month - 1, year - 1900 };
	const int oneDay = 86400;
	tm day2 = { 0, 0, 0, other.day, other.month - 1, other.year - 1900 };
	time_t temp1 = mktime(&day1), temp2 = mktime(&day2);
	return temp1 > temp2 ? (temp1 - temp2) / oneDay : (temp2 - temp1) / oneDay;
} 
