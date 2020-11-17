#include <iostream>
#include "Circle.h"

int main() {

	Circle pool(3);
	Circle pool_with_trail(1 + 3);
	std::cout << "Trail's cost: " << 1000 * (pool_with_trail.getArea() - pool.getArea()) << " rub" << std::endl;
	std::cout << "Fence's cost: " << 2000 * pool_with_trail.getFerence() << " rub" << std::endl;

	return 0;
}
