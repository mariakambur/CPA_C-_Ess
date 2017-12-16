//    map
#include <map>
#include <string>
#include <iostream>
#include <functional>

using namespace std;

template<class T> void print(T start, T end) {
        while (start != end) {
                std::cout<< start->first<<" result is: "<<start->second<<" "; start++;
                cout<< endl;
        }
    }


int main()
{
   map<string, int> results = { {"Sarah", 15 }, {"John", 12 }, {"Bart", 17} };
   print(results.begin(), results.end()); cout<<endl;
   results.erase("Bart");
   print(results.begin(), results.end()); cout<<endl;
   results.insert({"Bob", 16});
    print(results.begin(), results.end()); cout<<endl;
	return 0;

}


 

 

