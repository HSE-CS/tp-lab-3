#include <iostream>
#include <cmath>
#include <iomanip>
#include "Circle.h"

using namespace std;

double calcDelta() 
{
    Circle earth(6378.1);
    Circle rope;
    rope.setFerence(earth.getFerence() + 1);
    double gap = rope.getRadius() - earth.getRadius();
    return gap;
}

double calcCost() 
{
    Circle pool(3);
    Circle walkway(pool.getRadius() + 1);
    double walkwayCost = (walkway.getArea() - pool.getArea()) * 1000;
    double fenceCost = walkway.getFerence() * 2000;
    return walkwayCost + fenceCost;
}