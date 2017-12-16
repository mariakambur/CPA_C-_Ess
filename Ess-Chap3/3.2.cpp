#include <iostream>
using namespace std;
int main(void) {
int table[10][10] = { };
int *pointer = &table[0][0];
for (int i = 1; i<= 10; i++)
{for (int j = 1; j<=10; j++)
	{
		*pointer = i*j;
		pointer++;
	}
}

for(int i = 0; i < 10; i++)
{
	for(int j = 0; j < 10; j++) 
	{
		cout.width(4);
		cout << table[i][j];
	}
	cout << endl;
}
return 1;
}