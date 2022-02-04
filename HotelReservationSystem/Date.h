
#include <iostream>
using namespace std;

#pragma once


class Date
{

public:
	Date();
	Date(int, int, int);

	void set_day(int);
	void set_month(int);
	void set_year(int);
	int get_day();
	int get_month();
	int get_year();

	void printdate();

private:
	int year, month, day;
};

