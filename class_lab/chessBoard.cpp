#include <iostream>
#include <string>
using namespace std;
int main() {
    // Initialize the chess board
    char board[8][8] = {
        {'E', 'H', 'B', 'Q', 'K', 'B', 'H', 'E'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-'},
        {'-', '-', '-', '-', '-', '-', '-', '-'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'e', 'h', 'b', 'q', 'k', 'b', 'h', 'e'}};
    // Display the chess board
    cout << "  a b c d e f g h" << endl;
    for (int i = 0; i < 8; i++) {
        cout << 8 - i << " ";
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
