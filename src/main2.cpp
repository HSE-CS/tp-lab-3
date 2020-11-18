#include "Circle.h"
#include <iostream>
#include <cmath>

int main() {
	int road_price = 1000;
	int border_price = 2000;
	double rad = 3;
	Circle swim;
	Circle boarder;

	swim.setRadius(rad);
	boarder.setRadius(rad + 1);

	double road_area = swim.getArea - boarder.getArea;
	double road = road_area * road_price;
	std::cout << "road price:  " << road << std::endl;

	double border = swim.getFerence * border_price;
	std::cout << "boarder price:  " << border << std::endl;

	return 0;
}