#define _USE_MATH_DEFINES 
#include "task1.h"
#include "Circle.h"
double calcDelta() {
	double earth_radius = 6378.1;
	int roup_len = 1;
	Circle c1(earth_radius), c2(earth_radius);
	c2.setFerence((c1.getFerence()) + roup_len);
	return (c2.getRadius() - c1.getRadius());
}

double calcCost() {
	double r1 = 3.0, r2 = 3.0 + 1.0;
	int cost_path = 1000, cost_pool = 2000;
	Circle pool(r1), path(r2);
	return cost_pool * path.getFerence() + cost_path * (path.getArea() - pool.getArea());
} 