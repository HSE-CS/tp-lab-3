#include <cmath>
#define sqr(x) pow(x, 2)

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
private:
    double radius;
    double ference;
    double area;
public:
    Circle();
    Circle(double radius);
    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);
    double getRadius();
    double getFerence();
    double getArea();
};

Circle::Circle(){
    this->radius = 0.0;
    this->ference = 0.0;
    this->area = 0.0;
}

Circle::Circle(double radius){
    this->setRadius(radius);
}

void Circle::setRadius(double radius){
    this->radius = radius;
    this->ference = 2 * M_PI * radius;
    this->area = M_PI * sqr(radius);
}

void Circle::setFerence(double ference){
    this->ference = ference;
    double radius = ference / (2 * M_PI);
    this->radius = radius;
    this->area = M_PI * sqr(radius);
}

void Circle::setArea(double area){
    this->area = area;
    double radius = sqrt(area / M_PI);
    this->radius = radius;
    this->area = M_PI * sqr(radius);
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


#endif // CIRCLE_H
