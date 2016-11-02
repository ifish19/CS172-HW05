#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date();
	Date(int elapseTime);
	Date(int yearN, int monthN, int dayN);
	int getYear();
	int getMonth();
	int getDay();
	void setDate(int elapseTime);
};

#endif