#include "Circle.h"

void Circle::setRadius(double radius_val) {
    radius = radius_val;
    ference = 2 * M_PI * radius_val;
    area = M_PI * radius_val * radius_val;
}

void Circle::setFerence(double radius_val) {
    radius = radius_val / M_PI / 2;
    ference = radius_val;
    area = M_PI * radius * radius;
}

void Circle::setArea(double area_val) {
    radius = sqrt(area_val / M_PI);
    ference = 2 * M_PI * radius;
    area = area_val;
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