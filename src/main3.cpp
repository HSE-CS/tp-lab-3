#include "DateTime.h"

#include <iostream>

int main()
{
	DateTime time;
	std::cout << "Today: " << time.getToday() << std::endl;
	std::cout << "Yesterday: " << time.getYesterday() << std::endl;
	std::cout << "Tomorrow: " << time.getTomorrow() << std::endl;
	std::cout << "In 3 days: " << time.getFuture(3).getToday() << std::endl;
	std::cout << "5 days ago: " << time.getPast(5).getToday() << std::endl;
	
	const auto time2 = time.getFuture(15);
	std::cout << "Second time: " << time2.getToday() << std::endl;
	std::cout << "Difference: " << time2.getDifference(time) << " days" << std::endl;

	return 0;
}
