//
// Created by jmax on 30.11.2020.
//

#include <cmath>
#include "Circle.h"

void Circle::recalculateFields(double changedField, Type typeOfField) {
    switch (typeOfField) {
        case RADIUS:
            radius = changedField;
            area = M_PI * pow(radius, 2.0);
            ference = 2.0 * M_PI * radius;
            break;
        case AREA:
            area = changedField;
            radius = sqrt(area / M_PI);
            ference = 2.0 * M_PI * radius;
            break;
        case FERENCE:
            ference = changedField;
            radius = (changedField / 2.0) / M_PI;
            area = M_PI * pow(radius, 2.0);
            break;
    }
}

void Circle::setArea(double area) {
    recalculateFields(area, AREA);
}

void Circle::setFerence(double ference) {
    recalculateFields(ference, FERENCE);
}

void Circle::setRadius(double radius) {
    recalculateFields(radius, RADIUS);
}

double Circle::getArea() const {
    return area;
}

double Circle::getFerence() const {
    return ference;
}

double Circle::getRadius() const {
    return radius;
}