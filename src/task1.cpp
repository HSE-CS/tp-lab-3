#include "Circle.h"
#include "task1.h"

double calcCost() {
    int cost_concrete = 100.0;
    int cost_fence = 150.0;
    double total = 0.0;

    int pool_radius = 5;
    int lane_width = 1;

    Circle pool(pool_radius);
    Circle lane(pool_radius + lane_width);

    total = (lane.getArea()-pool.getArea()) * cost_concrete; //calculate the cost of lane

    total += (lane.getFerence() * cost_fence); //calculate the cost of fence

    return total;
} 

double calcDelta() {
    double r = 6000.0;
    double add = 1.0;

    Circle new_Earth(r);

    new_Earth.setFerence(new_Earth.getFerence() + add);

    return new_Earth.getRadius() - r;
}
