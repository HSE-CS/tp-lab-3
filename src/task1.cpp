#include "task1.h"
#include "Circle.h"
#include <iostream>
#include <cmath>

double calcDelta()
{
  Circle c;
  c.setFerence(6378.1 * 1000);
  double radius = c.getRadius();
  c.setFerence(6378.1 * 1000 + 1);
  return c.getRadius() - radius;
}

double calcCost()
{
  Circle big, small;
  small.setRadius(3);
  big.setRadius(small.getRadius() + 1);
  return (big.getArea() - small.getArea()) * 1000 + 2000 * big.getFerence();

}
