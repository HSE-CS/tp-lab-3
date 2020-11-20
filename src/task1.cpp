#include "task1.h"
#include "Circle.h"

double calcDelta() {
	Circle circle;
	double radius = 6378.1;
	circle.setRadius(radius);
	circle.setFerence(circle.getFerence() + 1);
	return circle.getRadius() - radius;
}

double calcCost() {
	Circle swimming_pool(3);
	Circle swimming_pool_with_road(4);
	int price_of_swimming_pool = 2000;
	int price_of_road = 1000;
	double cost = swimming_pool_with_road.getFerence() * price_of_swimming_pool;
	cost += (swimming_pool_with_road.getArea() - swimming_pool.getArea()) * price_of_road;
	return cost;
}