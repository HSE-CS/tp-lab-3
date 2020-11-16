//
// Created by freeb on 16.11.2020.
//

#include <iostream>
#include "Circle.h"

double earth_and_rope(double _radius){
    Circle earth{_radius};
    earth.setFerence(earth.getRadius() + 1);
    return earth.getRadius() - _radius;
}

int main() {
    const double earth_radius = 6378100;
    std::cout << earth_and_rope(earth_radius);
}