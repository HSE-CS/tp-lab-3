//
// Created by vladimir on 20.12.2020.
//

#include "Circle.h"
#include "task1.h"

double calcDelta() {
    Circle Earth(6371);
    Circle newEarth(1);
    newEarth.setFerence(Earth.getFerence() + 1);
    return newEarth.getRadius() - Earth.getRadius();
}

double calcCost() {
    Circle pool(3);
    Circle pool_with_road(4);
    return 2000 * pool_with_road.getFerence() + 1000 * (pool_with_road.getArea() - pool.getArea());
}