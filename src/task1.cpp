//
// Created by stoja on 10.12.2020.
//

#include "task1.h"

double calcDelta() {
    Circle a(0), b(0);
    a.setFerence(63781);
    b.setFerence(a.getFerence() + 1);
    return b.getRadius() - a.getRadius();
}

double calcCost() {
    Circle p(3);
    double f_r = p.getRadius() + 1;
    Circle l(f_r);
    Circle f(f_r);
    return (l.getArea() - p.getArea()) * 1000 + f.getFerence() * 2000;
}
