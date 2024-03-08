#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1); // Use getline() to allow input with spaces
    cout << "Enter the second string: ";
    getline(cin, str2); // Use getline() to allow input with spaces

    int m = str1.length();
    int n = str2.length();

    // Create a 2D vector to store the lengths of LCS
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Fill the dp table in bottom-up manner
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    // Traverse the dp table to construct the LCS
    int i = m, j = n;
    string lcs;
    while (i > 0 && j > 0) {
        if (str1[i - 1] == str2[j - 1]) {
            lcs = str1[i - 1] + lcs;
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }
    cout << "Longest Common Subsequence: " << lcs << endl;
    return 0;
}
