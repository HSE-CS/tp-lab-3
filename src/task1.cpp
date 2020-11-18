#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Circle.h"

double calcDelta(){
Circle a(6378.1);
Circle b(0);
b.setFerence(a.getFerence()+1);
return b.getRadius()-a.getRadius();
}

double calcCost(){
Circle a(3),b(4);
double road=(b.getArea()-a.getArea())*1000;
double wall=b.getFerence()*2000;
return road+wall;
}
