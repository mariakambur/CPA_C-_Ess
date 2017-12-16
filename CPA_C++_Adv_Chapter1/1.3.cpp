#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int t[] = {5, 4, 3, 1, 2};
	int k[] = {1, 2, 3, 4, 5};
    vector<int> v1(t,t+5);
	vector<int> v2(k, k+5);
	vector<int> sums(5);
	cout << "Input x" << endl;
	int x;
	cin >> x;
	for (unsigned i = 0; i < v1.size(); i++)
	  {	sums[i] = x + v1[i] + v2[i];
	    cout << sums[i] << "";}
	cout << endl;
	return 0;
}