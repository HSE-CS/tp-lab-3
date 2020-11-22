#include "DateTime.h"
#include <iostream>
#include <string>
#include <ctime>
#define SIZE 100

using namespace std;

string HelPPPP(int day, int month, int year) 
{
    tm time_in = { 0, 0, 0, day, month - 1, year - 1900 };
    time_t time_temp = mktime(&time_in);
    tm* time_out = localtime(&time_temp);
    char buffer[SIZE] = { 0 };
    strftime(buffer, SIZE, "%d %B %Y, %A", time_out);
    string rez = buffer;
    for (auto &letter : rez) letter = tolower(letter);
    return rez;
}

DateTime::DateTime(int day, int month, int year) {  //- êîíñòðóêòîð ñ òðåìÿ ÷èñëîâûìè ïàðàìåòðàìè (äåíü, ìåñÿö,ãîä);
    this->day = day;
    this->month = month;
    this->year = year;
}

DateTime::DateTime() 
{ 
    time_t now = time(nullptr);
    tm* ltm = localtime(&now);
    this->day = ltm->tm_mday;
    this->month = ltm->tm_mon + 1;
    this->year = ltm->tm_year + 1970;
}

DateTime::DateTime(const DateTime& new_date) 
{ 
    day = new_date.day;
    month = new_date.month;
    year = new_date.year;
}

string DateTime::getToday() const 
{  
    return HelPPPP(day, month, year);
}

string DateTime::getYesterday() const 
{
    return getPast(1);
}

string DateTime::getTomorrow() const 
{
    return getFuture(1);
}

string DateTime::getFuture(unsigned int N) const 
{
    return HelPPPP(day + N, month, year);
}

string DateTime::getPast(unsigned int N) const 
{
    return HelPPPP(day - N, month, year);
}

int DateTime::getDifference(DateTime &new_date){
    int difference = 0;
    struct tm pastDay = { 0, 0, 0, day, month - 1, year - 1900 };
    struct tm Fday = { 0, 0, 0, new_date.day, new_date.month - 1, new_date.year - 1900 };
    time_t x = mktime(&pastDay);
    time_t y = mktime(&Fday);
    if (x != (time_t)(-1) && y != (time_t)(-1))difference = (int)difftime(y, x) / (60 * 60 * 24);
    return abs(difference);
}
