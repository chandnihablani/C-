#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Random seed
    int level, number, guess, attempts;
    char playAgain;

    cout << "*******************************\n";
    cout << "* Welcome to the Number Puzzle *\n";
    cout << "*******************************\n\n";

    do {
        cout << "Choose difficulty level:\n";
        cout << "1. Easy (1-10)\n2. Medium (1-50)\n3. Hard (1-100)\n";
        cout << "Enter level (1-3): ";
        cin >> level;

        if (level == 1) number = rand() % 10 + 1;
        else if (level == 2) number = rand() % 50 + 1;
        else number = rand() % 100 + 1;

        attempts = 0;
        cout << "Guess the number!\n";

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess > number) cout << "Too high! Try again.\n";
            else if (guess < number) cout << "Too low! Try again.\n";
            else cout << "Congratulations! You guessed it in " << attempts << " attempts! ??\n";

        } while (guess != number);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        cout << "\n";

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! ??\n";

    return 0;
}

