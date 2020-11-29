#include "task1.h"

double calcDelta()
{
    double earthRadius = 6378.1;
    Circle rope(earthRadius);
    rope.setFerence(rope.getFerence() + 1);
    return rope.getRadius() - earthRadius;
};

double calcCost()
{
	Circle Pool1(3);
	Circle Pool2(Pool1.getRadius() + 1);
	return Pool2.getFerence() * 2000 + ((Pool2.getArea() - Pool1.getArea()) * 1000);
}