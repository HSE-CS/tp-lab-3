#include "DateTime.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main()
{
	DateTime bday{ 11,5,2021 };
	DateTime time{};
	std::cout << time.getToday()<<std::endl;
	std::cout << time.getYesterday() << std::endl;
	std::cout << time.getTomorrow() << std::endl;
	std::cout << time.getPast(42).getToday() << std::endl;
	std::cout << time.getDifference(bday) << std::endl;
}