#include<iostream>
using namespace std;
int main(){
    cout<<"enter no.:";
    int n;
    cin>>n;
    if(n>0){
        cout<<n<<" is absolute value of "<<n;
    }
    else{
        cout<<-n<<" is absolute value of "<<n;
    }

}