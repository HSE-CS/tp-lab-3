#include "Circle.h"

Circle::Circle(double rad) {
    setRadius(rad);
}

void Circle::setRadius(double rad) {
    this->radius = rad;
    this->ference = 2 * pi * radius;
    this->area = pi * radius * radius;
}

void Circle::setFerence(double fer) { // длина окр
    this->ference = fer;
    this->radius = ference / (2 * pi);
    this->area = pi * radius * radius;
}

void Circle::setArea(double ar) {
    this->area = ar;
    this->radius = sqrt(area / pi);
    this->ference = 2 * radius * pi;
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
