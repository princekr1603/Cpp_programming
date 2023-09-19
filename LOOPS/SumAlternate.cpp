#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no.:";
    cin>>n;
    int sum=0;
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0)
    //         sum=sum+i;
    //     else sum=sum-i;
       
    // }
    if(n%2==0)
     cout<<-n/2;
    else cout<< -n/2 +n;
}