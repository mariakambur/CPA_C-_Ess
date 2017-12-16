
#include <string>
#include <iostream>
using namespace std;
void CheckPsswd(string password)
{
    
     int length = 0, lcletter = 0, ucletter = 0, digit = 0, specchar = 0, comp;
    if(password.length() >= 8)
        length = 1;
    for (int i = 0; i < password.length(); i++)
    {
        comp = password.substr(i, 1).compare("A");
        if((comp >= 0) && (comp <= 25))
            ucletter++;
        else if((comp >= -17) && (comp <= -8))
            digit++;
        else
        {
            comp = password.substr(i, 1).compare("a");
            if ((comp >= 0) && (comp <= 25))
                lcletter++;
            else
                specchar++;
        }
    }
    if(length == 0)
        cout << "The password must be at least 8 characters long" << endl;
    if(ucletter == 0)
        cout << "The password must have at least one upper case letter" << endl;
    if(digit == 0)
        cout << "The password must have at least one digit" << endl;
    if(lcletter == 0)
        cout << "The password must have at least one lower case letter" << endl;
    if(specchar == 0)
        cout << "The password must have at least one special character" << endl;
    if(length * ucletter * digit * lcletter * specchar != 0)
        cout << "Password is valid" << endl;
        }
int main() {
    cout << "Input the password, please.It must:" << endl;
    cout << "  1)be at least eight characters long;" << endl;
    cout << "  2)have at least one upper-case letter;" << endl;
    cout << "  3)have at least one lower-case letter;" << endl;
    cout << "  4)have at least one digit;" << endl;
    cout << "  5)have at least one special character." << endl;
    string password;
    getline(cin, password); 
    CheckPsswd(password);
    return 0;
    }