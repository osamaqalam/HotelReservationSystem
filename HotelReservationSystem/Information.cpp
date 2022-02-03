#include <iostream>
using namespace std;


#include "Date.h"
#include "Information.h"

Information::Information() {
    int day, month, year;
    Date d = (0, 0, 0);
    date_of_birth = d;
}

Information::get_first_name() {
    return first_name;
}
Information::get_last_name() {
    return last_name;

}

void Information::set_first_name(char f) {
    first_name = f;
}

void Information::set_last_name(char l) {
    last_name = l;
}

void Information::print_name() {
    cout << "Enter first name:";
    cin >> first_name;
    cout << endl;
    cout << "Enter last name:";
    cin >> last_name;
    cout << endl;

}

void Information::display_info() {
    cout << first_name << last_name;
}

