#include <iostream>
using namespace std;

int main() {
    char ch;

     cout<<"enter the charachter or digit:";
     
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase character";
    else if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase character";
    else if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else
        cout << "Special character";

    return 0;
}

