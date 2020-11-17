#include "DateTime.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main()
{
	DateTime bday{ 1,11,2018 };
	DateTime time{};
	/*std::cout << bday.getToday()<<std::endl;
	std::cout << bday.getYesterday() << std::endl;
	std::cout << bday.getTomorrow() << std::endl;
	std::cout << bday.getPast(42).getToday() << std::endl;
	std::cout << bday.getFuture(42).getToday() << std::endl;*/
	DateTime dt1(20, 11, 2018);
	DateTime dt2(21, 11, 2018);
	std::cout << dt1.getDifference(dt2) << std::endl;
}