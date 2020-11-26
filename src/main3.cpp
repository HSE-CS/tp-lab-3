#include <stdio.h>
#include "iostream"
#include "DateTime.h"

using namespace std;

int main(){
    DateTime dt1(20,11,2018);
    DateTime dt2(20,11,2018);
    int diff=1;
    printf("%d %d", diff,dt2.getDifference(dt1));
    return 0;
}
