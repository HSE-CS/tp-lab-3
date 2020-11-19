#include "DateTime.h"
#include <iostream>


int main()
{
	DateTime date1(6, 5, 2020);
	DateTime date2;
	DateTime date3(date2);

	std::cout << "Date 1: " << std::endl;
	std::cout << "Current date: " + date1.getToday() << std::endl;
	std::cout << "Yesterday date: " + date1.getYesterday() << std::endl;
	std::cout << "Tomorrow date: " + date1.getTomorrow() << std::endl;
	std::cout << "Date in 5 days: " + date1.getFuture(5) << std::endl;
	std::cout << "Date 5 days ago: " + date1.getPast(5) << std::endl;
	std::cout << std::endl;


	std::cout << "Date 2: " << std::endl;
	std::cout << "Current date: " + date2.getToday() << std::endl;
	std::cout << "Yesterday date: " + date2.getYesterday() << std::endl;
	std::cout << "Tomorrow date: " + date2.getTomorrow() << std::endl;
	std::cout << "Date in 10 days: " + date2.getFuture(10) << std::endl;
	std::cout << "Date 10 days ago: " + date2.getPast(10) << std::endl;
	std::cout << std::endl;


	std::cout << "Date 3: " << std::endl;
	std::cout << "Current date: " + date3.getToday() << std::endl;
	std::cout << "Yesterday date: " + date3.getYesterday() << std::endl;
	std::cout << "Tomorrow date: " + date3.getTomorrow() << std::endl;
	std::cout << "Date in 100 days: " + date3.getFuture(100) << std::endl;
	std::cout << "Date 100 days ago: " + date3.getPast(100) << std::endl;
	std::cout << std::endl;


	std::cout << "Difference between date1 and date2: " << date1.getDifference(date2) << " days" << std::endl;
	std::cout << "Difference between date2 and date3: " << date2.getDifference(date3) << " days" << std::endl;
	std::cout << "Difference between date1 and date3: " << date1.getDifference(date3) << " days" << std::endl;

	return 0;
}