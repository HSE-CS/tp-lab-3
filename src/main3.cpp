#include "DateTime.h"

int main() {

	DateTime dateTime;

	std::cout << "Today: " << dateTime.getToday() << std::endl;
	std::cout << "Yesterday: " << dateTime.getYesterday() << std::endl;
	std::cout << "Tomorrow: " << dateTime.getTomorrow() << std::endl;
	DateTime newdate(5, 3, 2002);
	std::cout << "New date: " << newdate.getToday() << std::endl;
	std::cout << "Days between today and new date: " << dateTime.getDifference(newdate) << std::endl;
	std::cout << "Day 10 days ago: " << dateTime.getPast(-10) << std::endl;
	std::cout << "Day after 10 days: " << dateTime.getFuture(10) << std::endl;


	return 0;
}