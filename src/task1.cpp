#include "task1.h"
#include "Circle.h"

double calcDelta() {
    double rad = 6378.1;
    Circle earth(rad);
    Circle rope(0);
    rope.setFerence(earth.getFerence() + 1);
    double res = rope.getRadius() - earth.getRadius();
    return res;
}

double calcCost() {
    double radius = 3;
    double trail = 1;
    double costOfConcrete = 1000;
    double costOfFence = 2000;
    Circle pool(radius);
    Circle trailAndPool(radius + trail);
    double cost1 = costOfConcrete * (trailAndPool.getArea() - pool.getArea());
    double cost2 = costOfFence * trailAndPool.getFerence();
    return cost1 + cost2;
}