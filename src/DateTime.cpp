#include "DateTime.h"
#include "iostream"
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


std::string DateTime::getToday() const
{
    char buffer[80];
	char result[80] = {'\0'};
	strftime(buffer, 80, "%d %B %Y %A", &date); //переводим в строчку вида  07 November 2018, Wedensday
	for (int i = 0;i < strlen(buffer);i++) //понижаем регистр
	{
		if ('A' <= buffer[i] && buffer[i] <= 'Z')
			result[i] = buffer[i] - 'A' + 'a';
		else
			result[i] = buffer[i];
	}
	return result;
}
std::string DateTime::getYesterday() const
{ 
	return getPast(1).getToday();
}
std::string DateTime::getTomorrow() const
{
	return getFuture(1).getToday();
}
DateTime DateTime::getFuture(unsigned int N) const
{
	struct tm* x;
	const time_t timer = time(NULL); //обнуляем
	x = localtime(&timer); //принимаем значение текущего времени в секундах и инициализирует
	                       //структуру в местном формате времени.
	x->tm_mday += N; //к дня добавляем N
	time_t next = mktime(x); //Перевод структуры timeptr в time_t
	x = localtime(&next); //опять в местный формат
	DateTime future{ x->tm_mday, x->tm_mon + 1, x->tm_year + 1900 };
	return future;
}
DateTime DateTime::getPast(unsigned int N) const
{
	struct tm* x;
	const time_t timer = time(NULL);
	x = localtime(&timer);
	x->tm_mday -= N;
	time_t next = mktime(x);
	x = localtime(&next);
	DateTime past { x->tm_mday, x->tm_mon + 1, x->tm_year + 1900 };
	return past;

}
int DateTime::getDifference(DateTime& dt)
{
	int DAY = 86400; //секунд в дне
	struct tm* x; //создаем структуру
	const time_t timer = time(NULL); //обнуляем 
	x = localtime(&timer); //принимаем значение текущего времени в секундах
	                       //и инициализирует структуру в местном формате времени.
	time_t date1 = mktime(x); //Перевод структуры timeptr в time_t
	time_t date2 = mktime(&dt.date);
	return difftime(date2, date1) / DAY; //находим разницу в секундах и переводим в дни
}