#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j++){
            if(j%2==0){
                cout<<"0";
            }
            else{
                cout<<"1";
            }
            
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<(n+2)-2*i;j++){
             if(j%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}