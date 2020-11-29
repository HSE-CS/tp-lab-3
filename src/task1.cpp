//
// Created by Valera on 27.11.2020.
//

#include "task1.h"
#include "Circle.h"


double calcDelta() {
    Circle earth(6378100);
    Circle rope(earth.getRadius());
    rope.setFerence(earth.getFerence() + 1);
    return rope.getRadius() - earth.getRadius();
}

double calcCost() {
    const double concreteCost = 1000;
    const double fenceCost = 2000;
    Circle pool(3);
    Circle fence(pool.getRadius() + 1);
    return (fence.getArea() - pool.getArea()) * concreteCost + fence.getFerence() * fenceCost;
}