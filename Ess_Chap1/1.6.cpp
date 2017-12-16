#include <iostream>
using namespace std;
int main(void) {
bool answer;
int value;
cout << "Enter a value: ";
cin >> value;
answer = value == 111;
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
return 0;
}