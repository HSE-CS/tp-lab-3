#include <iostream>
#include "Circle.h"
#include "task1.h"

int main()
{
	std::cout.precision(17);
	Circle pool(3.0);
	Circle road(4.0);

	std::cout << "Pool:\n\t"
		<< pool.getRadius() << "\n\t"
		<< pool.getFerence() << "\n\t"
		<< pool.getArea() << std::endl;

	std::cout << "Road:\n\t"
		<< road.getRadius() << "\n\t"
		<< road.getFerence() << "\n\t"
		<< road.getArea() << std::endl;

	std::cout << "The cost: " << std::endl;
	std::cout << calcCost() << std::endl;
	return 0;
}
