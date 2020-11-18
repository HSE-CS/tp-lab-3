#include <iostream>
#include "Circle.h"
#include "task1.h"

using namespace std;

int main()
{
    cout.precision(17);
    Circle pool(3.0);
    Circle road(4.0);

    cout << "Pool:\n\t" << pool.getRadius() << "\n\t" << pool.getFerence() << "\n\t" << pool.getArea() << endl;

    cout << "Road:\n\t"  << road.getRadius() << "\n\t" << road.getFerence() << "\n\t" << road.getArea() << endl;

    cout << "The cost: " << endl;
    cout << calcCost() << endl;

    return 0;
}