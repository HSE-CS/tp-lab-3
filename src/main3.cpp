#include <iostream>
#include "DateTime.h"

using namespace std;

int main(){
    DateTime dt1(20,11,2018);
    DateTime dt2(21,11,2018);
    cout << dt2.getDifference(dt1) << endl;
    DateTime today;
    cout << today.getToday() << endl;
    cout << today.getTomorrow() << endl;
    cout << today.getYesterday() << endl;
    cout << today.getFuture(100) << endl;
    cout << today.getPast(50)<< endl;
}