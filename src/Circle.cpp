#include "Circle.h"

void Circle::setRadius(double r) {
    radius = r;
    area = M_PI * pow(radius, 2);
    ference = 2 * M_PI * radius;
}

void Circle::setFerence(double f) {
    ference = f;
    area = M_PI * pow(radius, 2);
    radius = ference/(2 * M_PI)
}

void Circle::setArea(double a) {
    area = a;
    radius = sqrt(area/M_PI);
    ference = 2 * M_PI * radius;
}

double Circle::getRadius() {
    return Circle::radius;
}

double Circle::getFerence() {
    return Circle::ference;
}

double Circle::getArea() {
    return Circle::area;
} 