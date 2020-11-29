#ifndef _CIRCLE_H
#define _CIRCLE_H

#include<cmath>
#include <iostream>


using namespace std;

class Circle
{
private:
    double radius;
    double ference;
    double area;
public:
    Circle(double R)
    {
        double pi = 2 * acos(0.0);
        radius = R;
        ference = 2 * pi * radius;
        area = pi *  radius * radius;
    }
	
    void setRadius(double R);
    void setFerence(double F);
    void setArea(double A);
    double getRadius() const;
    double getFerence() const;
    double getArea() const;
};
#endif 