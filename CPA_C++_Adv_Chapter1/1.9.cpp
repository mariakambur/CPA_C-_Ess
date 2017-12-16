#include <list>
#include <vector>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
    //containers
    vector<int> v1 {1, 2, 3};
	vector<int> v2 {5, 2, 6, 4};

    //vector
    vector<int>::iterator it1;
    vector<int>::iterator it2;
    for(it1 = v1.begin()  ; it1 != v1.end(); ++it1)
    {
        for(it2 = v2.begin()  ; it2 != v2.end(); ++it2)	
		{
			cout << *it1 + *it2 << " ";
		}
		cout<<endl;
    }
    
   
    cout<<endl;

    return 0;
}