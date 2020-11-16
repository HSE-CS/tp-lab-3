#include "DateTime.h"

int main(){

    DateTime pupa(1,11,2018);
    DateTime dt;

    DateTime cap(dt);

    std::cout<<pupa.getToday()<<std::endl;
    std::cout<<dt.getToday()<<std::endl;
    std::cout<<cap.getToday()<<std::endl;


    return 0;
}