//Circle.h - описание класса `Circle`
#include <cmath>

#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H
class Circle
{
private:
    double radius;
    double ference;
    double area;
public:
    Circle(double d);
    void setRadius(double);
    void setFerence(double);
    void setArea(double);
    double getRadius();
    double getFerence();
    double getArea();


};

double sk(double r);
//{
  //  return M_PI*(r*r);
//}

double len(double r);
//{
  //  return 2*M_PI*r;
//}

#endif //TASK1_CIRCLE_H
/*
В класс `Circle` включить конструктор,
 принимающий значение радиуса.

*Замечание*

- при установке значения радиуса пересчитывать длину окружности и площадь;
- при установке длины окружности пересчитывать радиус и площадь;
- при установке площади пересчитывать радиус и длину окружности.
*/
