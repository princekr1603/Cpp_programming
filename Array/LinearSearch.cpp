#include<iostream>
using namespace std;
int main( ){
    int arr[5]={3,7,1,3,4};
    // for(int i=1;i<=5;i++){
    //    cout<<"enter element of array: ";
    //    cin>>arr[i];
    // }
    int x;
    cout<<"enter element you want to search: ";
    cin>>x;
    bool flag=false;
    for(int i=1;i<=5;i++){
        if(arr[i]==x) flag=true;    
    }
    if(flag==true) cout<<"elemnet found at poistion ";
    else cout<<"element not found";
}