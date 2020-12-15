//
// Created by stoja on 10.12.2020.
//
#include "Circle.h"
#include <cmath>

using namespace std;

Circle::Circle(double radius) {
    this->radius = radius;
    this->ference = 2 * M_PI * radius;
    this->area = M_PI * radius * radius;
}

double Circle::getRadius() {
    return this->radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
    this->ference = 2 * M_PI * radius;
    this->area = M_PI * radius * radius;
}

double Circle::getFerence() {
    return this->ference;
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    this->radius = ference / (2 * M_PI);
    this->area = M_PI * this->radius * this->radius;
}

double Circle::getArea() {
    return this->area;
}

void Circle::setArea(double area) {
    this->area = area;
    this->radius = sqrt(ference / M_PI);
}
