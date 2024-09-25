#include<iostream>
using namespace std;
int main(){
    int n, i;
    cout<<"enter no.:";
    cin>>n;
    //int k=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        } 
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }  
}