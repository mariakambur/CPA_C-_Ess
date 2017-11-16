#include <iostream>
using namespace std;
int main(void) {
bool answer;
int value;

cout << "Enter a value: ";
cin >> value;
if ( 10 > value && 0 <= value) 
{answer = true;}
 else {answer = false;};
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
return 0;
return 0;
}