#include <iostream>
#include "Circle.h"
#include "task1.h"


//"Земля и верёвка"
//
//Представим, что земля имеет форму идеального шара.
// Вокруг поверхности земного шара туго натянута верёвка (между ней и поверхностью нет никакого зазора).
// Кто-то разрезает верёвку в произвольном месте и добавляет кусок верёвки длиной 1 метр.
// После вставки между поверхностью земли и верёвкой возникает зазор, вызванный увеличением длины.
// Найти величину этого зазора. Примем за радиус земли расстояние в 6378.1 км

int main() {
    double RadiusEarth = 6378000; // meter

    Circle oldEarth(RadiusEarth);
    Circle newEarth;

    newEarth.setFerence(oldEarth.getFerence() + 1);

    std::cout << calcDelta(newEarth, oldEarth) << std::endl;
    return 0;
}
