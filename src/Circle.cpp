#include "../include/Circle.h"

void Circle::setRadius(double radius_inp) {
    radius = radius_inp;
    area = pow(radius, 2) * M_PI;
    ference = 2 * M_PI * radius;
}

void Circle::setFerence(double ference) {
    ference = ference;
    radius = ference / 2 / M_PI;
    area = pow(radius, 2) * M_PI;
}

void Circle::setArea(double area) {
    area = area;
    radius = sqrt(area / M_PI);
    ference = 2 * M_PI * radius;
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