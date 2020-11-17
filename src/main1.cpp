#include <iostream>
#include "Circle.h"
#include "task1.h"

int main()
{
	std::cout.precision(17);

	Circle earth(6378100.0); // meters
	Circle rope;
	rope.setFerence(earth.getFerence() + 1.0);

	std::cout << "Earth:\n\t"
			  << earth.getRadius() << "\n\t"
			  << earth.getFerence() << "\n\t"
			  << earth.getArea() << std::endl;

	std::cout << "Rope:\n\t"
			  << rope.getRadius() << "\n\t"
			  << rope.getFerence() << "\n\t"
			  << rope.getArea() << std::endl;

	std::cout << "The difference: " << std::endl;
	std::cout << calcDelta() << std::endl;
	return 0;
}
