#include "Circle.h"

Circle::Circle(double radius) {
    setRadius(radius);
}

void Circle::setRadius(double radius) {
    this->radius = radius;
    this->ference = 2 * pi * radius;
    this->area = pi * radius * radius;
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    this->radius = ference / pi / 2;
    this->area = pi * this->radius * this->radius;
}

void Circle::setArea(double area) {
    this->area = area;
    this->radius = sqrt(area / pi);
    this->ference = 2 * pi * this->radius;
}

double Circle::getRadius() {
    return radius;
}

double Circle::getFerence() {
    return ference;
}

double Circle::getArea() {
    return area;
}