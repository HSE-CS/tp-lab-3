#include "task1.h"
#include "Circle.h"

double calcDelta()
{
	Circle Earth(6378.1);
	Circle Rope(0.0);
	Rope.setFerence(Earth.getFerence() + 1);
	return (Rope.getRadius() - Earth.getRadius());
}
