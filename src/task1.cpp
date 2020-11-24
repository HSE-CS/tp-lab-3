//
// Created by Данил on 24.11.2020.
//

#include "task1.h"
#include "Circle.h"


double calcDelta() {

    double earthRadius = 6378.1;

    Circle earth{earthRadius};
    Circle modified{earth.getRadius()};

    modified.setFerence(modified.getFerence() + 1.);


    return modified.getRadius() - earth.getRadius();
}

double calcCost() {

    double poolRadius = 3;
    double trackCost{1000.};
    double fenceCost{2000.};

    Circle pool{poolRadius};
    Circle fence{pool.getRadius()};

    return (fence.getArea() - pool.getArea()) * trackCost + fence.getFerence() * fenceCost;

}
