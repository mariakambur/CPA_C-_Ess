#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
 class Banknote
{
    public:
    int denom;
    int qty;
    Banknote(int denom, int qty);
};
 Banknote::Banknote(int denom, int qty)
 {
     this->denom = denom;
     this->qty = qty;
 }
int main()
{
	Banknote ten(10, 5);
	Banknote twenty(20, 6);
	Banknote fifty(50, 3);
	Banknote hundr(100, 4);
	Banknote twohundr(200, 5);
	cout << "Input sum you want to widthdraw" << endl;
	int cash;
	cin >> cash;
	if(cash%10 != 0)
	cout << "Incorrect amount of money" <<endl;
	else{
	Banknote acc[] = {ten, twenty, fifty, hundr, twohundr};
	vector<Banknote> bill(acc, acc+5);
	int sum;
	for (unsigned i =0; i< bill.size(); i++)
	{
	    sum += bill[i].denom * bill[i].qty;
	}
	if(sum < cash)
	cout << "Not enough money"<< endl;
	else cout << "Enough money" << endl;
	}
	return 0;
}