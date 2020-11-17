#ifndef _DATETIME_H_
#define _DATETIME_H_

#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <string>
#include "iostream"
class DateTime
{
private:
	tm date;
public:
	DateTime(int day, int month, int year)
	{
		date = tm{ 0, 0, 0, day, month - 1, year - 1900 };
		mktime(&date); 
	}
	DateTime()
	{
		time_t rawtime;
		struct tm* timeinfo;

		time(&rawtime);  // получить текущую дату, выраженную в секундах
		timeinfo = localtime(&rawtime);  // текущее локальное время, представленное в структуре

		date.tm_mday = timeinfo->tm_mday;
		date.tm_mon = timeinfo->tm_mon;
		date.tm_year = timeinfo->tm_year;
		date.tm_wday = timeinfo->tm_wday;
		mktime(&date);  //Перевод структуры timeptr в time_t
	}
	DateTime(const DateTime &_date)
	{
		date = _date.date;
	}
	std::string getToday()const; //- возвращение текущей даты в виде строки, с указанием дня недели и названия месяца(например 07 november 2018, wedensday);
	std::string getYesterday(); //- возвращение даты вчерашнего дня в виде строки.
	std::string getTomorrow() ; //- возвращение даты завтрашнего дня в виде строки.
	DateTime getFuture(unsigned int N) const; //-возвращение даты через N дней в будущем;
	DateTime getPast(unsigned int N); //-возвращение даты через N дней в прошлом;
	int getDifference(DateTime&); //-для расчёта разницы(в днях) между двумя датами
	
};
std::string lower(char* buffer);
#endif
