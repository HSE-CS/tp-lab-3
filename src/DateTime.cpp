#include "DateTime.h"

DateTime::DateTime()
{
	time_t today;
	time(&today);
	tm* temptimer = localtime(&today);
	this->data.tm_year = temptimer->tm_year;
	this->data.tm_mon = temptimer->tm_mon;
	this->data.tm_mday = temptimer->tm_mday;
	mktime(&this->data);
}

DateTime::DateTime(int date, int mounth, int year)
{
	this->data.tm_year = year - 1900;
	this->data.tm_mday = date;
	this->data.tm_mon = mounth-1;
	mktime(&this->data);
}

DateTime::DateTime(DateTime& from)
{
	this->data = from.data;
	mktime(&this->data);
}


