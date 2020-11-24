#include "DateTime.h"
#include <iostream>

int main() {

	DateTime today(24, 11, 2020);
	std::cout << today.getToday() << std::endl;
	std::cout << today.getYesterday() << std::endl;
	std::cout << today.getTomorrow() << std::endl;
	std::cout << today.getFuture(25) << std::endl;
	std::cout << today.getPast(25) << std::endl;
	DateTime bd(22, 11, 2001);
	std::cout << today.getDifference(bd) << std::endl;

}
