#include <iostream>
#include "Circle.h"
#include "task1.h"

using namespace std;

int main() {
    Circle circle(40.0);
    cout << circle.getFerence() << endl;
    cout << calcDelta() << endl;
    cout << calcCost() << endl;
    return 0;
}
