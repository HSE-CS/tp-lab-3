//
// Created by jmax on 30.11.2020.
//

#include "Circle.h"

double calcDelta() {
    double earthRadius = 6378100;
    Circle earth(earthRadius);
    earth.setFerence(earth.getFerence() + 1);
    return earth.getRadius() - earthRadius;
}

double calcCost() {
    int coverCost = 1000;
    int fenceCost = 2000;
    Circle pool(3);
    double onlyPoolArea = pool.getArea();
    pool.setRadius(pool.getRadius() + 1);
    return ((pool.getArea() - onlyPoolArea) * coverCost) + (pool.getFerence() * fenceCost);
}