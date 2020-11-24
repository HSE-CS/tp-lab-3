//
// Created by Данил on 24.11.2020.
//

#include "task1.h"
#include "Circle.h"


double calcDelta() {
    double delta;

    double earthRadius = 6378.1;

    Circle earth{earthRadius};
    Circle modified{earth.getRadius()};
    modified.setFerence(modified.getFerence() + 1.);


    delta = modified.getRadius() - earth.getRadius();


    return delta;
}
