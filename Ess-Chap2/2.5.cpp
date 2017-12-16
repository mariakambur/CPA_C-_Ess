#include <iostream>
#include <string>

int main()
{
 int c0;
    std::cout << "Input c0";
    std::cin >> c0;
 while(c0 != 1)
 {
     std::cout << c0  <<  ".";
     if (c0%2 == 0)
     {
         c0 = c0/2;
         }
     else
     {
        c0 = 3*c0+1;
         }
         
 }
 
 return 1;
}