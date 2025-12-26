#include<iostream>
using namespace std;
int main()
{
	
	
	string word, reverseWord;
	
	cout<<"enter the number or word";
	
	cin>>word;
	
	int length= word.length();
	
	for (int i = length - 1; i >= 0; i--) {
		
          reverseWord += word[i];
		 
	}
	
	
	if (word == reverseWord) {
        cout << "It is a palindrome!" << endl;
    } else {
        cout << "It is NOT a palindrome!" << endl;
    }
    
    
	
	
	
	
	
	
	
	
	
	
	
}
