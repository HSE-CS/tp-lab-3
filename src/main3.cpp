#include "DateTime.h"
#include<string>
#include<ctime>
#include <iostream>
using namespace std;
int main()
{
    //DateTime num1(23, 11, 2020);
    DateTime num2;
    string str = num2.getToday();
    //printf("%s\n", str.c_str());
    cout << str << endl;
        DateTime dt(31, 10, 2018);
        //std::string expect = "01 november 2018, thursday";
    cout<<dt.getTomorrow() << endl;
    DateTime dt1(1, 11, 2018);
        //std::string expect = "02 november 2018, friday";
    cout << dt1.getTomorrow() << endl;
    DateTime dt2(1, 11, 2018);
        //std::string expect = "01 november 2018, thursday";
    cout << dt2.getToday() << endl;
    DateTime dt3(20, 11, 2018);
    DateTime dt4(20, 11, 2018);
    //int diff = 0;
    cout<<dt3.getDifference(dt4) << endl;
    DateTime dt5(20, 11, 2018);
    DateTime dt6(21, 11, 2018);
    //int diff = 1;
    cout<<dt5.getDifference(dt6)<<endl;
}