#include "DateTime.h"
#include <iostream>
int main(){
    DateTime dateTime(1, 1, 2020);
    std::cout<<dateTime.getToday()<<"\n";
    DateTime dateTime2;
    std::cout<<dateTime2.getToday()<<"\n";
    DateTime dateTime3(dateTime);
    std::cout<<dateTime3.getYesterday()<<"\n";
    std::cout<<dateTime3.getTomorrow()<<"\n";
    std::cout<<dateTime3.getFuture(77)<<"\n";
    std::cout<<dateTime3.getPast(134)<<"\n";
    std::cout<<dateTime3.getDifference(dateTime2)<<"\n";
}