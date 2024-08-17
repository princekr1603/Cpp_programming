#include<iostream>
using namespace std;
int main( ){
    int arr[5];
    for(int i=1;i<=5;i++){
        cout<<"enter value of array: ";
        cin>>arr[i];
    }
    int r=0;
    for(int i=1;i<=5;i++){
        r=r+arr[i];
    }
    cout<<r;
}