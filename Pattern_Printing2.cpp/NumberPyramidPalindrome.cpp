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
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int m=i-1;m>=1;m--){
            // if(i==m) cout<<"1";
            cout<<m;
        }
        cout<<endl;
    }
}