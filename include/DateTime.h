//
// Created by Алексей Трутнев on 16.11.2020.
//

#ifndef LAB3TEST_DATETIME_H
#define LAB3TEST_DATETIME_H


class DateTime {
public:
    getDifference(DateTime&);
    getPast(unsigned int N);
    getFuture(unsigned int N);
    getTomorrow();
    getYesterday();
    getToday();

    DateTime(){

    }
    DateTime(DateTime& temp){

    }
    DateTime(int day, int month, int year){}

//    конструктор с тремя числовыми параметрами (день, месяц,год);
//    конструктор без параметров (объект использует текущую дату);
//    конструктор копирования (создаём копию другого объекта);
private:


};


#endif //LAB3TEST_DATETIME_H
