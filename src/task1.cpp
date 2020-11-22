#include "Circle.h"
#include "task1.h"

double calcDelta() {
	double r = 6378.1;
	Circle Earth(r), new_Earth;
	
	new_Earth.setFerence(Earth.getFerence() + 1);
	return (new_Earth.getRadius() - r);
}

double calcCost() {
	double r_pool = 3, r_path = 4;
	int price_path = 1000, price_fence = 2000;
	Circle pool(r_pool), path(r_path);
	
	double cost_path = (path.getArea() - pool.getArea()) * price_path;
	double cost_fence = path.getFerence() * price_fence;

	return (cost_path + cost_fence);
}