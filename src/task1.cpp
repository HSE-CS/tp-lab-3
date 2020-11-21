#include "task1.h"

double calcDelta()
{
    const double earthRadius = 6378.1;
    double elong = 1;

    Circle circle(earthRadius);
    circle.setFerence(circle.getFerence() + elong);

    double delta = (circle.getRadius() - earthRadius);
    return delta;
}

double calcCost()
{
    const double poolRad = 3, fenceRad = 4;

    Circle circle(poolRad);
    double poolArea = circle.getArea();

    circle.setRadius(fenceRad);
    double fenceArea = circle.getArea();
    double fenceFer = circle.getFerence();

    const double fencePr = 2000, trackPr = 1000;
    double totalPr = (fenceArea - poolArea) * trackPr ;
    totalPr += fenceFer * fencePr;
    return totalPr;
}

