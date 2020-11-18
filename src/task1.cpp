#ifndef TASK1_TASK1_CPP
#define TASK1_TASK1_CPP

#include "task1.h"
#include "Circle.h"

double calcDelta(){
    double earthRadius = 6378100.0;
    Circle *earth = new Circle(earthRadius);
    earth->setFerence(earth->getFerence() + 1.0);
    return earth->getRadius() - earthRadius;
}

double calcCost(){
    Circle *fence = new Circle(4);
    Circle *pull = new Circle(3);
    double roadCost = (fence->getArea() - pull->getArea()) * 1000.0;
    double fenceCost = fence->getFerence() * 2000.0;
    return roadCost + fenceCost;
}

#endif //TASK1_TASK1_CPP