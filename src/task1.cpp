#include "task1.h"

double calcDelta() 
{
	double earthradius = 6378.1, change=1.0;
	Circle earth(earthradius);
	Circle earth2(0.0);
	earth2.setFerence(earth.getFerence() + change);
	return earth2.getRadius() - earth.getRadius();
}

double calcCost() 
{
	double radius=3.0, width=1.0;
	double priceofcovering = 1000.0, priceoffence = 2000.0;
	Circle pool(radius);
	Circle poolwithroad(radius + width);
	double covering = (poolwithroad.getArea() - pool.getArea()) * priceofcovering;
	double fence = poolwithroad.getFerence() * priceoffence;
	return covering + fence;
}