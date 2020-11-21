/*
 * @author Stanislav Stoianov
 */

#include "../include/task1.h"
#include <Circle.h>

double calcDelta() {
    Circle circle(6378.1); // kilometers
    Circle circle1;
    circle1.setFerence(circle.getFerence() + 1.0);
    return circle1.getRadius() - circle.getRadius();
}

double calcCost() {
    const int costConcrete = 1000;
    const int costFence = 2000;
    Circle pool(3);
    Circle path(4);
    return costFence * path.getFerence() + costConcrete * (path.getArea() - pool.getArea());
}