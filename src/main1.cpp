#include "Circle.h"
#include "task1.h"
#include <iostream>

int main() {
    Circle earth(6378.1);
    double old_radius = earth.getRadius();
    double old_ference = earth.getFerence();
    earth.setFerence(old_ference + 1);
    double new_radius = earth.getRadius();
    return new_radius - old_radius;
}