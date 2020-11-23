#include "task1.h"

double calcDelta()//расчет зазора между землей и веревкой
{
	Circle earth(6378.1);
	Circle rope(0);
    rope.setFerence(earth.getFerence() + 1);
	return rope.getRadius() - earth.getRadius();
};
double calcCost() // расчет стоимости бассейна
{
	Circle pool(3);
	Circle road(pool.getRadius() + 1);
	return (road.getArea() - pool.getArea()) * 1000 * 1 +  road.getFerence() * 2000;
};