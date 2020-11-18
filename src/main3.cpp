#include "DateTime.h"

int main(){

    DateTime timeOne(1,11,2018);
    DateTime timeTwo;
    DateTime timeThree(timeTwo);

    DateTime timeOne1(timeOne);
    DateTime timeTwo1(timeTwo);
    DateTime timeThree1(timeThree);

    std::cout<<std::endl<<"getToday() check"<<std::endl;
    std::cout<<timeOne.getToday()<<std::endl;
    std::cout<<timeTwo.getToday()<<std::endl;
    std::cout<<timeThree.getToday()<<std::endl;

    std::cout<<std::endl<< "getYesterday() check"<<std::endl;
    std::cout<<timeOne.getYesterday()<<std::endl;
    std::cout<<timeTwo.getYesterday()<<std::endl;
    std::cout<<timeThree.getYesterday()<<std::endl;

    std::cout<<std::endl<< "getTomorrow() check"<<std::endl;
    std::cout<<timeOne1.getTomorrow()<<std::endl;
    std::cout<<timeTwo1.getTomorrow()<<std::endl;
    std::cout<<timeThree1.getTomorrow()<<std::endl;

    std::cout<<std::endl<< "getFuture() check"<<std::endl;
    std::cout<<"Enter N days to use classObjectName.getFuture()"<<std::endl;
    int N = 0;
    std::cin >> N;
    if (N<0){
        while (N<0){
            std::cout<<"Wrong parameter, try again";
            std::cin >> N;
        }
    }
    std::cout<<timeOne1.getFuture(N)<<std::endl;
    std::cout<<timeTwo1.getFuture(N)<<std::endl;
    std::cout<<timeThree1.getFuture(N)<<std::endl;

    std::cout<<std::endl<< "getPast() check"<<std::endl;
    std::cout<<"Enter N days to use classObjectName.getPast()"<<std::endl;
    std::cin >> N;
    if (N<0){
        while (N<0){
            std::cout<<"Wrong parameter, try again";
            std::cin >> N;
        }
    }
    std::cout<<timeOne1.getPast(N)<<std::endl;
    std::cout<<timeTwo1.getPast(N)<<std::endl;
    std::cout<<timeThree1.getPast(N)<<std::endl;

    std::cout<<std::endl<< "getDifference() check"<<std::endl;
    std::cout<<"There are (is) "<< timeOne1.getDifference(timeTwo1) <<" days (day) between "<< timeOne1.getToday() <<" and "<< timeTwo1.getToday()<<std::endl;


    return 0;
}