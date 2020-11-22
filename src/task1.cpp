#include "task1.h"
#include "Circle.h"

double calcDelta()
{
	Circle object1(6378.1);
	Circle object2(6378.1);
	object2.setFerence(object1.getFerence() + 1);
	return object2.getRadius() - object1.getRadius();
};

double calcCost()
{
	Circle pool(3);
	Circle pool_and_road(4);
	double sum_plitka;
	double sum_ograda;

	sum_plitka = (pool_and_road.getArea() - pool.getArea()) * 1000;
	sum_ograda = pool_and_road.getFerence() * 2000;

	return sum_plitka + sum_ograda;
};