#include <iostream>
using namespace std;

int main() {
    char ch;
    int num;

    cout << "Enter a character or number: ";
    cin >> ch;

    // If input is a digit (0–9)
    
    if (ch >= '0' && ch <= '9') {
        num = ch - '0';
        cout << "Number entered: " << num << endl;
        cout << "ASCII value: " << int(ch) << endl;
    }
    // If input is a character
    
    else {
        cout << "Character entered: " << ch << endl;
        cout << "ASCII value: " << int(ch) << endl;
    }

    return 0;
}

