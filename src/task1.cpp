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
	double sum_plitka;
	double sum_ograda;

	sum_plitka = pool.getFerence() * 1000;
	pool.setFerence(pool.getFerence() + 1);
	sum_ograda = pool.getFerence() * 2000;

	return sum_plitka + sum_ograda;
};