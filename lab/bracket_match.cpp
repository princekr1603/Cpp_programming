#include <iostream>
using namespace std;
#include <stack>
#include <string>

int main() {
    string s;
    cout << "Enter a string of brackets: ";
    cin >> s;

    stack<char> st;

    bool isValid = true;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } 
        else if (c == ')' || c == '}' || c == ']') {
            if (st.empty()) {
                isValid = false;
                break;
            } 
            else
            {   char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    isValid = false;
                    break;
                }
            }
        }
    }
    if (!st.empty()) {
        isValid = false;
    }
    if (isValid) {
        cout << "The string is valid." <<endl;
    } else {
        cout << "The string is not valid." <<endl;
    }
    return 0;
}

