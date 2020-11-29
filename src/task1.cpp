#include "task1.h"
#include "Circle.h"
#include <iostream>
#include <cmath>

double calcDelta()
{
  Circle c(6378100);
  double radius = c.getRadius();
  c.setFerence(c.getFerence() + 1);
  return c.getRadius() - radius;
}

double calcCost()
{
  Circle small(3);
  Circle big(small.getRadius() + 1);
  return (big.getArea() - small.getArea()) * 1000 + 2000 * big.getFerence();

}
