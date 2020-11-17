#include <iostream>
#include "DateTime.h"

int main()
{
	DateTime a;
	DateTime b(1, 1, 2021);
	std::cout << "Today: " << a.getToday() << std::endl;
	std::cout << "Yesterday: " << a.getYesterday() << std::endl;
	std::cout << "Tommorow: " << a.getTomorrow() << std::endl;
	std::cout << "20 days future: " << a.getFuture(20) << std::endl;
	std::cout << "20 days past: " << a.getPast(20) << std::endl;
	std::cout << "Days to New Year: " << a.getDifference(b) << std::endl;
	return 0;
}
