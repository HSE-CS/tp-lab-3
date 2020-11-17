//
// Created by sharg on 17.11.2020.
//

#include <iostream>
#include "DateTime.h"

using namespace std;

int main() {

    DateTime newDate(1, 11, 2018);
    cout << newDate.getToday() << endl;
    DateTime newDate2(20, 11, 2018);
    cout << newDate.getDifference(newDate2) << endl;
}
