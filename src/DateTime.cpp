
#define _CRT_SECURE_NO_WARNINGS

#include"DateTime.h"
#include<string>
#include<iostream>

using namespace std;

DateTime::DateTime( int d, int m, int y)
{
	
	date_time.tm_mday = d;
	date_time.tm_mon = m - 1;
	date_time.tm_year = y - 1900;
	date_time.tm_sec = 0;
	date_time.tm_min = 0;
	date_time.tm_hour = 0;


}
DateTime::DateTime()
{

	time_t ct;
	time(&ct);
	date_time = *(localtime(&ct));
	mktime(&date_time);

}

DateTime::DateTime( DateTime* d )
{


	date_time = d->date_time;


}



string cout_str( int day ,  tm date_time )
{

	tm t = date_time;
	t.tm_mday = day;
	mktime(&t);
	char buff[30];
	strftime(buff, 80, "%d %B %Y, %A", &t );
	string strochka = buff;
	int i = 0;
	while (i < strochka.size())
	{
		strochka[i] = tolower(strochka[i]);
		i++;
	}

	return strochka;

}

string DateTime:: getToday()
{

	return cout_str( date_time.tm_mday, date_time );

}
string DateTime::getYesterday()
{
	return cout_str(date_time.tm_mday - 1, date_time );

}
string DateTime::getTomorrow()
{

	return cout_str(date_time.tm_mday + 1 , date_time);

}
string DateTime:: getFuture(unsigned int N)
{

	return cout_str(date_time.tm_mday + N , date_time);

}
string DateTime:: getPast(unsigned int N)
{

	return cout_str(date_time.tm_mday - N, date_time );

}
int DateTime::getDifference(DateTime& d)
{

	return  ( abs(mktime(&date_time) - mktime(&d.date_time)) / (60 * 24 * 60) );


}