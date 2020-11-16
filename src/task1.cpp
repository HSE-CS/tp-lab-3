//
// Created by freeb on 16.11.2020.
//

#include "task1.h"
#include "Circle.h"

double earth_and_rope(double _radius){
    Circle earth{_radius};
    earth.setFerence(earth.getFerence() + 1);
    return earth.getRadius() - _radius;
}

double swimming_pool(double  _radius, double track_width, double coverage_cost, double fence_cost){
    Circle pool{_radius};
    Circle pool2{pool.getRadius() + 1};
    return pool2.getFerence() * fence_cost + (pool2.getArea() - pool.getArea()) * coverage_cost;
}

double calcDelta() {
    const double earth_radius = 6378100;
    return earth_and_rope(earth_radius);
}

double calcCost() {
    const double pool_radius = 3;
    const double track_width = 1;
    const double coverage_cost = 1000;
    const double fence_cost = 2000;
    return swimming_pool(pool_radius, track_width, coverage_cost, fence_cost);
}

