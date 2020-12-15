//
// Created by stoja on 10.12.2020.
//

#include "Circle.h"
#include <iostream>
using namespace std;
int main(){
    Circle circle = Circle(6378.1);
    printf("%f\n", circle.getFerence());
    circle.setFerence(circle.getFerence()+0.001);
    printf("%f", circle.getFerence());
}