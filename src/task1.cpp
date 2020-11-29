#include "Circle.h"
#include "task1.h"

double calcDela()
{
    Circle Earth(6378100);
    Circle newEarth(1);
    newEarth.setFerence(Earth.getFerence() + 1);
    return newEarth.getRadius() - Earth.getRadius();
}

double calcCost() {
    Circle pool(3);
    Circle poolAndRoad(4);
    return 2000 * poolAndRoad.getFerence() + 1000 * (poolAndRoad.getArea() - pool.getArea());
}