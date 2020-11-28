#define _CRT_SECURE_NO_WARNINGS
#include <string>
using std::string;

class DateTime {
private:
    struct tm* current_time;
public:
    DateTime(int, int, int);
    DateTime();
    DateTime(const DateTime&);
    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int);
    string getPast(unsigned int);
    int getDifference(DateTime&);
};