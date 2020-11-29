//
// Created by Valera on 27.11.2020.
//

#include <cmath>
#include "Circle.h"

#define PI acos(-1)

Circle::Circle(double radius) {
    Circle::setRadius(radius);
}

void Circle::setRadius(double r) {
    Circle::radius = r;
    Circle::ference = 2 * PI * radius;
    Circle::area = PI * pow(radius, 2);
}

void Circle::setFerence(double f) {
    Circle::ference = f;
    Circle::radius = ference / (2 * PI);
    Circle::area = PI * pow(Circle::radius, 2);
}

void Circle::setArea(double a) {
    Circle::area = a;
    Circle::radius = pow(area / PI, 0.5);
    Circle::ference = 2 * PI * Circle::radius;
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

