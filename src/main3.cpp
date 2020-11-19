#include "DateTime.h"
#include <iostream>

using namespace std;

int main() {
	DateTime dt(31, 10, 2018);
	cout << dt.getToday() << endl;
	cout << "01 november 2018, thursday   -  " << dt.getTomorrow() << endl;
	DateTime dt2(1, 11, 2018);
	cout << "02 november 2018, friday  -   " << dt2.getTomorrow() << endl;
	DateTime dt3(1, 11, 2018);
	cout << "01 november 2018, thursday   -  " << dt3.getToday() << endl;
	DateTime dt4(20, 11, 2018);
	DateTime dt5(20, 11, 2018);
	cout << 0 << " - " << dt4.getDifference(dt5) << endl;
	DateTime dt6(20, 11, 2018);
	DateTime dt7(21, 11, 2018);

	cout << 1 << " - " << dt7.getDifference(dt6) << endl;

	return 0;
}