#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Circle.h"

double calcDelta(){
double earth=6378100;
Circle a(earth);
double f=a.getFerence();
a.setFerence(f+1);
double r=a.getRadius();
return r-earth;
}

double calcCost(){
Circle a(3),b(4);
double road=(b.getArea()-a.getArea())*1000;
double wall=b.getFerence()*2000;
return road+wall;
}
