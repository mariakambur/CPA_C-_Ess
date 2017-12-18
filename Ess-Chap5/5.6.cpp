#include <iostream>
#include <string>
using namespace std;
class Gym {
  public:
  Gym(int id, string name, int month);
  void printStatus();
  bool cancel();
  bool reserve();
  private:
  int id;
  string name;
  int month;
};
void Gym::printStatus()
{
     std::cout<<"Member "<<this->id<<" : "<<this->name<<", subscription valid for " <<this->month<<"months" <<std::endl;
}

Gym::Gym(int id, string name, int month)
{
 this->id = id;
 this->name = name;
 this->month = month;
}
bool Gym::reserve()
{
this->month +=1;
return true;
}
bool Gym::cancel()
{
this->month -=1;
return true;
}
int main()
{ 
    int id; int month; string memname;
    std::cout << "Provide id of member: ";
   std::cin >> id;
   std::cout << "Provide name of member: ";
   std::cin >> memname;
   std::cout << "Provide subscription: ";
   std::cin >> month;
   Gym member(id, memname, month);
member.printStatus();
    std::string command = "";
    while(command != "quit")
    {
       std::cout << "What would you like to do?(hint: use add or cancel) " << std::endl;
std::cin >> command;
int seats;
if(command == "add")
{
 member.reserve();
}
else if(command == "cancel")
{
member.cancel();
}
else std::cout<< "Unknown command"<<std::endl;
member.printStatus();
    }
}
