#include <iostream>
#include <string>

using namespace std; 
bool IsPangram (string str)
{ int *arr = new int[26];
        int inx;
        if(str[0]>=65&&str[0]<=90)
        	arr[(str[0]+32)%97]++;
        for(int i = 0; i<str.size(); i++)
        {
        	inx = str[i]%97;
        	arr[inx]++;
        }
        bool isPangram = true;

        for(int i = 0; i<26; i++){
        	if(arr[i]==0){
        		isPangram = false;
        		cout<<"Not pangram\n";
        		break;
        	}
        }
        if(isPangram)
			cout<<"Pangram\n";
			
        for(int i = 0; i<26; i++){
        	cout<<(char)(i+97)<<" - "<<arr[i]<<endl;
        } 	
        delete[] arr;}
int main(void) { 
        string str;
        cout << "Input string" << endl;
        getline(cin, str);
        IsPangram(str);
        return 0; 
} 