#include <iostream>
#include <string>
#include "DateTime.h"

int main() {
	DateTime dt1(20, 11, 2018);
	DateTime dt2(21, 11, 2018);
	DateTime dt3;
	cout << dt3.getToday() << endl;
	cout << dt1.getDifference(dt2) << endl;
	cout << dt2.getTomorrow() << endl;
	return 0;
}