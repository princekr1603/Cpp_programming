// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = 0; i < n; ++i) {
        for(int j= 0; j<n-i-1;++j) {
            cout<<" ";
        }
        int value=1; // The first value in each row is always 1
        for (int j=0; j<=i;++j) {
            cout<<value<<" ";
            value = value * (i - j) / (j + 1); // Update the value using the formula
        }
        cout << endl;
    }
    return 0;
}

