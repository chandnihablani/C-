// Password Strength Checker
#include <iostream>
using namespace std;

int main() {
    char pass[50];
    int i = 0, upper = 0, lower = 0, digit = 0, special = 0;

    cout << "Enter password: ";
    cin >> pass;

    while(pass[i] != '\0') {
        if(pass[i] >= 'A' && pass[i] <= 'Z')
            upper = 1;
        else if(pass[i] >= 'a' && pass[i] <= 'z')
            lower = 1;
        else if(pass[i] >= '0' && pass[i] <= '9')
            digit = 1;
        else
            special = 1;
        i++;
    }

    if(upper && lower && digit && special)
        cout << "Strong Password";
    else
        cout << "Weak Password";
}


