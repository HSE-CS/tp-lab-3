#include "Circle.h"
#include <math.h>

Circle::Circle(double r){
    this->setRadius(r);
}
void Circle::setRadius(double r){
    this->radius = r;
    this->area = M_PI*r*r;
    this->ference = 2.0*M_PI*r;
}
void Circle::setFerence(double c){
    this->radius = c/(M_PI*2.0);
    this->area = this->radius*radius*M_PI;
    this->ference = c;
}
void Circle::setArea(double a){
    this->radius = sqrt(a/M_PI);
    this->area = a;
    this->ference = 2.0*M_PI*this->radius;
}
double Circle::getRadius(){
    return this->radius;
}
double Circle::getFerence(){
    return this->ference;
}
double Circle::getArea(){
    return this->area;
}