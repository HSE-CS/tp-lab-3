#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#define SIZE 100

DateTime::DateTime(int day, int mounth, int year)
{
	time_t dt = time(nullptr);
	now_date = *localtime(&dt);
	now_date.tm_mday = day;
	now_date.tm_mon = mounth - 1;
	now_date.tm_year = year - 1900; 
	mktime(&now_date);
};

DateTime::DateTime()
{
	time_t dt = time(nullptr);
	now_date = *localtime(&dt);
	mktime(&now_date);
};

DateTime::DateTime(DateTime& new_date)
{
	now_date = new_date.now_date;
};

string  DateTime::getToday()
{
	char arr[SIZE];
	strftime(arr, SIZE, "%d %B %Y, %A", &now_date);
	int i = 0;
	while (arr[i])                           // пока не конец строки
	{
		arr[i] = (char)tolower(arr[i]);  // преобразовать текущий символ строки в строчный
		i++;                                   // инкремент индекса символов в строке
	}
	return arr;
};

string DateTime::getYesterday()
{
	return getPast(1);
}

string DateTime::getTomorrow()
{
	return getFuture(1);
}

string DateTime::getFuture(unsigned int N)
{
	char arr[SIZE];
	tm future_date;
	future_date = now_date;
	future_date.tm_mday = now_date.tm_mday + N;
	mktime(&future_date);
	strftime(arr, SIZE, "%d %B %Y, %A", &future_date);int i = 0;
	while (arr[i])                           // пока не конец строки
	{
		arr[i] = (char)tolower(arr[i]);  // преобразовать текущий символ строки в строчный
		i++;                                   // инкремент индекса символов в строке
	}
	return arr;
}

string DateTime::getPast(unsigned int N)
{
	char arr[SIZE];
	tm future_date;
	future_date = now_date;
	future_date.tm_mday = now_date.tm_mday - N;
	mktime(&future_date);
	strftime(arr, SIZE, "%d %B %Y, %A", &future_date);
	int i = 0;
	while (arr[i])                           // пока не конец строки
	{
		arr[i] = (char)tolower(arr[i]);  // преобразовать текущий символ строки в строчный
		i++;                                   // инкремент индекса символов в строке
	}
	return arr;
}

int DateTime::getDifference(DateTime& another_date)
{
	return abs(mktime(&this->now_date) - mktime(&another_date.now_date)) / 86400;
}