#include "DateTime.h"
#include <iostream>

int main()
{
	DateTime dateTime;

	std::cout << "Today: " << dateTime.getToday() << std::endl;
	std::cout << "Yesterday: " << dateTime.getYesterday() << std::endl;
	std::cout << "Tomorrow: " << dateTime.getTomorrow() << std::endl;
    std::cout << "Day 10 days ago: " << dateTime.getPast(10) << std::endl;
	std::cout << "Day after tomorrow: " << dateTime.getFuture(2) << std::endl;

	DateTime myBirthday(23, 1, 2002);
	std::cout << "My Birthday: " << myBirthday.getToday() << std::endl;
	std::cout << "Today I am " << dateTime.getDifference(myBirthday) << " days old!" << std::endl;
    DateTime newMyBirthday(myBirthday);
	std::cout << "My Birthday again: " << newMyBirthday.getToday() << std::endl;
	std::cout << "When me turned one: " << newMyBirthday.getFuture(365) << std::endl;

	return 0;
}

