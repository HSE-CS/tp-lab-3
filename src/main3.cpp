#include <iostream>
#include <string>
#include "DateTime.h"
using namespace std;

int main() {
    DateTime dt(31, 10, 2018);
    cout << "\n01 november 2018, thursday\n" << dt.getTomorrow() << endl;
    DateTime dt1(1, 11, 2018);
    cout << "\n02 november 2018, friday\n" << dt1.getTomorrow() << endl;
    DateTime dt2(1, 11, 2018);
    cout << "\n01 november 2018, thursday\n" << dt2.getToday() << endl;
    DateTime dt3(20, 11, 2018);
    DateTime dt4(20, 11, 2018);
    cout << "\n0\n" << dt3.getDifference(dt4) << endl;
    DateTime dt5(20, 11, 2018);
    DateTime dt6(21, 11, 2018);
    cout << "\n1\n" << dt5.getDifference(dt6) << endl;
}