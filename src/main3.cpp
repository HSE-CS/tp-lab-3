//main3.cpp  - демонстрация использования класса `DateTime`
#include <iostream>
#include "DateTime.h"

//using namespace std;

int main()
{

    //test1
    DateTime dt(31,10,2018);

    std::cout << dt.getTomorrow() << " // 1 november 2018, thursday" << std::endl;

    //std::string expect="1 november 2018, thursday";
    //EXPECT_EQ(expect,dt.getTomorrow());

    /*


    //test2

    DateTime dt(1,11,2018);

    std::cout << dt.getTomorrow() << " // 02 november 2018, friday" << std::endl;

    //std::string expect="02 november 2018, friday";
    //EXPECT_EQ(expect,dt.getTomorrow());



    //test3

    DateTime dt(1,11,2018);

    std::cout << dt.getToday() << " // 01 november 2018, thursday" << std::endl;

    //std::string expect="01 november 2018, thursday";
    //EXPECT_EQ(expect,dt.getToday());



    //test4

    DateTime dt1(20,11,2018);
    DateTime dt2(20,11,2018);

    std::cout << dt1.getDifference(dt2) << " // diff=0" << std::endl;

    //int diff=0;
    //EXPECT_EQ(diff,dt1.getDifference(dt2));


    //test5

    DateTime dt1(20,11,2018);
    DateTime dt2(21,11,2018);

    std::cout << dt1.getDifference(dt2) << " // diff=1" << std::endl;

    //int diff=1;
    //EXPECT_EQ(diff,dt2.getDifference(dt1));

    */

    /*
    //DateTime dt1(20,11,2018);
    //DateTime dt2(21,11,2018);
    //std::cout << dt2.getDifference(dt1) << std::endl;
    //DateTime today;
    //std::cout << today.getToday() << std::endl;
    //
    //std::cout << today.getYesterday() << std::endl;
    //std::cout << today.getFuture(100) << std::endl;
    //std::cout << today.getPast(50)<< std::endl;
    */
}
