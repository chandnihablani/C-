#include <iostream>
using namespace std;

char board[9] = {'1','2','3','4','5','6','7','8','9'};
char currentPlayer = 'X';

void showBoard() {
    cout << endl;
    cout << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "--|---|--" << endl;
    cout << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "--|---|--" << endl;
    cout << board[6] << " | " << board[7] << " | " << board[8] << endl;
    cout << endl;
}

void playTurn() {
    int choice;
    cout << "Player " << currentPlayer << ", enter position (1-9): ";
    cin >> choice;

    if (board[choice - 1] != 'X' && board[choice - 1] != 'O') {
        board[choice - 1] = currentPlayer;
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    } else {
        cout << "Position already taken! Try again.\n";
        playTurn();
    }
}

char checkWinner() {
    if (board[0]==board[1] && board[1]==board[2]) return board[0];
    if (board[3]==board[4] && board[4]==board[5]) return board[3];
    if (board[6]==board[7] && board[7]==board[8]) return board[6];
    if (board[0]==board[3] && board[3]==board[6]) return board[0];
    if (board[1]==board[4] && board[4]==board[7]) return board[1];
    if (board[2]==board[5] && board[5]==board[8]) return board[2];
    if (board[0]==board[4] && board[4]==board[8]) return board[0];
    if (board[2]==board[4] && board[4]==board[6]) return board[2];

    return ' ';
}

int main() {
    int moves = 0;
    char winner = ' ';

    while (moves < 9 && winner == ' ') {
        showBoard();
        playTurn();
        winner = checkWinner();
        moves++;
    }

    showBoard();

    if (winner != ' ')
        cout << "Player " << winner << " wins!";
    else
        cout << "It's a draw!";

    return 0;
}

