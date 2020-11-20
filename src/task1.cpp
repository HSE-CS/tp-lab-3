#include "task1.h"
#include "Circle.h"

double calcDelta() {
    double r = 6378.1;
    double add = 1.0;

    Circle new_Earth(r);

    new_Earth.setFerence(new_Earth.getFerence() + add);

    return new_Earth.getRadius() - r;
}

double calcCost() {
    //cost for 1m
    int cost_concrete = 1000.0;
    int cost_fence = 2000.0;
    double total = 0.0;

    //in meters
    int pool_radius = 3;
    int lane_width = 1;

    Circle pool(pool_radius);
    Circle lane(pool_radius + lane_width);

    total = (lane.getArea()-pool.getArea()) * cost_concrete; //calculate the cost of lane

    total += (lane.getFerence() * cost_fence); //calculate the cost of fence

    return total;
}