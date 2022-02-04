#include "Guests.h"

Guests::Guests(Information* iGuestsInfo, Date iCheckIn, Date iCheckOut, int iRoom)
{
	set_guests_info(iGuestsInfo);
	check_in = Date(iCheckIn.get_day(), iCheckIn.get_month(), iCheckIn.get_year());
	check_out = Date(iCheckOut.get_day(), iCheckOut.get_month(), iCheckOut.get_year());
	room = iRoom;
}

Date Guests::get_checkin()
{
	return check_in;
}

void Guests::set_checkin(Date iCheckIn)
{
	check_in = iCheckIn;
}

Date Guests::get_checkout()
{
	return check_out;
}

void Guests::set_checkout(Date iCheckOut)
{
	check_out = iCheckOut;
}

Information* Guests::get_guests_info()
{
	return guests_info;
}

void Guests::set_guests_info(Information* iGuestsInfo)
{
	for (int i = 0; i < 4; i++)
	{
		guests_info[i] = iGuestsInfo[i];
	}
}

int Guests::getRoom()
{
	return room;
}

void Guests::setRoom(int iRoom)
{
	room = iRoom;
}

void Guests::print()
{
	cout << "Room: " << room << endl;
	cout << "Check In: "; check_in.printdate(); cout << endl;
	cout << "Check Out: "; check_in.printdate(); cout << endl;
	cout << "Guests:\n";
	for (int i = 0; i < 4; i++)
	{
		guests_info[i].print();
		cout << endl;
	}
}