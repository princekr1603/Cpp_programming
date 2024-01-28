// #include<iostream>
// using namespace std;
// int main(){
//     float p[7]={10,5,15,7,6,18,3};
//     float w[7]={2,3,5,7,1,4,1};
//     float r[8];
//     for(int i=0;i<=6;i++){
//         float r[i]={p[i]/w[i]};
//         cout<<r[i]<<"\n";    
//     } 
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 4; // Number of items
    int W = 5; // Knapsack capacity

    vector<int> weights = {10,5,15,7,6,18,3};
    vector<int> values = {2,3,5,7,1,4,1};

    // Initializing a 2D array to store results
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    // Dynamic Programming approach to solve 0/1 Knapsack
    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= W; ++w) {
            if (weights[i - 1] <= w) {
                dp[i][w] = max(dp[i - 1][w], values[i - 1] + dp[i - 1][w - weights[i - 1]]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // The result is stored in the bottom-right cell of the table
    int result = dp[n][W];

    cout << "Maximum value in the knapsack: " << result << endl;

    return 0;
}
