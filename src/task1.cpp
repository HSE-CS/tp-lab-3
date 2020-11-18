#include "Circle.h"
#include "task1.h"
#include <cmath>


double calcDelta(Circle c1, Circle c2)
{
	return fabs(c1.getArea() - c2.getArea());
}

double calcCost(Circle in, Circle out)
{
	return (out.getArea() - in.getArea()) * 1000 + out.getFerence() * 2000;
}