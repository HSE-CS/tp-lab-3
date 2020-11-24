#include <math.h>
#include "Circle.h"
#include "task1.h"

double calcDelta()
{
	Circle earth(6378.1);
	Circle rope;
	rope.setFerence(earth.getFerence() + 1.0);
	return rope.getRadius() - earth.getRadius();
}
double calcCost()
{
	Circle pool(3.0);
	Circle track(4.0);
	return ((1000.0 * (track.getArea() - pool.getArea())) + 2000.0 * track.getFerence());
}