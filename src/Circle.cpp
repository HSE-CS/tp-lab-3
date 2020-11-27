#include "Circle.h"
#include <math.h>

#define M_PIl          3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091

Circle::Circle(double radius) {
    this->radius = radius;
    ference = radius * 2 * M_PIl;
    area = M_PIl * pow(radius, 2);
}

void Circle::setRadius(double radius) {
    this->radius = radius;
    ference = radius * 2 * M_PIl;
    area = M_PIl * pow(radius, 2);
}

void Circle::setFerence(double ference) {
    this->ference = ference;
    radius = ference / (2 * M_PIl);
    area = ference / 2 * radius;
}

void Circle::setArea(double area) {
    this->area = area;
    radius = sqrt(area / M_PIl);
    ference = area / radius * 2;
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
