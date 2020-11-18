#include <iostream>
#include "Circle.h"
#include "task1.h"

using namespace std;

int main()
{
    cout.precision(17);

    Circle earth(6378100.0); // meters
    Circle rope;
    rope.setFerence(earth.getFerence() + 1.0);

    cout << "Earth:\n\t" << earth.getRadius() << "\n\t" << earth.getFerence() << "\n\t" << earth.getArea() << endl;
    cout << "Rope:\n\t" << rope.getRadius() << "\n\t" << rope.getFerence() << "\n\t" << rope.getArea() << endl;

    cout << "The difference: " << endl;
    cout << calcDelta() << endl;

    return 0;
}