#include "Circle.h"

double makeFerence(double radius);
double makeArea(double radius);
double makeRadiusFromFerence(double ference);
double makeRadiusFromArea(double area);


Circle::Circle (double rad){ 
    this->radius = rad;
    this->ference = makeFerence(rad);
    this->area = makeArea(rad);
}

void Circle::setRadius(double radius){
    this->radius = radius;
    this->ference = makeFerence(this->radius);
    this->area = makeArea(this->radius);
}
void Circle::setFerence(double ference){
    this->ference = ference;
    this->radius = makeRadiusFromFerence(this->ference);
    this->area = makeArea(this->radius);
}
void Circle::setArea(double area){
    this->area = area;
    this->radius = makeRadiusFromArea(this->area);
    this->ference = makeFerence(this->radius);
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

double makeFerence(double radius){
    return 2*M_PI*radius;
}

double makeArea(double radius){
    return M_PI * pow(radius, 2);
}

double makeRadiusFromFerence(double ference){
    return ference/(2*M_PI);
}

double makeRadiusFromArea(double area){
    return sqrt(area/M_PI);
}