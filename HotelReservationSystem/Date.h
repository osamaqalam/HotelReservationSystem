
#include <iostream>
using namespace std;

#pragma once


class Date
{

public:
	Date();
	Date(int, int, int);
	void setmonth(int);
	void setyear(int);
	void setday(int);
	int getmonth();
	int getyear();
	int getday();


	void printdate();



private:
	int year, month, day;


};

