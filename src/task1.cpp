#include "task1.h"
#include "Circle.h"

double calcDelta()
{
    Circle earth(6378.1);
    double rope = 1;
    earth.setFerence(earth.getFerence()+rope);
    return earth.getRadius() - 6378.1;
}

double calcCost()
{
    Circle pool(3);
    Circle space(4);
    return ((space.getArea()-pool.getArea())*1000) + space.getFerence()*2000;
}