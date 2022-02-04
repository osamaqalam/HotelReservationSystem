#include <iostream>
#include "Date.h"
#include "Information.h"
using namespace std;


//#include "Guests.h"
//#include "Guests_Res_Request.h"
//#include "Reservation_Manager.h"

//class Reservation_Manager {
//private:
//    int max_numb_nights;
//    int no_of_rooms; //number of available rooms
//    Guests_Reservation_Request* arr[140];
//    int room_nights[7][20];
//
//public:
//    Reservation_Manager();
//    bool process_res_request(Guests_Reservation_Request*);
//    Guests_Reservation_Request* get_arr(int);
//    bool cancel_res_request(Guests_Reservation_Request*);  //function that receives a reservation ID and cancels the reservation request.
//    bool print_alldata(Guests_Reservation_Request*); //function that receives a reservation ID as a parameter and outputs the details of the reservation.
//
//};