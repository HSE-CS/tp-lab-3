/*
 * @author Stanislav Stoianov
 */

#include "../include/Circle.h"

void Circle::setRadius(double radius) {
    this->radius = radius;
    this->ference = 2 * M_PI * radius;
    this->area = M_PI * radius * radius;
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    this->radius =  ference / (2 * M_PI);
    this->area = (ference * ference) / ( 4 * M_PI);
}

void Circle::setArea(double area) {
    this->area = area;
    this->radius = sqrt(area / M_PI);
    this->ference = sqrt(4 * M_PI * area);
}
