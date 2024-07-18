#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Generate a random number between 1 and 100
    srand(time(0));
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    bool correctGuess = false;

    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess what it is?" << endl;

    while (!correctGuess) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            correctGuess = true;
            cout << "Congratulations! You guessed the number " << secretNumber << " correctly in " << attempts << " attempts!" << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }
    return 0;
}
