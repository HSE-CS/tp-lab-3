#include <iostream>
#include <string>
#include <ctime>
#include <sstream>

class DateTime
{
public:
	DateTime(int day, int month, int year);
	DateTime();
	DateTime(DateTime &dt);

	std::string getToday();						//- возвращение текущей даты в виде строки, с указанием дня недели и названия месяца(например 07 november 2018, wedensday);
	std::string getYesterday();					// -возвращение даты вчерашнего дня в виде строки.
	std::string getTomorrow();					// -возвращение даты завтрашнего дня в виде строки.
	std::string getFuture(unsigned int N);		// -возвращение даты через N дней в будущем;
	std::string getPast(unsigned int N);		// -возвращение даты через N дней в прошлом;
	int getDifference(DateTime& dt);		// -для расчёта разницы(в днях) между двумя датами
	
private:
	int day = 0;
	int month = 0;
	int year = 0;
};
