#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <iostream>
#include <cmath>
#include <string.h>

DateTime::DateTime(int day, int mounth, int year)
{
	date = { 0, 0, 0, day, mounth, year };
	mktime(&date); // дополнит недостающей информацией date

}

DateTime::DateTime()
{
	time_t rawtime;
	struct tm* timeinfo;

	time(&rawtime);  // текущее время
	timeinfo = localtime(&rawtime);  // преобразование секунд в структуру tm
	date.tm_mday = timeinfo->tm_mday;
	date.tm_mon = timeinfo->tm_mon;
	date.tm_year = timeinfo->tm_year;
	date.tm_wday = timeinfo->tm_wday;
	mktime(&date);  
}

DateTime::DateTime(DateTime& dataTime)
{
	date = dataTime.date;
}

std::string DateTime::getToday()
{
	char result[100];
	strftime(result, 100, "%d %B %Y, %A", &date);
	/*for (int i = 0; i < strlen(result); ++i)
		if (islower(result[i]))
			tolower(result[i]);
	std::cout << result;*/
	return result;
}

std::string DateTime::getYesterday()
{
	return getPast(1);
}

std::string DateTime::getTomorrow()
{
	return getFuture(1);
}


std::string DateTime::getFuture(unsigned int N)
{
	time_t rawtime;
	struct tm* timeinfo;
	char result[100];
	rawtime = mktime(&this->date);
	std::cout << rawtime;
	rawtime += N * 60 * 60 * 24;
	
	timeinfo = localtime(&rawtime);
	strftime(result, 100, "%d %B %Y, %A", timeinfo);
	for (int i = 0; i < strlen(result); ++i)
		if (islower(result[i]))
			tolower(result[i]);
	return result;
}

std::string DateTime::getPast(unsigned int N)
{
	time_t rawtime;
	struct tm* timeinfo;
	char result[100];
	time(&rawtime);
	rawtime -= N * 60 * 60 * 24;
	timeinfo = localtime(&rawtime);
	strftime(result, 100, "%d %B %Y, %A", timeinfo);
	for (int i = 0; i < strlen(result); ++i)
		if (islower(result[i]))
			tolower(result[i]);
	return result;
}

int DateTime::getDifference(DateTime& secondDateTM)
{
	time_t firstData = mktime(&this->date); 
	time_t secondData = mktime(&secondDateTM.date);
	std::cout << firstData << " " << secondData << std::endl;
	return abs(firstData - secondData) / (60 * 60 * 24) + 1;
}

