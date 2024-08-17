#include<iostream>
using namespace std;
// int main(){
//     int a[5];
//     for(int i=0;i<=4;i++){
//         cout<<"enter value "<<i<<":";
//         cin>>a[i];
//     }
//     for(int i=0;i<=4;i++){
//         cout<<a[i]<<" ";
//     }
// }
int main(){
    int n;
    cout<<"enter no. of student: ";
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++){
        cout<<"enter marks of student "<<i+1<<": ";
        cin>>marks[i];
    }
    for (int i=0;i<n;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}