#include "Reservation_Manager.h"


int main()
{
	Date dob1(1, 1, 1991);
	Date checkin1(1, 3, 2022);
	Date checkout1(3, 3, 2022);
	char first_name1[] = "Jack";
	char last_name1[] = "Sparrow";
	Information info1(first_name1, last_name1, dob1);
	Guests guests1 = Guests(&info1, checkin1, checkout1, 2);
	Guests_Reservation_Request req1 = Guests_Reservation_Request(&guests1, 3);

	Date dob2(2, 2, 1992);
	Date checkin2(2, 3, 2022);
	Date checkout2(6, 3, 2022);
	char first_name2[] = "Jean";
	char last_name2[] = "Sebastien";
	Information info2(first_name2, last_name2, dob2);
	Guests guests2 = Guests(&info2, checkin2, checkout2, 9);
	Guests_Reservation_Request req2 = Guests_Reservation_Request(&guests2, 5);


	Reservation_Manager res_manager = Reservation_Manager();
	res_manager.process_res_request(&req1);
	res_manager.process_res_request(&req2);
	res_manager.print();

	cout << "\nAfter cancelling reservation 1" << endl;
	res_manager.cancel_res_request(req1.get_res_id());
	res_manager.print();

	

}