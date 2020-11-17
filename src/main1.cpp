#include "Circle.h"
#include "task1.h"


int main() {
	
	Circle c(2.0);
	std::cout << c.getRadius()<< "\n" << c.getArea() << "\n" << c.getFerence() << "\n";

	//=================task1===============
	std::cout.precision(17);
	std::cout << calcDelta();
	std::cout << "\n";
	//=====================================
	//=================task2===============
	std::cout << calcCost();
	std::cout << "\n";
	//=====================================
	return 0;
}