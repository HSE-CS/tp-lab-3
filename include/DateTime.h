#ifndef LAB_3_DATETIME_H
#define LAB_3_DATETIME_H
#include <iostream>
#include <string>
#include <ctime>
#define SIZE 100

using namespace std;

class DateTime {
public:
    DateTime(int day, int month, int year);
    DateTime();
    DateTime(DateTime &new_date);
    string getToday() const;
    string getYesterday() const;
    string getTomorrow() const; 
    string getFuture(unsigned int N) const; 
    string getPast(unsigned int N) const; 
    int getDifference(DateTime &new_date); 

private:
    int day = 0;
    int month = 0;
    int year = 0;
};
#endif