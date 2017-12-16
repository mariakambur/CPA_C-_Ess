#include <iostream>
using namespace std;
int main(void) {
cout << "input the negative power of 2";
int n;
cin >> n;
double res = 1;
for (int i = 1; i<n; i++)
{
    res *= 2;
}
double power;
power = 1/res;
cout.precision(20);
cout << power;

}