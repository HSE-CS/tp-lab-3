#include <iostream>
#include "task1.h"
#include "DateTime.h"

int main() {

	DateTime day1(19,07,2001), day2(day1);
	
	std::cout << day1.getYesterday() << std::endl;
	std::cout << day2.getYesterday() << std::endl;
	std::cout << day1.getTomorrow() << std::endl;
	std::cout << day1.getFuture(3) << std::endl;
	std::cout << day1.getPast(3) << std::endl;

	return 0;
}

