#include "DateTime.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main()
{
	DateTime bday{ 15, 03, 2001 };
	DateTime time{};
	std::cout << bday.getToday()<<std::endl;
	std::cout << bday.getYesterday() << std::endl;
	std::cout << bday.getTomorrow() << std::endl;
	std::cout << bday.getPast(42) << std::endl;
	std::cout << bday.getFuture(42) << std::endl;
	DateTime dt1(20, 11, 2020);
	DateTime dt2(27, 11, 2020);
	std::cout << dt1.getDifference(dt2) << std::endl;
}