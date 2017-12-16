#include <iostream>
using namespace std;
int main(void) {
    int n;
cout << "Put the dimension of square";
cin >> n;
if (n < 0 || n > 10)
{cout << "you are so stupid, it is IMPOSSIBLE!!!!!11111!!!!11";}
else{
cout << '+';
for(int i = 0; i < n; i++)
cout << '-';
cout << '+' << endl;
for(int i = 0; i < n; i++) {
cout << '|';
for(int j = 0; j < n; j++)
cout << ' ';
cout << '|' << endl;
}
cout << '+';
for(int i = 0; i < n; i++)
cout << '-';
cout << '+' << endl;
}
return 0;
}