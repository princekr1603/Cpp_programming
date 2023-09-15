#include<iostream>
using namespace std;
int main(){
    int cp,sp;//cost price ,selling price
    cout<<"enter cp: ";
    cin>>cp;
    cout<<"enter sp: ";
    cin>>sp;
    if(cp>sp){
        cout<<"loss= "<<cp-sp;
    }
    else if(cp<sp){
        cout<<"profit= "<<sp-cp;
    }
    else{
        cout<<"No profit No loss";
    }
}