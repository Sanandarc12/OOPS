#include <iostream>

using namespace std;

// Constants for player marks
const char EMPTY = ' ';
const char PLAYER_X = 'X';
const char PLAYER_O = 'O';

// Class representing a Tic-Tac-Toe board
class TicTacToe {
protected:
    char board[3][3]; // 2D array to represent the board
public:
    char currentPlayer; // Current player's mark
    // Constructor to initialize the board and current player
    TicTacToe() {
        // Initialize the board with empty cells
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                board[i][j] = EMPTY;
            }
        }
        currentPlayer = PLAYER_X; // X starts the game
    }

    // Method to display the board
    void displayBoard() {
        cout << "-------------" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "| ";
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j] << " | ";
            }
            cout << endl << "-------------" << endl;
        }
    }

    // Method to check if the board is full
    bool isBoardFull() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == EMPTY)
                    return false;
            }
        }
        return true;
    }

    // Method to check if a player has won
    bool checkWin() {
        // Check rows and columns
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != EMPTY)
                return true;
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != EMPTY)
                return true;
        }

        // Check diagonals
        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != EMPTY) ||
            (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != EMPTY))
            return true;

        return false;
    }

    // Method to make a move
    void makeMove(int row, int col) {
        if (row < 0 || row >= 3 || col < 0 || col >= 3) {
            cout << "Invalid move! Please enter valid row and column." << endl;
            return;
        }
        if (board[row][col] != EMPTY) {
            cout << "Invalid move! That cell is already occupied." << endl;
            return;
        }
        board[row][col] = currentPlayer;
        currentPlayer = (currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X;
    }
};

int main() {
    TicTacToe game;

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    while (true) {
        game.displayBoard();

        // Get player input
        int row, col;
        cout << "Player " << game.currentPlayer << "'s turn. Enter row and column (0-2): ";
        cin >> row >> col;

        // Make the move
        game.makeMove(row, col);

        // Check for win or draw
        if (game.checkWin()) {
            game.displayBoard();
            cout << "Player " << ((game.currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X) << " wins!" << endl;
            break;
        } else if (game.isBoardFull()) {
            game.displayBoard();
            cout << "It's a draw!" << endl;
            break;
        }
    }

    return 0;
}
