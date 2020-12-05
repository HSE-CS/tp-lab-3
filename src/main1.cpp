#include "Circle.h"
#include "task1.h"

int main() {

	Circle Earth(6378.1);
	Circle rope(Earth.getRadius());
	rope.setFerence(rope.getFerence() + 1.0);
	std::cout << "The difference between earth and road is  " << calcDelta() << std::endl;

	return 0;
}