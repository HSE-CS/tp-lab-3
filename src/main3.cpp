#include "DateTime.h"
#include <iostream>

int main() {

	DateTime today(29, 11, 2020);
	std::cout << today.getToday() << std::endl;
	std::cout << today.getYesterday() << std::endl;
	std::cout << today.getTomorrow() << std::endl;
	std::cout << today.getFuture(128) << std::endl;
	std::cout << today.getPast(833) << std::endl;
	DateTime newyear(01, 01, 2021);
	std::cout << today.getDifference(newyear) << std::endl;

}