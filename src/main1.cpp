#include "Circle.h"
#include <iostream>
#include <cmath>

int main() {
	double earth_rad = 6378.1;
	Circle earth;
	Circle rope;

	earth.setRadius(earth_rad);
	double new_ference = earth.getFerence + 1;
	rope.setFerence(new_ference);
	double diff = rope.getRadius - earth_rad;
	std::cout << diff << std::endl;
	return 0;
}