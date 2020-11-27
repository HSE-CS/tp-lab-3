//
// Created by arkly on 24.11.2020.
//

#include "Circle.h"
#include <cmath>

Circle::Circle(double _radius) : radius(_radius) {}
Circle::Circle() : radius(0), area(0), ference(0) {}

void Circle::setRadius(double _radius) {
    radius = _radius;
    ference = 2 * pi * radius;
    area = pi * radius * radius;
}
void Circle::setFerence(double _ference) {
    ference = _ference;
    radius = ference / (2 * pi);
    area = pi * radius * radius;
}
void Circle::setArea(double _area) {
    area = _area;
    radius = sqrt(area/pi);
    ference = ference = 2 * pi * radius;
}
double Circle::getArea() const {return area; }
double Circle::getFerence() const {return ference; }
double Circle::getRadius() const {return radius; }