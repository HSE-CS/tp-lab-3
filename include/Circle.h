//
//  task1.hpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#ifndef Circle_h
#define Circle_h

#include <iostream>
#include <string.h>

class Circle{
private:
    double radius = 0.0;
    double ference = 0.0;
    double area = 0.0;
//    const double pi = 3.1415926535;
public:
    Circle();
    Circle(double radius);

    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);

    double getRadius();
    double getFerence();
    double getArea();
};

#endif
