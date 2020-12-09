#include "../include/DateTime.h"

using namespace std;

string DateTime::getToday(){
    char date[30];
    struct tm* info = localtime(&timeInf);
    strftime(date, 30, "%d %B %Y, %A", info);
    string result = date;
    for(size_t i =0;result[i];i++)
    {
        if(isupper(result[i]))
        {
            result[i]=tolower(result[i]);
        }
    }
    return result;
}

string DateTime::getYesterday(){
    DateTime date(*this);
    date.timeInf -= (86400);
    return date.getToday();
}

string DateTime::getTomorrow(){
    DateTime date(*this);
    date.timeInf += (86400);
    return date.getToday();
}

string DateTime::getFuture(unsigned int N){
    DateTime date(*this);
    date.timeInf += (86400) * (double)N;
    return date.getToday();
}

string DateTime::getPast(unsigned int N){
    DateTime date(*this);
    date.timeInf -= (86400) * (double)N;
    return date.getToday();
}

double DateTime::getDifference(DateTime& date){
    return abs(timeInf - date.timeInf) / (86400);
}