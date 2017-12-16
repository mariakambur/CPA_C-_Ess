#include <iostream>
#include <deque>

using namespace std;

int main()
{   int myints[] = {1, 2, 3};
	deque<int> d1(myints, myints+3);
	int newints[] = {4,3,2};
	deque<int> d2(newints, newints+3);
	cout << d1.front() + d2.front() << " ";
	for (int d: d1)
	{
		cout << d + d2.back() << " ";
		d2.pop_back();
	}
	return 0;
}