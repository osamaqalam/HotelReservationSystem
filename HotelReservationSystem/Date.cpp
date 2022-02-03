#include <iostream>
using namespace std;

#include "Date.h"



Date::Date() {
	year = 2022;
	day = 1;
	month = 3;


}
Date::Date(int y, int d, int m)
{
	year = y;
	day = d;
	month = m;

}

void Date::setmonth(int m) {
	month = m;


}

void Date::setyear(int y) {

	year = y;

}
void Date::setday(int d) {
	day = d;
}
int Date::getmonth() {
	return month;

}
int Date::getyear() {
	return year;
}
int Date::getday() {
	return day;
}


void Date::printdate() {

	cout << "year: " << year << " month: " << month << " day: " << day << endl;

}
