#include <cmath>

#include "Circle.h"

Circle::Circle(double radius) {
    setRadius(radius);
}

void Circle::setRadius(double radius) {
    this->radius = radius;
    this->ference = 2 * M_PI * this->radius;
    this->area = M_PI * pow(this->radius, 2);
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    this->radius = this->ference / (2 * M_PI);
    this->area = M_PI * pow(this->radius, 2);
}

void Circle::setArea(double area) {
    this->area = area;
    this->radius = sqrt(this->area / M_PI);
    this->ference = 2 * M_PI * this->radius;
}

double Circle::getRadius() {
    return this->radius;
}

double Circle::getFerence() {
    return this->ference;
}

double Circle::getArea() {
    return this->area;
}