#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int k=1;k<=n+1-i;k++){
            cout<<" ";
        }
        for(int p=1;p<=i;p++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++){
            cout<<" ";
        }
        for(int p=1;p<=n-i;p++){
            cout<<"*";
        }
        cout<<endl;
    } 
    
     
}