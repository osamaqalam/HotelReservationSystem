#include "Guests_Res_Request.h"

class Reservation_Manager {
private:
    static const int max_no_of_nights = 7;
    static const int no_of_rooms = 20; //number of available rooms
    Guests_Reservation_Request* arr[140];
    int room_nights[max_no_of_nights][no_of_rooms];

public:
    Reservation_Manager();
    bool process_res_request(Guests_Reservation_Request*);
    Guests_Reservation_Request* get_arr(int);
    bool cancel_res_request(Guests_Reservation_Request*);  //function that receives a reservation ID and cancels the reservation request.
    bool print_alldata(Guests_Reservation_Request*); //function that receives a reservation ID as a parameter and outputs the details of the reservation.

};