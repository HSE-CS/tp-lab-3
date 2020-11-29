#include <iostream>
#include <string>
#include <ctime>
#include <stdio.h>
#include "DateTime.h"
using namespace std;

string test_func(){
    const char *ok = "Sunday";
    return string(ok);
}

//const char *weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int main(){

//    DateTime test(28, 11, 2020);
    DateTime test(20, 11, 2020);
    // cout << test.getPast(2) << endl;
    DateTime test2;
    // cout << test.getFuture(2) << endl;

    cout << test.getDifference(test2) << endl;

    DateTime dt(31,10,2018);
    cout << dt.getTomorrow();


//    DateTime test2(28,11,2020);
//     cout << test2.getYesterday() << endl;

//     cout << test.getYesterday() << endl;
//    DateTime test2;
//    cout << test2.getToday() << endl;
    //cout << test.getYesterday().size();
//    cout << test_func();

    //cout << test.getYesterday();
//    // DateTime test(7,11,2018);
//    // cout << test.getToday();
//    struct tm timex;
//    // 31,10,2018
//    // 1,11,2018
//    // 1,11,2018
//    timex.tm_mday = 1;
//    timex.tm_mon = 11 - 1;
//    timex.tm_year = 2018 - 1900;
//    mktime(&timex);
//    // struct tm time_info = { 0, 0, 0, 24, 11, 116 };
//    //current->tm_year = 2020;
//    //current->tm_mon = 11;
//    //current->tm_mday = 28;
//    char buffer[80] = {'\0'};
//    strftime(buffer, sizeof(buffer), "%d %B %Y", &timex);
//    sprintf(buffer, "%s %d", buffer, timex.tm_wday);
////    sprintf(buffer, "%s %s", buffer, weekdays[timex.tm_wday]);
//    cout << buffer;



    return 0;
}
