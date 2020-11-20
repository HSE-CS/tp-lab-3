#include <iostream>
#include "task1.h"
#include "Circle.h"

using namespace std;

int main() {
	cout << "Cost " << calcCost() << endl;
	cout << (calcCost() == 72256.63103256523) << endl;
	return 0;
}