#include "Circle.h"
#include "task1.h"

double calcDelta()
{
	Circle Earth(6378.1);
	Circle Earth_with_rope(0);
	Earth_with_rope.setFerence(Earth.getFerence() + 1);
	double a = Earth_with_rope.getRadius();
	double b = Earth.getRadius();
	return (Earth_with_rope.getRadius() - Earth.getRadius());
}
double calcCost()
{
	Circle Pool(3);
	Circle Pool_with_track(Pool.getRadius() + 1);
	return Pool_with_track.getFerence() * 2000 + ((Pool_with_track.getArea() - Pool.getArea()) * 1000);
}