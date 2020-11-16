//
// Created by freeb on 16.11.2020.
//

#include <iostream>
#include "Circle.h"

double swimming_pool(double  _radius, double track_width, double coverage_cost, double fence_cost){
    Circle pool{_radius};
    Circle pool2{pool.getRadius() + 1};
    return pool.getFerence() * fence_cost + (pool2.getArea() - pool.getArea()) * coverage_cost;
}

int main() {
    const double pool_radius = 3;
    const double track_width = 1;
    const double coverage_cost = 1000;
    const double fence_cost = 2000;
    std::cout << swimming_pool(pool_radius, track_width, coverage_cost, fence_cost);
}
