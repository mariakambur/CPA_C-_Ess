
#include <iostream>
using namespace std;
class Piece
{
public:
	virtual bool check(char destLett, int destNum) { return true; }
};
class King : public Piece
{
public:
	bool check(char destLett, int destNum)
	{
		char lett = 'b';
		int num = 1;
		return destLett - lett <= 6 && destNum - num <= 6;

	}
};
class Man : public Piece
{
public:
	bool check(char destLett, int destNum)
	{
		char lett = 'b';
		int num = 1;
		return destLett - lett == 1 && destNum - num == 1;

	}
};

int main()
{
	Man *man = new Man();
	King *king = new King();
	if (static_cast<Piece *>(man)->check('c', 2))
		cout << "true"<<endl;
	else
		cout << "false" << endl;
	if (static_cast<Piece *>(king)->check('d', 3))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (static_cast<Piece *>(man)->check('d', 3))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	
    return 0;
}

