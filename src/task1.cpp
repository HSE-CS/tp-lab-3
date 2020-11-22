#include "Circle.h"
#include "task1.h"

using namespace std;

double calcDelta()
{
	Circle Earth(637810.0); // в метрах
	Circle rope(637810.0);
	rope.setFerence(rope.getFerence() + 1.0);
	return (rope.getRadius() - Earth.getRadius());
}

// расчёт стоимости бассейна
double calcCost()
{
	Circle swimmingpool;
	Circle road;
	swimmingpool.setRadius(3.0);
	road.setRadius(3.0 + 1.0);
	double allcost = NULL;
	allcost += (road.getArea() - swimmingpool.getArea()) * 1000.0;
	allcost += (road.getFerence() * 2000.0);
	return allcost;
}