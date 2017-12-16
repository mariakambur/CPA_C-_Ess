#include <iostream>
using namespace std;
int main(void) {
bool answer;
int value;

cout << "Enter a value: ";
cin >> value; //reduced by 1 is greater than 1 and divided by 2 is less than 10,
if ( value-1 > 1 && value/2 < 10) 
{answer = true;}
 else {answer = false;};
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
return 0;
return 0;
}