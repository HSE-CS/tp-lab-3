#include "DateTime.h"
#include<ctime>
#include<cstring>
#include <algorithm>
#include <cmath>
using namespace std;

#define ONE_DAY 86400

DateTime::DateTime(){
time_t rawtime;
time(&rawtime);
savetime=localtime(&rawtime);
}

DateTime::DateTime(size_t day,size_t month,size_t year){
time_t rawtime;
time(&rawtime);
savetime=localtime(&rawtime);
savetime->tm_year=year-1900;
savetime->tm_mon=month-1;
savetime->tm_mday=day;
mktime(savetime);
}

DateTime::DateTime(const DateTime& tm){
time_t buff;
buff=mktime(tm.savetime);
savetime=localtime(&buff);
}

time_t DateTime::_getmktime() const{
time_t ret;
ret=mktime(savetime);
return ret;
}

string  DateTime::getToday() const{
char buff[255];
strftime(buff,255,"%d %B %Y, %A",savetime);
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
buff=mktime(savetime);
x=localtime(&buff);
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
buff=mktime(savetime);
x=localtime(&buff);
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
time_t buff1,buff2,buff3;
buff1=mktime(savetime);
buff2=x._getmktime();
buff3=abs(buff1-buff2);
return buff3/ONE_DAY;
}

