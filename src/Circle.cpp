#include "Circle.h"
#define _USE_MATH_DEFINES
#include <math.h>


Circle::Circle() {
    setRadius(0);
}

Circle::Circle(double r) {
    setRadius(r);
}

void Circle::setRadius(double r){
    radius = r;
    ference = 2 * M_PI * radius;
    area = M_PI * radius * radius;
}

void Circle::setFerence(double f){
    ference = f;
    radius = ference/(2 * M_PI);
    area = M_PI * radius * radius;
}

void Circle::setArea(double a){
    area = a;
    radius = sqrt(area / M_PI);
    ference = 2 * M_PI * radius;
}

double Circle::getRadius(){
    return radius;
}

double Circle::getFerence(){
    return ference;
}

double Circle::getArea(){
    return area;
}