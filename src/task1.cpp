/*
 * @author Stanislav Stoianov
 */

#include "../include/task1.h"
#include <Circle.h>

double calcDelta() {
    Circle circle(6378100);
    Circle circle1(6378100);
    circle1.setFerence(circle1.getFerence() + 1);
    return circle1.getArea() - circle.getArea();
}

double calcCost() {
    const int costConcrete = 1000;
    const int costFence = 2000;
    Circle pool(3);
    Circle path(4);
    return costFence * path.getFerence() + costConcrete * (path.getArea() - pool.getArea());
}