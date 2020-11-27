#include <cmath>
#include <ctime>
#include <iostream>
#include <map>
#include <string>

using namespace std;

class DateTime {
private:
    int day;
    int month;
    int year;
    int week_day;
    const double SEC_IN_DAY = 86400;
    time_t getTime();
    string DateToString(int N);
    map<int, string> day_of_week = {
            {1, "monday"}, {2, "tuesday"},  {3, "wednesday"}, {4, "thursday"},
            {5, "friday"}, {6, "saturday"}, {0, "sunday"}};
    map<int, string> month_of_year = {
            {1, "january"},   {2, "february"}, {3, "march"},     {4, "april"},
            {5, "may"},       {6, "june"},     {7, "july"},      {8, "august"},
            {9, "september"}, {10, "october"}, {11, "november"}, {12, "december"}};

public:
    DateTime();
    DateTime(int, int, int);
    DateTime(const DateTime &);
    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int N);
    string getPast(unsigned int N);
    int getDifference(DateTime &);
};