#include "Circle.h"
#include <iostream>
#include <cmath>

int main() {
	int road_price = 1000;
	int border_price = 2000;
	double radius = 3;
	Circle swim;

	double road_area = swim.getArea(radius) - swim.getArea(radius + 1);
	double road = road_area * road_price;
	std::cout << "road price:  %l" << road;

	double border = swim.getFerence(radius + 1) * border_price;
	std::cout << "boarder price:  %l" << border;

	return 0;
}