#include "DateTime.h"
#include <iostream>

using namespace std;

int main() {

	DateTime date(1, 11, 2018);

	cout << date.getYesterday() << endl;
	cout << date.getToday() << endl;
	cout << date.getTomorrow() << endl;

	return 0;
}
