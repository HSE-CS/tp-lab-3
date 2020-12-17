#include "DateTime.h"
#include <iostream>
using namespace std;

int main() {
	DateTime date1{8,5,2000};
	DateTime date2{};
	cout << date1.getToday() << endl; 
	cout << date1.getFuture(10) << endl; 
	cout << date1.getPast(20) << endl;
	cout << date1.getDifference(date2) << endl;
}