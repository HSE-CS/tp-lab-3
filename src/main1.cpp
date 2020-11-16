//
// Created by Vadim Makarov on 16.11.2020.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Circle.h"


using namespace std;

int main(){
    //Circle circle(10.0);

    std::cout << std::setprecision(17);

    //cout << circle.getArea() << endl;
    //cout << circle.getFerence() << endl;

    //--------------------------------------------------------------------------------------------

    Circle earth(6378.1);
    Circle rope;
    rope.setFerence(earth.getFerence() + 1);

    /*cout << earth.getFerence() << endl;
    cout << rope.getFerence() << endl;

    cout << rope.getArea() << endl;
    cout << earth.getArea() << endl;*/

    cout << rope.getArea() - earth.getArea();




}