#include"Date.h"
#include<ctime>

Date::Date()
{
	time_t t = time(0);   // get time now
	struct tm * now = localtime( & t );
    year = (now->tm_year + 1900);
    month = (now->tm_mon + 1);
    day = (now->tm_mday);
}

Date::Date(int elapseTime)
{
	
}

Date::Date(int yearN, int monthN, int dayN)
{
	year = yearN;
	month = monthN;
	day = dayN;
}

int Date::getYear()
{
	return year;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}