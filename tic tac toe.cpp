//TASK 3 TIC TAC TOE GAME
#include <iostream>
using namespace std;

char board[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};

void displayBoard() {
    cout << "\n";
    for(int i = 0; i < 3; i++) {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " \n";
        cout << "---|---|---\n";
    }
    cout << "\n";
}

bool isValidMove(int row, int col) {
    return row >= 0 && row < 3 && col >= 0 && col < 3 && 
           board[row][col] != 'X' && board[row][col] != 'O';
}

bool checkWin(char symbol) {
    // Rows
    for(int i = 0; i < 3; i++)
        if(board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol)
            return true;
    
    // Columns
    for(int i = 0; i < 3; i++)
        if(board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)
            return true;
    
    // Diagonals
    if(board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
        return true;
    if(board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
        return true;
    
    return false;
}

bool isBoardFull() {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

int main() {
    int row, col;
    char currentPlayer = 'X';
    
    cout << "Tic Tac Toe Game!\nEnter row(1-3) column(1-3) numbers.\n";
    
    while(true) {
        displayBoard();
        
        cout << "Player " << currentPlayer << ", enter row column: ";
        cin >> row >> col;
        row--; col--;  // Convert to 0-index
        
        if(isValidMove(row, col)) {
            board[row][col] = currentPlayer;
            
            if(checkWin(currentPlayer)) {
                displayBoard();
                cout << "Player " << currentPlayer << " wins!\n";
                break;
            }
            
            if(isBoardFull()) {
                displayBoard();
                cout << "Game Draw!\n";
                break;
            }
            
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            cout << "Invalid move! Try again.\n";
        }
    }
    
    return 0;
}

    
