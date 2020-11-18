#include "Circle.h"
#include <iostream>
#include <cmath>

void Circle::setRadius(double new_radius)
{
  radius = new_radius;
  ference = 3.14 * 2 * radius;
  area = 3.14 * radius * radius;
}

void Circle::setFerence(double new_ference)
{
  ference = new_ference;
  radius = ference / (2 * 3.14);
  area = 3.14 * radius * radius;
}

void Circle::setArea(double new_area)
{
  area = new_area;
  radius = sqrt(area / 3.14);
  ference = 3.14 * 2 * radius;
}

double Circle::getRadius()
{
  return radius;
}
double Circle::getFerence()
{
  return ference;
}
double Circle::getArea()
{
    return area;
}
