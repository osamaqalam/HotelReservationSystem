#include "Information.h"

int get_char_array_length(char* arr)
{
    int length = 0;
    while (*(arr++) != '\0')
        ++length;
    return ++length;
}

Information::Information() {
    first_name = nullptr;
    last_name = nullptr;
    Date date_of_birth = Date(0,0,0);
}

Information::Information(const Information& original)
{
    set_first_name(original.first_name);
    set_last_name(original.last_name);
    set_dateofbirth(original.date_of_birth);
}

Information::Information(char* f, char* l, Date dob) {
    set_first_name(f);
    set_last_name(l);
    Date date_of_birth = Date(dob.get_day(), dob.get_month(), dob.get_year());
}

char* Information::get_first_name() {
    return first_name;
}
char* Information::get_last_name() {
    return last_name;
}

void Information::set_first_name(char* f) {
    if (first_name)
        delete[](first_name);

    const int len = get_char_array_length(f);
    first_name = new char[len];

    memcpy(first_name, f, len);
}

void Information::set_last_name(char* l) {
    if (last_name)
        delete[](last_name);

    const int len = get_char_array_length(l);
    last_name = new char[len];
   
    memcpy(last_name, l, len);
}

void Information::print() {
    cout << "First name: " << first_name << " , Last Name: " << last_name << " , The date of birth is: "
        << date_of_birth.get_day() << "/" << date_of_birth.get_month() << "/" << date_of_birth.get_year();
}

