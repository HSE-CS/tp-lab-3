#include <iostream>
#include <cmath>
#include "Circle.h"
#define PI 3.14
using namespace std;



Circle::Circle(double input_radius) {
    radius = input_radius;
    ference = 2 * PI * input_radius;
    area = PI * input_radius * input_radius;
}

void Circle::setArea(double input_area) {
    area = input_area;
    radius = sqrt(area / PI);
    ference = PI * 2 * radius;
}

void Circle::setFerence(double input_ference) {
    ference = input_ference;
    radius = ference / (2 * PI);
    area = 2 * PI * (radius * radius);
}

void Circle::setRadius(double input_radius) {
    radius = input_radius;
    ference = 2 * PI * radius;
    area = 2 * PI * (radius * radius);
}

double Circle::getArea() {
    return area;
}

double Circle::getFerence() {
    return ference;
}

double Circle::getRadius() {
    return radius;
}
