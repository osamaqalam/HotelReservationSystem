#include "information.h"
using namespace std;


// More like Class Room but prof doesn't know design u know :)
class Guests {
public:
    Guests(Information* iGuestInfo, Date iCheckIn, Date iCheckOut, int iRoom);

    Date get_checkin();
    void set_checkin(Date);
    Date get_checkout();
    void set_checkout(Date);
    Information* get_guests_info();
    void set_guests_info(Information*);
    int get_room();
    void set_room(int iRoom);

    void print();

private:
    Information guests_info[4]; //keeps information in array max capacity 4
    Date check_in;
    Date check_out;
    int room; // room 1-20, max number of reserve room is one 
};