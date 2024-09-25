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

    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*(n-i)-1;j++){
             if(j%2==0){
                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
        cout<<endl;
    }
}