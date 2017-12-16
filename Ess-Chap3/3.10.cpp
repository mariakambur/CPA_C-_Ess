#include <iostream>
#include <cmath>
using namespace std;

void Increment(int& a, int b = 1)
{
  a += b;
}

void Increment(float& a, int b = 1)
{
  a += b;
}

int main(void) {
    int someint = 0;
    float somefloat = 1.5;
    for(int i = 0; i < 10; i++)
    if(i % 2) {
    Increment(someint);
    Increment(somefloat, sqrt(someint));
    }
    else {
    Increment(someint,i);
    Increment(somefloat);
    }
    cout << someint * somefloat << endl;
    return 0;
}