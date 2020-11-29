#include "DateTime.h"
#include<string>
#include<ctime>
#include <iostream>


using namespace std;


int main()
{
    
    DateTime num;
    string str = num.getToday();
    
    cout << str << endl;
    DateTime dt(24, 12, 2001);
        
    cout<<dt.getTomorrow() << endl;
    DateTime dt1(29, 11, 2013);
        
    cout << dt1.getTomorrow() << endl;
    DateTime dt2(15, 10, 2013);
        
    cout << dt2.getToday() << endl;
    DateTime dt3(15, 10, 2012);
    DateTime dt4(15, 10, 2012);
    
    cout<<dt3.getDifference(dt4) << endl;
    DateTime dt5(29, 11, 2013);
    DateTime dt6(29, 11, 2013);
   
    cout<<dt5.getDifference(dt6)<<endl;
} 