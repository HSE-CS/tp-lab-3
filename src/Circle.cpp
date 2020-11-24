#include "Circle.h"

double Circle::getRadius() const {
    return radius;
}

double Circle::getFerence() const {
    return ference;
}

double Circle::getArea() const {
    return area;
}

void Circle::setRadius(double radius_) {
    this->ference = calcFerence(radius_);
    this->area = calcArea(radius_);
    this->radius = radius_;
}

void Circle::setFerence(double ference_) {
    this->radius = calcRadius(ference_, -1);
    this->area = calcArea(this->radius);
    this->ference = ference_;
}

void Circle::setArea(double area_) {
    this->radius = calcRadius(-1, area_);
    this->ference = calcFerence(this->radius);
    this->area = area_;
}

double Circle::calcRadius(double ference_ = -1,
                          double area_ = -1){
    if (ference_ >= 0)
        return ference_/(2*M_PI);
    else if (area_ >= 0)
        return sqrt(area_/M_PI);
    else
        return -1;
}

double Circle::calcFerence(double radius_){
    return 2*M_PI*radius_;
}

double Circle::calcArea(double radius_){
    return M_PI*radius_*radius_;
}
