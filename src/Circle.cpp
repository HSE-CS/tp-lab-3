#include <cmath>
#include "Circle.h"
#include <iostream>


Circle::Circle(double radius) {
    this->radius = radius;
    this->ference = 2 * PI * radius;
    this->area = PI * radius * radius;
}

double Circle::getRadius() {
    return this->radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
    this->ference = 2 * PI * radius;
    this->area = PI * radius * radius;
}

double Circle::getFerence() {
    return this->ference;
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    this->radius = ference / (2 * PI);
    this->area = PI * this->radius * this->radius;
}

double Circle::getArea() {
    return this->area;
}

void Circle::setArea(double area) {
    this->area = area;
    this->radius = sqrt(ference / PI);
}

