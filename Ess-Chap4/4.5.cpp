#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool Convert(const std::string& str, int& result)
{
    std::string::const_iterator i = str.begin();

    if (i == str.end())
        return false;

    bool negative = false;

    if (*i == '-')
    {
        negative = true;
        ++i;

        if (i == str.end())
            return false;
    }

    result = 0;

    for (; i != str.end(); ++i)
    {
        if (*i < '0' || *i > '9')
            return false;

        result *= 10;
        result += *i - '0';
    }

    if (negative)
    {
        result = -result;
    }

    return true;
}
int main(void) {
    cout << "Input IP Address" <<endl;
    string s;
    getline(cin,s);
    vector<string> parts = vector<string>();
    string temp;
    int a = 0;
    while (s.find_first_of('.') != string::npos)
    {

        temp = s.substr(0, s.find_first_of("."));
        if (temp.length() > 3)
        {
            cout<< "Too many characters in a part";
            return 0;
        }
        if (!Convert(temp, a))
        {
            cout<< "Only digits and dots allowed";
            return 0;
        }
        parts.push_back(temp);
        s = s.substr(s.find_first_of(".") + 1);
    }
    parts.push_back(s);
    if(parts.size() != 4){
		cout<<"Incorrect parts count.";
		return 0;
	}
	for (int i = 0; i < parts.size(); i++)
    {
        Convert(parts[i],a);
        if(a > 255 )
        {
            cout<<"Too big a value of a part";
            return 0;
        }

    }
    cout<<"Correct IP";
	return 0;
}
