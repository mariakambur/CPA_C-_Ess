#include <iostream>
using namespace std;
int main(void) { 
    int year;
cout << "Enter a year: ";
cin >> year;
if (year % 4 == 0)
cout << "This is a leap year";
else cout << "This is common year";
return 0;
}
