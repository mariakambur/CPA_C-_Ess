#include <iostream>
using namespace std;
int main(void) { 
    int  a, b, c, d, e, y;
    cout << "Input year";
    cin >> y;
 a = y/19;//1. Divide year by 19 and find the remainder – assign it to a;
b = y%4;//2. divide year by 4 and find the remainder – assign it to b;
c = y%7;//3. divide year by 7 and find the remainder – assign it to c;
d = (a*19+24)%30;//4. take a, multiply it by 19, add 24, divide by 30 and find the remainder – assign it to d
e = (2*b + 4*c + 6*d + 5)%7; //5. divide (2b + 4c + 6d + 5) by 7 and find the remainder - assign it to e;
//6. check the value of d + e;
if (d+e < 10)
{
    cout << "Easter falls on the"<< d+e+22 << "day of March";
}//7. if it's less than 10, Easter falls on the (d + e + 22) day of March;

else 
{cout << "Easter falls on the"<< d+e-9 << "day of April"; }//8. otherwise it falls on the (d + e – 9) day of April;
//9. that's all!
}