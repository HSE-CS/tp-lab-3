/*
 * @author Stanislav Stoianov
 */

#include "../include/Circle.h"

void Circle::setRadius(double radius) {
    this->radius = radius;
    this->ference = 2.0 * M_PI * radius;
    this->area = M_PI * radius * radius;
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    this->radius = ference / (2.0 * M_PI);
    this->area = M_PI * radius * radius;
}

void Circle::setArea(double area) {
    this->radius = sqrt(area / M_PI);
    this->ference = 2.0 * M_PI * this->radius;
    this->area = area;
}
