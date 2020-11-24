#define _USE_MATH_DEFINES
#include "task1.h"
#include "Circle.h"
#include <iostream>
#include <cmath>


double calcDelta() {

	Circle Earth(6378.1 * 1000);
	Circle Rope;
	Rope.setFerence(Earth.getFerence() + 1);
	return (Rope.getRadius() - Earth.getRadius());

}

double calcCost() {

	Circle Pool(3.0);
	Circle PoolFence(Pool.getRadius() + 1);
	return ((PoolFence.getArea() - Pool.getArea()) * 1000) + (PoolFence.getFerence() * 2000);

}