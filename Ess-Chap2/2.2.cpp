#include <iostream>
using namespace std;
int main(void) { 
 int sys;
float m, ft, in;
cin>> sys;
if (sys == 0)
{
   cin>> m;
   ft = m*3.281;
   cout << ft;
    }
    else if (sys == 1)
    {
       cin >> ft;
       m = ft*0.3048;
       cout << m << "m";
        }
    else 
    cout << "There's no such system";
return 0;
}