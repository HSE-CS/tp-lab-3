#include <iostream>
#include <string.h>
#include <string>
#include <ctime>

using namespace std;

class DateTime
{
private:
   
    time_t time_input;

public:

    DateTime(unsigned day, unsigned month, unsigned year);
    DateTime();
    DateTime(DateTime&);
    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int N);
    string getPast(unsigned int N);
    double getDifference(DateTime&);


};
