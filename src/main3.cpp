#include "DateTime.h"
#include <iostream>

using namespace std;

int main() {
    DateTime datetime;
    cout << datetime.getPast(70) << endl;
    cout << datetime.getFuture(70) << endl;
    cout << datetime.getYesterday() << endl;
    cout << datetime.getToday() << endl;
    cout << datetime.getTomorrow() << endl;
    DateTime datetime(27, 10, 2020);
    DateTime datetime2(29, 10, 2020);
    cout << dt1.getDifference(dt2) << endl;
}
