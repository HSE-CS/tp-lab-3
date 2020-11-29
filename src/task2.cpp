#include <iostream>
#include <string>
#include "DateTime.h"
using namespace std;

int main(){
    DateTime test(31,10,2018);
    cout << test.getToday();

    return 0;
}
