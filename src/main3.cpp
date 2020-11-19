#include <iostream>
#include <ctime>
#include "DateTime.h"

using namespace std;


int main() {
	DateTime dat(18, 11, 2019);
	cout << dat.getTomorrow() << endl;
	cout << dat.getYesterday() << endl;

	DateTime dat2(30, 11, 2020);
	cout << dat2.getDifference(dat) << endl;

}