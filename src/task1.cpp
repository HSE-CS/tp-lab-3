#include "Circle.h"
#include "task1.h"

double calcDelta() {
	double radius_earth = 6378100.0;
	Circle earth(radius_earth);
	double add_rope = 1.0;
	double ference_new_rope = earth.getFerence() + add_rope;
	earth.setFerence(ference_new_rope);
	double differens = earth.getRadius() - radius_earth;
	return differens;
}
double calcCost() {
	double radius_pool = 3.0;
	double add_track = 1.0;
	double coverage_cost = 1000;
	double fence_cost = 2000;

	Circle pool(radius_pool);
	double area_pool = pool.getArea();
	pool.setRadius(radius_pool + add_track);
	double total_coverage_cost = coverage_cost * (pool.getArea() - area_pool);
	double total_fence_cost = fence_cost * pool.getFerence();

	return total_coverage_cost + total_fence_cost;
}