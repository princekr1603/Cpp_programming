#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no.:";
    cin>>n;
    for(int i=1;i<=n;i++){   // i=row number
        for(int j=1;j<=n;j++){
            cout<<j;   // j=column number
        }
        cout<<endl;
    }
}