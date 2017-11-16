#include <iostream>
using namespace std;
int main(void) {
bool answer;
int value;

cout << "Enter a value: ";
cin >> value; //multiplied by 2 is less than 20 and reduced by 2 is greater than minus 2

if ( value*2 < 20 && value-2 > -2) 
{answer = true;}
 else {answer = false;};
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
return 0;
return 0;
}