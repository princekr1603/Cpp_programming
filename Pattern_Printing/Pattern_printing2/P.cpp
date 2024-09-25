#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i==1||i==n)||(j==1||j==n)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            if((i==1||i==n)||(j==1||j==n)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=n+1/2;i++){
        for(int j=1;j<=n/2;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}