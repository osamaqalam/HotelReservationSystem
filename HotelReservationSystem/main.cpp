#include "Reservation_Manager.h"


int main()
{
	Date dob1(1, 1, 1991);
	Date dob2(2, 2, 1992);
	char first_name1[] = "Jack";
	char last_name1[] = "Sparrow";
	char first_name2[] = "Jean";
	char last_name2[] = "Sebastien";
	Information info1(first_name1, last_name1, dob1);
	info1.set_first_name(first_name2);
	info1.print();

}