#include "Circle.h"

Circle::Circle(double rad) {
    this->setRadius(rad);
}

void Circle::setRadius(double rad) {
    radius = rad;
    ference = 2 * M_PI * radius;
    area = M_PI * radius * radius;
}
void Circle::setFerence(double fer) {
    ference = fer;
    radius = ference / (2 * M_PI);
    area = M_PI * (radius * radius);
}
void Circle::setArea(double ar) {
    area = ar;
    radius = sqrt(area / M_PI);
    ference = 2 * M_PI * radius;
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