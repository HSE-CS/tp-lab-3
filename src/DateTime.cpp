#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>
#include <ctime>
#include "DateTime.h"
#define sec 86400    // 24*60*60

using namespace std;

const char* Weeks[] = { "sunday", "monday", "tuesday", "wednesday","thursday" , "friday", "saturday" };
const char* Months[] = { "january", "february", "march", "april", "may", "june","july", "august", "september","october", "november", "december" };
DateTime::DateTime()
{
    this->time_input = time(nullptr);
}

DateTime::DateTime(DateTime& info)
{
    this->time_input =info.time_input;
}

DateTime::DateTime(unsigned day, unsigned month, unsigned year)
{

    time_t r_time = time(nullptr);
    struct tm* time_struct = localtime(&r_time); //Функция преобразовывает текущее значение времени, передаваемое как аргумент, через указатель timeptr на time_t в структуру tm.

    time_struct->tm_mday = day;
    time_struct->tm_mon = month - 1;
    time_struct->tm_year = year - 1900;

    this->time_input = mktime(time_struct);
}

string DateTime::getToday()
{
    string stroka;
    int ind = 0;
    struct tm* time_struct = localtime(&time_input);
    if (time_struct->tm_mday > 9) 
    {
        stroka += to_string(time_struct->tm_mday);  //Функция-член to_string преобразует объект типа bitset в объект-строку типа basic_string.
 
    }
    else
    {
        stroka += '0';
        stroka += (char)(time_struct->tm_mday + 48);
    }

    stroka += "  ";
    ind = time_struct->tm_mon;
    stroka += Months[ind];
    stroka += "  ";

    stroka += to_string(time_struct->tm_year + 1900);
    stroka += ", ";
    ind = time_struct->tm_wday;
    stroka += Weeks[ind];

    return stroka;
}

string DateTime::getYesterday()
{
    DateTime tmp(*this);
    tmp.time_input -= sec;
    return tmp.getToday();
}

string DateTime::getTomorrow()
{
    DateTime tmp(*this);
    tmp.time_input += sec;
    return tmp.getToday();
}

string DateTime::getPast(unsigned int days)
{
    DateTime tmp(*this);
    tmp.time_input -= sec* (long)days;
    return tmp.getToday();
}

string DateTime::getFuture(unsigned int days)
{
    DateTime tmp(*this);
    tmp.time_input += sec* (long)days;
    return tmp.getToday();
}

double DateTime::getDifference(DateTime& info)
{
    return (abs(this->time_input - info.time_input) / 86400);
}