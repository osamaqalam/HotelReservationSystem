#include "Guests_Res_Request.h"

int Guests_Reservation_Request::counter = 1;

Guests_Reservation_Request::Guests_Reservation_Request(Guests* iGuests, int iNights)
{
	set_guests(iGuests);
	res_id = counter++;
	nights = iNights;
}

int Guests_Reservation_Request::get_res_id()
{
	return res_id;
}

Guests* Guests_Reservation_Request::get_guests()
{
	return guests;
}

void Guests_Reservation_Request::set_guests(Guests* iGuests)
{
	for (int i = 0; i < 4; i++)
		guests[i] = iGuests[i];
}

int Guests_Reservation_Request::get_nights()
{
	return nights;
}

void Guests_Reservation_Request::set_nights(int iNights)
{
	nights = iNights;
}
