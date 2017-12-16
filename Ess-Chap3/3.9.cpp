#include <iostream>
void Increment(int& a, int b=1)
{
  a += b;
}

int main(void) {
    int var = 0;
    for(int i = 0; i < 10; i++)
    if(i % 2) Increment(var);
    else Increment(var,i);
    std::cout << var << std::endl;
    return 1;
}
