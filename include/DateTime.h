#ifndef DATETIME_H
#define DATETIME_H
#include <ctime>
#include <string>
class DateTime
{
private:
	time_t time_in_sec;
	tm timetable;
public:
	DateTime(int, int, int);
	DateTime();
	DateTime(const DateTime&);
	std::string getToday(); //- возвращение текущей даты в виде строки, с указанием дня недели и названия месяца(например 07 november 2018, wedensday);
	std::string getYesterday(); //- возвращение даты вчерашнего дня в виде строки.
	std::string getTomorrow(); //- возвращение даты завтрашнего дня в виде строки.
	time_t getFuture(unsigned int N); //- возвращение даты через N дней в будущем;
	time_t getPast(unsigned int N); //- возвращение даты через N дней в прошлом;
	time_t getDifference(DateTime&); //- для расчёта разницы(в днях) между двумя датами

};
#endif