#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main()
{
 
    const int MAX_WRONG = 8;  

    vector<string> words; 
    words.push_back("PRACTICE");
    words.push_back("PAIN");
    words.push_back("COMPLICATED");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0];            
    int wrong = 0;                               
    string soFar(THE_WORD.size(), '-');          
    string used = "";                            

    cout << "Simple hangman by Maria" << endl;
	cout<<"You have  " <<(MAX_WRONG - wrong)<< " tries";


    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
    {
        cout << "\nYou've used the following letters:\n" << used << endl;
        cout << "Gues The Word: " << soFar << endl;

        char guess;
        cout << "\n\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess);

        while (used.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter letter: ";
            cin >> guess;
            guess = toupper(guess);
        }

        used += guess;

        if (THE_WORD.find(guess) != string::npos)
        {
            cout << "That's right! " << guess << " it is such letter.\n";
            for (unsigned int i = 0; i < THE_WORD.length(); ++i)
			{
                if (THE_WORD[i] == guess)
				{
                    soFar[i] = guess;
				}
			}
        }
        else
        {
			++wrong;
            cout << "Sorry, " << guess << "  -  very bad!.\n";
			cout<<"You have " <<(MAX_WRONG - wrong)<< " tries left.\n";
     
        }
    }
    if (wrong == MAX_WRONG)
	{
        cout << "GAME OVER MUAHAHAHA!!!";
		
	}
    else
	{
        cout << "You've  guessed the secret word!";
	}
    
	//This is a little something i like to do at the end of my games ;)
    cout << "\nThe word was " << THE_WORD<<"\n\n";
	system("pause");
    return 0;
}