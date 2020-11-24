#include "Circle.h"
#include <cmath>
void Circle::setRadius(double radiusValue) {
    radius = radiusValue;
    ference = 2 * M_PI * radiusValue;
    area = M_PI * radiusValue * radiusValue;
}
void Circle::setFerence(double ferenceValue){
    ference = ferenceValue;
    radius = ferenceValue/(2* M_PI);
    area = M_PI * radius * radius;
}

void Circle::setArea(double areaValue){
    area = areaValue;
    radius = pow(areaValue/M_PI,0.5);
    ference = 2 * M_PI * radius;
}


double Circle::getRadius() const
{
return radius;

}



double Circle::getFerence() const{
    return ference;

}

double Circle::getArea() const{
    return area;
}


