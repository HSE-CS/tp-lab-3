#include "Circle.h"
#define _USE_MATH_DEFINES
#include <cmath>




Circle::Circle(double r){
radius=r;
ference=2*M_PI*r;
area=M_PI*r*r;
}


void    Circle::setRadius(double r){
radius=r;
ference=2*M_PI*r;
area=M_PI*r*r;
}

void    Circle::setFerence(double f){
radius=(f/(2*M_PI));
ference=f;
area=M_PI*radius*radius;
}

void    Circle::setArea(double a){
radius=sqrt(a/M_PI);
ference=2*M_PI*radius;
area=a;
}

double  Circle::getRadius() const{
return radius;
}

double  Circle::getFerence() const{
return ference;
}

double  Circle::getArea() const{
return area;
}



