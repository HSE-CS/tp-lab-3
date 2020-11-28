#include "DateTime.h"

int main(){
    DateTime date1(12,02,2011);
    DateTime date2(17,02,2011);
    cout << date1.getToday() << endl;
    cout << date1.getTomorrow() << endl;
    cout << date1.getYesterday() << endl;
    cout << date1.getFuture(3) << endl;
    cout << date1.getPast(4) << endl;
    cout << date1.getDifference(date2) << endl;
    return 0;
}