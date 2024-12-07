#include<iostream>
using namespace std;
void factorial(int n){
    int fact=1;
    int ans;
    for(int i=1;i<=n;i++){
        ans=(fact=fact*i);
        cout<<i<<"x";
    }
    cout<<"= "<<ans;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    factorial(n);
    return 0;
}
// #include <iostream>
// using namespace std;

// void factorial(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//         if (i == n) {
//             cout << i;  // Print the last number without 'x'
//         } else {
//             cout << i << "x";  // Print 'x' for all but the last number
//         }
//     }
//     cout << "= " << fact;
// }

// int main() {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     factorial(n);
//     return 0;
// }
