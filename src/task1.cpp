#include "../include/task1.h"
#include "../include/Circle.h"

double calcDelta() {
	Circle earth(6378.1);
	Circle extended_rope(0.159155);
	extended_rope.setFerence(earth.getFerence() + extended_rope.getFerence());
	double delta = extended_rope.getRadius() - earth.getRadius();
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