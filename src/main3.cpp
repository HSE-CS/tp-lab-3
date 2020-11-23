#include <iostream>
#include <cstring>
#include <ctime>
#include "DateTime.h"

using namespace std;

int main() {
    /*const time_t timer = time(nullptr);
    tm *ltm = localtime(&timer);
    cout << ltm->tm_wday;*/
    DateTime dt(1, 11, 2018);
    cout << dt.getToday() << endl << endl;

    DateTime dt2(31, 10, 2018);
    cout << dt2.getTomorrow() << endl << endl;

    DateTime dt3(1, 11, 2018);
    cout << dt3.getTomorrow() << endl << endl;

    DateTime dt4(20, 11, 2018);
    DateTime dt5(21, 11, 2018);
    cout << dt4.getDifference(dt5) << endl << endl;

    DateTime dt6(20, 11, 2018);
    DateTime dt7(20, 11, 2018);
    cout << dt6.getDifference(dt7) << endl << endl;

    DateTime dt8(20, 11, 2018);
    cout << dt8.getFuture(365) << endl << endl;
    cout << dt8.getPast(4) << endl << endl;
}