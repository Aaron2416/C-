#include <iostream>
using namespace std;
// Aaron M

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void displayBoard() {
    for (int i = 1; i <= 9; i += 3) {
        cout << square[i] << " | " << square[i + 1] << " | " << square[i + 2] << endl;
        if (i < 7) cout << "---------" << endl;
    }
}

bool checkWin() {
    // Check rows, columns, and diagonals for a win
    for (int i = 1; i <= 7; i += 3) {
        if (square[i] == square[i + 1] && square[i + 1] == square[i + 2]) return true;
    }
    for (int i = 1; i <= 3; i++) {
        if (square[i] == square[i + 3] && square[i + 3] == square[i + 6]) return true;
    }
    if ((square[1] == square[5] && square[5] == square[9]) || (square[3] == square[5] && square[5] == square[7])) return true;

    return false;
}

int main() {
    int player = 1;
    int choice;
    bool gameover = false;

    do {
        displayBoard();
        cout << "Player " << player << ", enter a number: ";
        cin >> choice;

        if (choice >= 1 && choice <= 9 && square[choice] == '0' + choice) {
            square[choice] = (player == 1) ? 'X' : 'O';
            gameover = checkWin();
            player = (player == 1) ? 2 : 1;
        } else {
            cout << "Invalid move. Try again." << endl;
        }

    } while (!gameover);

    displayBoard();
    cout << "Player " << player << " wins!" << endl;

    return 0;
}
