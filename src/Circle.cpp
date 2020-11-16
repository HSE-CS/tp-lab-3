//
// Created by Алексей Трутнев on 16.11.2020.
//

#include "Circle.h"
#include <math.h>

void Circle::setRadius(double R) {
    this->radius = R;
    this->ference = 2 * M_PI * radius;
    this->area = M_PI * radius * radius;
}

void Circle::setFerence(double F) {
    this->radius = F / (2 * M_PI);
    this->ference = F;
    this->area = M_PI * radius * radius;
}

void Circle::setArea(double A) {
    this->radius = sqrt(A / (M_PI));
    this->ference = 2 * M_PI * radius;
    this->area = A;
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
