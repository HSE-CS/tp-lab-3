#include "Circle.h"
#include "task1.h"

double calcDelta()
{
    Circle Earth(6378100);
    Circle ver(1);
    ver.setFerence(Earth.getFerence() + 1);
    return ver.getRadius() - Earth.getRadius();
}

double calcCost()
{
    Circle bas(3);
    Circle basPlusDor(4);
    return 2000 * basPlusDor.getFerence() + 1000 * (basPlusDor.getArea() - bas.getArea());
}
