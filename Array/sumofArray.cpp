#include<iostream>
using namespace std;
int main( ){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cout<<"enter value of array: ";
        cin>>arr[i];
    }
    int r=0;
    for(int i=1;i<=n;i++){
        r=r+arr[i];
    }
    cout<<r;
}