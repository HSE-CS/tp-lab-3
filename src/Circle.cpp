#include "Circle.h"
#include <math.h>

void Circle::setRadius(double radius) {
    this->radius = radius;
    ference = radius * 2 * M_PI;
    area = M_PI * pow(radius, 2);
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    radius = ference / (2 * M_PI);
    area = ference / 2 * radius;
}

void Circle::setArea(double area) {
    this->area = area;
    radius = sqrt(area / M_PI);
    ference = area / radius * 2;
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
