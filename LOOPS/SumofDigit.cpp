#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no.";
    cin>>n;
    int sum=0;
    while(n>0){
        int a=n%10;//last digit
        sum=a+sum;
        n=n/10;
        //cout<<sum;
    }
   cout<<sum;


}