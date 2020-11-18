#include "Circle.h"
#include "task1.h"
#include <iostream>
#include <cmath>

int main() {
	int road_price = 1000;
	int border_price = 2000;
	double rad = 3;
	Circle swim;
	Circle border;

	swim.setRadius(rad);
	border.setRadius(rad + 1);

	double road_area = border.getArea - swim.getArea;
	std::cout << "road cost:  " << calcCost(road_area, road_price) << std::endl;

	std::cout << "border cost:  " <<calcCost(border.getFerence, border_price) << std::endl;

	return 0;
}