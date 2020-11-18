#ifndef TASK1_CIRCLE_CPP
#define TASK1_CIRCLE_CPP

#include "Circle.h"
#define PI 3.14159265358979323846
#include <cmath>

Circle::Circle(double x) {
    this->radius = x;
    this->ference = 2 * PI * x;
    this->area = PI * x * x;
}

void Circle::setRadius(double x) {
    this->radius = x;
    this->ference = 2 * PI * x;
    this->area = PI * x * x;
}

void Circle::setFerence(double x) {
    this->radius = x / 2 / PI;
    this->ference = x;
    this->area = x * x / 4 / PI;
}

void Circle::setArea(double x) {
    this->radius = sqrt(x / PI);
    this->ference = sqrt(x / PI) * 2 * PI;
    this->area = x;
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

#endif