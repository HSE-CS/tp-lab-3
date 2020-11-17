#include "DateTime.h"

int main(){

    DateTime pupa(1,11,2018);
    DateTime dt;
    DateTime cap(dt);

    DateTime pupa1(pupa);
    DateTime dt1(dt);
    DateTime cap1(cap);

    std::cout<<std::endl<<"getToday() check"<<std::endl;
    std::cout<<pupa.getToday()<<std::endl;
    std::cout<<dt.getToday()<<std::endl;
    std::cout<<cap.getToday()<<std::endl;

    std::cout<<std::endl<< "getYesterday() check"<<std::endl;
    std::cout<<pupa.getYesterday()<<std::endl;
    std::cout<<dt.getYesterday()<<std::endl;
    std::cout<<cap.getYesterday()<<std::endl;

    std::cout<<std::endl<< "getTomorrow() check"<<std::endl;
    std::cout<<pupa1.getTomorrow()<<std::endl;
    std::cout<<dt1.getTomorrow()<<std::endl;
    std::cout<<cap1.getTomorrow()<<std::endl;

    return 0;
}