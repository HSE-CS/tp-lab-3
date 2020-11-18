#include "../include/task1.h"
#include "../include/Circle.h"

double calcDelta() {
	Circle earth(6378.1);
	double earth_radius = earth.getRadius();
	earth.setFerence(earth.getFerence() + 1);
	double new_radius = earth.getRadius();
	double delta = new_radius - earth_radius;
	return delta;
}//- расчет зазора между землей и веревкой

double calcCost() {
	return 0.0;
}//-расчет стоимости бассейна