#include <iostream>
using namespace std;

#pragma once

#include "Date.h"

//Information

class Information {
public:
    Information();
    Information(char[], char[], Date); //array of characters for first and last name, Date from Date.h for date of birth
    void print_name();

    char get_first_name();
    void set_first_name(char);

    char get_last_name();
    void set_last_name(char);

    void set_dateofbirth(int, int, int);
    void print_dateofbirth();
    void display_info();

private:
    char first_name[30];
    char last_name[30];
    Date date_of_birth;
};