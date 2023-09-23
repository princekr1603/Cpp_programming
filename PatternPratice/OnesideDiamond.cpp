#include<iostream>
using namespace std;
int main(){
    int n, i;
    cout<<"enter no.:";
    cin>>n;
    for(int i=1;i<=n+3;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        } 
        cout<<endl;
    }
    for(int k=1;k<=n-i;k++){
        cout<<"*";
        }   
}