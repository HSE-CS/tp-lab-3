
#include "task1.h"

double calcDelta()
{
    Circle Earth(6378.1);
    double r1 = Earth.getRadius();
    Earth.setFerence(Earth.getFerence() + 1);
    double r2 = Earth.getRadius();
    return r2 - r1;
}

double calcCost()
{
    Circle pool(3);
    Circle poolRoad(4);
    double cost = (poolRoad.getArea() - pool.getArea()) * 1000 +
                  poolRoad.getFerence() * 2000; // Стоимость дорожки и ограждения
    return cost;
}