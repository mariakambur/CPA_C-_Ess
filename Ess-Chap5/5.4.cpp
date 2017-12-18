
#include <iostream>
#include <string>
class FlightBooking {
public:
FlightBooking(int id, int capacity, int reserved);
void printStatus();
bool reserveSeats(int seats);
bool cancelReservations(int seats);
private:
int id;
int capacity;
int reserved;
};
void FlightBooking::printStatus()
{
     double resperc = this->reserved;
     double capperc = this->capacity;
 std::cout<<"Fligth  "<<this->id<<" : "<<this->capacity<<"/" <<this->reserved<<" (" << (resperc/capperc)*100 << "%) seats reserved" <<std::endl;
}
bool FlightBooking::cancelReservations(int seats)
{
if(seats < this->reserved)
{
this->reserved -=seats;
return true;
}
std::cout << "Cannot perfom this operation " << std::endl;
return false;
}
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{try{
 this->id = id;
 this->capacity = capacity;
 this->reserved = reserved;
 if(this->reserved > this->capacity)
 throw(123);
}
 catch(int e)
{
    std::cout << "Cannot perfom the operation. To much seats reserved"<<std::endl ;
}
}
bool FlightBooking::reserveSeats(int seats)
{
if(seats < this->capacity)
{
this->reserved +=seats;
return true;
}
std::cout << "Cannot perfom this operation " << std::endl;
return false;
}
int main()
{
    int reserved = 0,
capacity = 0;
std::cout << "Provide flight capacity: ";
std::cin >> capacity;
std::cout << "Provide number of reserved seats: ";
std::cin >> reserved;
FlightBooking booking(1, capacity, reserved);
booking.printStatus();
std::string command = "";
while(command != "quit")
{
std::cout << "What would you like to do?(hint: use add or cancel) " << std::endl;
std::cin >> command;
int seats;
if(command == "add")
{
std::cout<< "How much seats you want to reserve?"<<std::endl;
std::cin >> seats;
booking.ReserveSeats(seats);
}
else if(command == "cancel")
{
std::cout<< "How much seats you want to cancel?"<<std::endl;
std::cin >> seats;
booking.cancelReservations(seats);
}
else std::cout<< "Unknown command"<<std::endl;
booking.printStatus();
}
}

