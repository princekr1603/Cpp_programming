#include <iostream>
#include <string>
using namespace std;
string encrypt(const string& text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            result += char((c - base + shift) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}
string decrypt(const string& text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            result += char((c - base - shift + 26) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}
int main() {
    string text;
    int shift;
    cout << "Enter text to encrypt: ";
    getline(cin, text);
    cout << "Enter key value: ";
    cin >> shift;
    string encrypted = encrypt(text, shift);
    cout << "Encrypted text: " << encrypted << endl;
    string decrypted = decrypt(encrypted, shift);
    cout << "Decrypted text: " << decrypted << endl;
    return 0;
}
