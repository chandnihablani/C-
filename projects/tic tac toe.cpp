#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts = 0;
    
    // Initialize random seed
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100

    cout << "***********************************\n";
    cout << "* Welcome to the Number Guessing Game! *\n";
    cout << "***********************************\n";
    cout << "I have selected a number between 1 and 100.\n";
    cout << "Can you guess it?\n\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number)
            cout << "Too high! Try again.\n";
        else if (guess < number)
            cout << "Too low! Try again.\n";
        else
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";

    } while (guess != number);

    cout << "\nThanks for playing! ??\n";

    return 0;
}

