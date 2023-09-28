#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no.:";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a=(2*n-1)/2;
            if(j==a){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}