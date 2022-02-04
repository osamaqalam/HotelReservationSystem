#include <iostream>
#include "Date.h"

using namespace std;

//Information

class Information {
public:
    Information();
    Information(char*, char*, Date); //array of characters for first and last name, Date from Date.h for date of birth

    char* get_first_name();
    void set_first_name(char*);
    char* get_last_name();
    void set_last_name(char*);
    void set_dateofbirth(int, int, int);

    void print();
    void display_info();

private:
    char* first_name;
    char* last_name;
    Date date_of_birth;
};