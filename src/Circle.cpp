//
// Created by Данил on 24.11.2020.
//

#include "Circle.h"

#include <cmath>

Circle::Circle(double value) {
    this->radius = value;
    this->ference = 2 * this->radius * __math__pi;
    this->area = __math__pi * this->radius * this->radius;
}

void Circle::setRadius(double value) {
    this->radius = value;
    this->ference = 2 * this->radius * __math__pi;
    this->area = __math__pi * this->radius * this->radius;
}

void Circle::setFerence(double value) {
    this->ference = value;
    this->radius = this->ference / (2 * this->__math__pi);
    this->area = __math__pi * this->radius * this->radius;
}

void Circle::setArea(double value) {
    this->area = value;
    this->radius = sqrt(this->area / this->__math__pi);
    this->ference = 2 * this->radius * __math__pi;
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
