#include "task1.h"

double calcDelta()
{
    double earthRadius = 6378.1;

    Circle rope(earthRadius);
    rope.setFerence(rope.getFerence() + 0.001);

    return rope.getRadius() - earthRadius;
};

double calcCost()
{
    double cost;
    double difference;
    Circle pool(3.0);

    difference = pool.getArea();
    pool.setRadius(4.0);
    difference = pool.getArea() - difference;

    cost = difference * 1000.0 + pool.getFerence() * 2000.0;
    return cost;
};