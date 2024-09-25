#include<iostream>
using namespace std;
int main( ){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cout<<"enter the elments of array: ";
        cin>>arr[i];
    }
    int x;
    cout<<"enter element you want to search: ";
    cin>>x;
    bool flag=false;
    for(int i=1;i<=n;i++){
        if(arr[i]==x) flag=true;    
    }
    if(flag==true) cout<<"elemnet present";
    else cout<<"element not found";
}