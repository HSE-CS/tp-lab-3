#include "Circle.h"
#include <math.h>

#define M_PIl          3.141592653589793238462643383279502884197169399375105820974944

Circle::Circle(double radius) {
    this->radius = radius;
    ference = radius * 2 * M_PIl;
    area = M_PIl * pow(radius, 2);
}

void Circle::setRadius(double radius) {
    this->radius = radius;
    ference = radius * 2 * M_PIl;
    area = M_PIl * pow(radius, 2);
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    radius = ference / (2 * M_PIl);
    area = ference / 2 * radius;
}

void Circle::setArea(double area) {
    this->area = area;
    radius = sqrt(area / M_PIl);
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
