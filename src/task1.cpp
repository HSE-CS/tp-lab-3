#include"task1.h"
#include"Circle.h"

double calcDelta() {
	double Rad{ 6378100 };
	Circle Earth(Rad);
	Earth.setFerence(Earth.getFerence() + 1);
	return Earth.getRadius() - Rad;
}

double calcCost() {
	double cost_1{ 1000 }, cost_2{ 2000 }, rad_pool{ 3 }, rad_road{ 1 };
	Circle pool(rad_pool);
	Circle with_road(rad_road + rad_pool);
	return (with_road.getArea() - pool.getArea()) * cost_1 + with_road.getFerence() * cost_2;
}