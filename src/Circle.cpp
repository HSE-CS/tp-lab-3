#include "Circle.h"
#include <math.h>

double pi = 2 * acos(0.0);

Circle::Circle() {
    setRadius(0);
}

Circle::Circle(double r) {
    setRadius(r);
}

void Circle::setRadius(double r){
    radius = r;
    ference = 2 * pi * radius;
    area = pi * radius * radius;
}

void Circle::setFerence(double f){
    ference = f;
    radius = ference/(2 * pi);
    area = pi * radius * radius;
}

void Circle::setArea(double a){
    area = a;
    radius = sqrt(area / pi);
    ference = 2 * pi * radius;
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