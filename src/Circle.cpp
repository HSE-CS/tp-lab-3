//
// Created by freeb on 16.11.2020.
//

#include "Circle.h"

Circle::Circle(double _radius) {
    Circle::setRadius(_radius);
}

double Circle::getRadius() const{
    return radius;
}

void Circle::setRadius(double _radius) {
    Circle::radius = _radius;
    Circle::ference = 2 * M_PI * radius;
    Circle::area = M_PI * pow(radius, 2);
}

double Circle::getFerence() const {
    return ference;
}

void Circle::setFerence(double _ference) {
    Circle::ference = _ference;
    Circle::radius = ference / (2 * M_PI);
    Circle::area = M_PI * pow(Circle::radius, 2);
}

double Circle::getArea() const {
    return area;
}

void Circle::setArea(double _area){
    Circle::area = _area;
    Circle::radius = pow(area / M_PI, 0.5);
    Circle::ference = 2 * M_PI * Circle::radius;
}
