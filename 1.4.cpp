#include <iostream>
using namespace std;
int main(void) {
float pi = 3.14159265359;
float x,y;
cout << "Enter value for x: ";
cin >> x;
float powx = x*x;
float powpi = pi*pi;
y = (powx/(powpi*(powx+0.5)))*(1+(powx/(powpi*((powx-0.5)*(powx-0.5)))));
// put your code here
cout << "y = " << y;
return 0;
}
