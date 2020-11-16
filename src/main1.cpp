#include "Circle.h"
#include <iostream>
#include <cmath>

int main() {
	double earth_rad = 6378.1;
	Circle rope;
	double diff = rope.getRadius(rope.getFerence(earth_rad) + 1, 0, 1) - earth_rad;
	std::cout << "%l" << diff;
	return 0;
}