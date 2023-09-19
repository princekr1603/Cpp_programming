#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no.:";
    cin>>n;
    while(n>0){
       int a=n%10;
       cout<<a;
       n=n/10;
    }
}