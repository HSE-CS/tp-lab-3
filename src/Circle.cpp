//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>

#include "Circle.h"

#include <iostream>
#include <cstdlib>
#include <math.h>

Circle::Circle(){
}

Circle::Circle(double radius){
    this->setRadius(radius);
}

double Circle::getRadius(){
    return this->radius;
}

double Circle::getFerence(){
    return this->ference;
}

double Circle::getArea(){
    return this->area;
}

void Circle::setRadius(double radius){
    this->radius = radius;
    this->area = this->pi * radius * radius;
    this->ference = this->pi * 2 * radius;
}

void Circle::setFerence(double ference){
    this->ference = ference;
    this->radius = ference / (this->pi * 2);
    this->area = this->pi * radius * radius;
}

void Circle::setArea(double area){
    this->area = area;
    this->radius = sqrt(area/(this->pi));
    this->ference = this->pi * 2 * radius;
}

//int main(){
//    Circle c(10.0);
//    std::cout << "Radius 10, Area " << c.getArea() << ", Ference " << c.getFerence() << "\n";
//}
