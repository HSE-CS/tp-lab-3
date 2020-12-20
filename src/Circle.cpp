//
// Created by vladimir on 20.12.2020.
//

#include "Circle.h"
#include <cmath>

Circle::Circle(double radius) {
    this->setRadius(radius);
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getFerence() const {
    return ference;
}

double Circle::getArea() const {
    return area;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
    ference = 2 * radius * M_PI;
    area = M_PI * radius * radius;
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    radius = (ference / 2) / M_PI;
    area = ference / 2 * radius;
}

void Circle::setArea(double area) {
    this->area = area;
    radius = sqrt(area / M_PI);
    ference = 2 * radius * M_PI;
}
