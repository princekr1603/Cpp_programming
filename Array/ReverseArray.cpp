#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter array value: ";
        cin>>arr[i];
    }
    cout<<"original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<endl<<"reverse array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}