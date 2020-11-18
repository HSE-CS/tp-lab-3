#include "DateTime.h"
#include<ctime>
#include<cstring>
#include <algorithm>
#include <cmath>
using namespace std;

#define ONE_DAY 86400

void tmcpy (struct tm *a, const struct tm *b){
    a->tm_sec=b->tm_sec;
    a->tm_min=b->tm_min;
    a->tm_hour=b->tm_hour;
    a->tm_mday=b->tm_mday;
    a->tm_mon=b->tm_mon;
    a->tm_year=b->tm_year;
    a->tm_wday=b->tm_wday;
    a->tm_yday=b->tm_yday;
    a->tm_isdst=b->tm_isdst;
}


DateTime::DateTime(){
time_t rawtime;
time(&rawtime);
struct tm * buff;
buff=localtime(&rawtime);
tmcpy(&savetime,buff);
}

DateTime::DateTime(size_t day,size_t month,size_t year){
time_t rawtime;
time(&rawtime);
struct tm * buff;
buff=localtime(&rawtime);
tmcpy(&savetime,buff);
savetime.tm_year=year-1900;
savetime.tm_mon=month-1;
savetime.tm_mday=day;
mktime(&savetime);
}


time_t DateTime::_getmktime() const{
struct tm * ret;
tmcpy(ret,&savetime);
return mktime(ret);
}

DateTime::DateTime(const DateTime& tm){
tmcpy(&savetime,&tm.savetime);
}

string  DateTime::getToday() const{
char buff[255];
strftime(buff,255,"%d %B %Y, %A",&savetime);
size_t i=0;
while(buff[i]!=' ') i++;
buff[i+1]=buff[i+1]+32;
i=0;
while(buff[i]!=',') i++;
buff[i+2]=buff[i+2]+32;
string s=buff;
return s;
}

string  DateTime::getFuture(unsigned int N) const{
time_t buff;
struct tm * x;
tmcpy(x,&savetime);
x->tm_sec=0;
x->tm_min=0;
x->tm_hour=0;
buff=mktime(x);
buff+=N*ONE_DAY;
x=localtime(&buff);
DateTime ret(x->tm_mday,x->tm_mon+1,x->tm_year+1900);
return  ret.getToday();
}

string  DateTime::getPast(unsigned int N) const{
time_t buff;
struct tm * x;
tmcpy(x,&savetime);
x->tm_sec=0;
x->tm_min=0;
x->tm_hour=0;
buff=mktime(x);
buff-=N*ONE_DAY;
x=localtime(&buff);
DateTime ret(x->tm_mday,x->tm_mon+1,x->tm_year+1900);
return  ret.getToday();
}

string  DateTime::getYesterday() const{
return getPast(1);
}

string  DateTime::getTomorrow() const{
return getFuture(1);
}


int DateTime::getDifference(DateTime& x) const{
time_t buff1,buff2;
int buff3=0;
buff1=_getmktime();
buff2=x._getmktime();
buff3=abs(buff1-buff2);
return buff3;
}

