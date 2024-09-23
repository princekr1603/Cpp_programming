#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        cout << number << " is not a perfect square." << endl;
        return 0;
    }
    int i = 0;
    bool isPerfectSquare = false;
    while (i * i <= number) {
        if (i * i == number) {
            isPerfectSquare = true;
            break;
        }
        i++;
    }
    if (isPerfectSquare) {
        cout << number << " is a perfect square." << endl;
    } else {
        cout << number << " is not a perfect square." << endl;
    }
    return 0;
}
