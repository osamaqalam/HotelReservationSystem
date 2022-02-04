#include "Reservation_Manager.h"

Reservation_Manager::Reservation_Manager()
{
	for (int i = 0; i < 140; i++)
		arr[i] = nullptr;
	
	for (int i = 0; i < max_no_of_nights; i++)
		for (int j = 0; j < max_no_of_rooms; j++)
			room_nights[i][j] = 0;
}

int Reservation_Manager::process_res_request(Guests_Reservation_Request* req)
{
	int reservation_id = req->get_res_id();
	int room_id = req->get_guests()[0].get_room() - 1;
	int check_in_day = req->get_guests()[0].get_checkin().get_day() - 1;
	int check_out_day = req->get_guests()[0].get_checkout().get_day();

	// Check the room is available for the stay of the guest
	for (int i = check_in_day; i < check_out_day; i++)
		if (room_nights[i][room_id] != 0)
			return 0;

	// Reserve the room to the guests
	for (int i = check_in_day; i < check_out_day; i++)
		room_nights[i][room_id] = reservation_id;

	int first_free_req_slot = 0;
	while (arr[first_free_req_slot])
		first_free_req_slot++;
	arr[first_free_req_slot] = req;
		
	return reservation_id;
}

Guests_Reservation_Request* Reservation_Manager::get_reservation_details(int res_id)
{
	for (int i = 0; arr[i]; i++)
		if (arr[i]->get_res_id() == res_id)
			return arr[i];

	return nullptr;
}

bool Reservation_Manager::cancel_res_request(int res_id)
{
	Guests_Reservation_Request* req = get_reservation_details(res_id);
	int room_id = req->get_guests()[0].get_room() - 1;
	int check_in_day = req->get_guests()[0].get_checkin().get_day() - 1;
	int check_out_day = req->get_guests()[0].get_checkout().get_day() ;

	// make the room available again
	for (int i = check_in_day; i < check_out_day; i++)
		room_nights[i][room_id] = 0;

	// Search for request in array
	int i;
	for (i = 0; i < 140; i++)
		if (arr[i]->get_res_id() == res_id)
			break;

	// If request found in array
	if (i < 140)
	{
		for (int j = i; j < 139; j++)
			arr[j] = arr[j + 1];
	}
	else
		return false;

	return true;
}

void Reservation_Manager::print()
{
	for (int i = 0; i < max_no_of_nights; i++)
	{
		cout << "MAR " << i+1 << " : ";

		for (int j = 0; j < max_no_of_rooms; j++)
			cout << room_nights[i][j] << " ";
		cout << endl;
	}
		
}
