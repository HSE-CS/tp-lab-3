#include "task1.h"
#include "Circle.h"

double calcDelta() {
    double earthRadius = 6378100;
    double wireDeltaFerence = 1;
    Circle earth(earthRadius);
    Circle circle(0);
    circle.setFerence(earth.getFerence() + wireDeltaFerence);
    return circle.getRadius() - earth.getRadius();
}

double calcCost() {
    double concreteCostPerSqrMetre = 1000;
    double fenceCostPerMetre = 2000;
    double concreteWidth = 1;
    Circle pool(3);
    Circle poolWithConcrete(pool.getRadius() + concreteWidth);
    double fenceCostTotal = fenceCostPerMetre * poolWithConcrete.getFerence();
    double concreteCostTotal = (poolWithConcrete.getArea() - pool.getArea()) * concreteCostPerSqrMetre;
    return fenceCostTotal + concreteCostTotal;
}