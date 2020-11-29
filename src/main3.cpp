#include "DateTime.h"
#include <iostream>

using namespace std;

int main() {
	DateTime dt(1, 9, 2020);
	cout << dt.getTomorrow() << endl;
	DateTime dt2(29, 11, 2020);
	cout << dt2.getToday() << endl;
	DateTime dt3(20, 11, 2020);
	DateTime dt4(20, 11, 2020);
	cout << dt3.getDifference(dt4) << endl;
	DateTime dt5(29, 11, 2020);
	DateTime dt6(30, 11, 2020);
	cout << dt5.getDifference(dt6) << endl;
}