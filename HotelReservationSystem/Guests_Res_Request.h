#include "Guests.h"

class Guests_Reservation_Request {
private:
    static int counter;
    Guests* guests; //guest from guests.h
    int res_id; //reservation id
    int nights; //number of nights

public:
    Guests_Reservation_Request(Guests* iGuests, int iNights);

    int get_res_id();
    Guests* get_guests();
    void set_guests(Guests* iGuests);
    int get_nights();
    void set_nights(int iNights);
};