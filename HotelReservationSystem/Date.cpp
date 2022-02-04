#include "Date.h"
#include <iostream>
using namespace std;





Date::Date() {
	year = 0;
	day = 0;
	month = 0;
}
Date::Date(int d, int m, int y)
{
	year = y;
	day = d;
	month = m;
}

void Date::set_month(int m) {
	month = m;
}

void Date::set_year(int y) {
	year = y;
}
void Date::set_day(int d) {
	day = d;
}
int Date::get_month() {
	return month;
}
int Date::get_year() {
	return year;
}
int Date::get_day() {
	return day;
}


void Date::printdate() {
	cout << "year: " << year << " month: " << month << " day: " << day << endl;
}
