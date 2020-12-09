#include "../include/DateTime.h"


using namespace std;
int main()
{
    DateTime date;
    DateTime dateT (31,8,2020);
    cout << dateT.getToday() << endl;
    cout << dateT.getTomorrow() << endl;
    cout << date.getToday() << endl;
    cout << date.getYesterday() << endl;
    cout << date.getTomorrow() << endl;
    cout << date.getFuture(4000) << endl;
    cout << date.getPast(78) << endl;
    DateTime birthday(25, 5, 2001);
    cout << birthday.getToday() << endl;
    cout << date.getDifference(birthday) << endl;
}