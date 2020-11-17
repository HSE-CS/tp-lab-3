//
// Created by sharg on 17.11.2020.
//
#include "Circle.h"

using namespace std;


void Circle::setRadius(double radiusValue) {
    radius = radiusValue;
    ference = 2 * M_PI * radiusValue;
    area = M_PI * radiusValue * radiusValue;
}

void Circle::setFerence(double ferenceValue) {
    radius = ferenceValue / M_PI / 2;
    ference = ferenceValue;
    area = M_PI * radius * radius;
}

void Circle::setArea(double areaValue) {
    radius = sqrt(areaValue / M_PI);
    ference = 2 * M_PI * radius;
    area = areaValue;
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
