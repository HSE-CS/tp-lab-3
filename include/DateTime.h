#ifndef DATATIME_H
#define DATATIME_H

#include <ctime>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

class DateTime
{
private:
	struct tm now_date;
public:
	DateTime(int, int, int); //конструктор с тремя числовыми параметрами(день, месяц, год);
	DateTime(void); //конструктор без параметров(объект использует текущую дату);
	DateTime(DateTime&); //конструктор копирования(создаём копию другого объекта);
	string getToday(); //возвращение текущей даты в виде строки, с указанием дня недели и названия месяца(например 07 november 2018, wedensday);
	string getYesterday(); //возвращение даты вчерашнего дня в виде строки.
	string getTomorrow(); //возвращение даты завтрашнего дня в виде строки.
	string getFuture(unsigned int); //возвращение даты через N дней в будущем;
	string getPast(unsigned int);  //возвращение даты через N дней в прошлом;
	int getDifference(DateTime&); //для расчёта разницы(в днях) между двумя датами
};

#endif
