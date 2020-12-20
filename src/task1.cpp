#include "Circle.h"
#include "task1.h"

double calcDelta()
{
	double earthRadius = 6378100.0;
	double ropeLength = 1.0;
	Circle Earth(earthRadius);
	double length = Earth.getFerence() + ropeLength;
	Earth.setFerence(length);
	return Earth.getRadius() - earthRadius;
}

double calcCost()
{
	double sqrmeterCost = 1000.0;
	double meterCost = 2000.0;
	Circle SwimmingPool(3.0);
	double oldArea = SwimmingPool.getArea();
	SwimmingPool.setRadius(4.0);
	double roadPrice = (SwimmingPool.getArea() - oldArea) * sqrmeterCost;
	double wallPrice = SwimmingPool.getFerence() * meterCost;
	return roadPrice + wallPrice;
}
