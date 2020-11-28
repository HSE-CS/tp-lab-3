#include "DateTime.h"
#include <iostream>

using namespace std;

int main() {
	
	DateTime dt(1, 11, 2018);
	cout << dt.getToday();
	return 0;
}