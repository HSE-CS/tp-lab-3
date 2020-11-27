#include <iostream>
#include <ctime>
#include <cstdio>
#include <string>
using namespace std;

#ifndef DATETIME_H
#define DATETIME_H

const char *weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

class DateTime{
private:
    struct tm time;
public:
    DateTime(int day, int month, int year);
    // DateTime();
//    DateTime(DateTime *datetime);
    string getToday();
};

DateTime::DateTime(int day, int month, int year)
{
    this->time.tm_mday = day;
    this->time.tm_mon = month;
    this->time.tm_year = year - 1901;
    mktime(&(this->time));
}

string DateTime::getToday(){
    char buffer[80];

    strftime(buffer, sizeof(buffer), "%d %B %Y,", &(this->time));
    sprintf(buffer, "%s %s", buffer, weekdays[this->time.tm_wday]);
//    cout <<  << endl;

//    cout << this->time;
    //std::string str(buffer);

    //cin >> str;
    // scanf("%s", &buffer);
    string str(buffer);

    return str;
}

#endif // DATETIME_H
