#include <iostream>
using namespace std;
int main(void) {
float a = 8, b = 0, c = 0;
try {
cout << "Provide denominator. Default value of numerator is 8"<< endl;
cin >> b;
c = a / b;
if(b != 0)
cout << c << endl;
else 
throw 111;
}
catch(int e)
{
    cout << "An exception occurred. Maybe you've input wrong number" ;
}
return 0;
}
