
#include <iostream>
#include <string>
class FlightBooking {
public:
FlightBooking(int id, int capacity, int reserved);
void printStatus();
bool reserveSeats(int seats);
bool cancelReservations(int seats);
FlightBooking create(int id, int reserved, int capacity);
FlightBooking deleteFly(int id);
int getId() { return id; };

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
return false;
}
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
 this->id = id;
 this->capacity = capacity;
 this->reserved = reserved;
}
bool FlightBooking::reserveSeats(int seats)
{
if(seats < this->capacity)
{
this->reserved +=seats;
return true;
}
return false;
}
FlightBooking FlightBooking::create(int id, int reserved, int capacity)
{
FlightBooking booking(id, reserved, capacity);
return booking;
}
FlightBooking FlightBooking::deleteFly(int id)
{
FlightBooking booking(id, 0, 0);
std::cout<< "Flight " << id<< " was deleted from system" << std::endl;
return booking;
}
int main()
{
std::cout << " There are no flight yet" << std::endl;
std::cout << " Default flight value is:" << std::endl;
FlightBooking booking(1,1,1);
booking.printStatus();
std::string command = "";
while(command != "quit")
{
std::cout << "What would you like to do?(hint: use add, cancel, create, delete or quit) " << std::endl;
std::cin >> command;
int seats;
if(command == "add")
{
std::cout<< "How much seats you want to reserve?"<<std::endl;
std::cin >> seats;
booking.reserveSeats(seats);
}
else if(command == "cancel")
{
std::cout<< "How much seats you want to cancel?"<<std::endl;
std::cin >> seats;
booking.cancelReservations(seats);
}
else if(command == "delete")
{
std::cout<< "What flight you want to delete (provide id)?"<<std::endl;
int id;
std::cin >> id;
booking = booking.deleteFly(id);
}
else if(command == "create")
{
std::cout<< "What flight you want to create(id, reserved, capacity)?"<<std::endl;
int id = 0, reserved = 0,
capacity = 0;
std::cout << "Provide flight id: ";
std::cin >> id;
std::cout << "Provide flight capacity: ";
std::cin >> capacity;
std::cout << "Provide number of reserved seats: ";
std::cin >> reserved;
booking = booking.create(id, capacity, reserved);
}
else std::cout<< "Unknown command"<<std::endl;
booking.printStatus();
}
}

