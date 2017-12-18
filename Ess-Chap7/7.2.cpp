#include <string>
#include <iostream>

using namespace std;
const int DivideByZero = 111;

float TrowExpDiv(float arg1, float arg2)
{
	if (0 == arg2)
		throw DivideByZero;
	return arg1 / arg2;
}
float Divide(float arg1, float arg2) {
	if (arg2 == 0.0)
		throw string ("Your input is not valid. You can't divide by zero.");
	
	return TrowExpDiv(arg1, arg2);
}
int main(void) {
	float  a, b;
	try
	{
	 cout<< "Input numerator"<<endl;
	 cin >> a;
	 cout<< "Input denominator"<<endl;
	 cin >> b;
	 cout  << Divide(a, b) << endl;
	}
	catch (string &exp)
	{
		cout << "You cant divide by zero!" << endl;
		cout << exp << endl;
		
	}
			
	
	return 0;
}