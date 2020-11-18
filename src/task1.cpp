#include "../include/task1.h"
#include "../include/Circle.h"

double calcDelta() {
	Circle earth(6378.1);
	Circle earth_with_new_rope(0.0);
	earth_with_new_rope.setFerence(earth.getFerence() + 1.0);
	double delta = earth_with_new_rope.getRadius() - earth.getRadius();
	return delta;
}//- расчет зазора между землей и веревкой

double calcCost() {
	Circle pool(3);
	Circle pool_with_road(pool.getRadius() + 1);
	double road_cost = 1000 * (pool_with_road.getArea() - pool.getArea());
	double fence_cost = 2000 * pool_with_road.getFerence();
	double cost = road_cost + fence_cost;
	return cost;
}//-расчет стоимости бассейна