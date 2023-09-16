#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no.: ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<n<<" is three digit no.";
    }
    else{
        cout<<n<<" is not three digit no.";
    }
}