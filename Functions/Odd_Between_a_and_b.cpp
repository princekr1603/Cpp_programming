#include<iostream>
using namespace std;
void odd(int a,int b){
    if(a<b){
        for(int i=a;i<=b;i++){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
    }
    else{
        for(int i=a;i>=b;i--){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
    }
}
int main(){
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b; 
    odd(a,b);
    return 0;
}