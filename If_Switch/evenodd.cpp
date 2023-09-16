#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number: ";
    int n;
    cin>>n;
   // cout<<(n%2==0);gives true(1) and false(0)
    if(n%2==0){
        cout<<n<<" is even number ";
    }
    else{
        cout<<n<<" is odd number";
    }
}

