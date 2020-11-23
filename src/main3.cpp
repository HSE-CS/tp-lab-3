#include <iostream>
#include "../include/DateTime.h"


int main() {
	DateTime today;
	DateTime date(30,11,2019);
	std::cout << date.getToday() << std::endl;
	std::cout << date.getTomorrow() << std::endl;
	std::cout << date.getYesterday() << std::endl;
	std::cout << date.getFuture(5) << std::endl;
	std::cout << date.getPast(5) << std::endl;
	std::cout << date.getDifference(today) << std::endl;
}