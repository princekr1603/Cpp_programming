#include<iostream>
using namespace std;
int main(){
    int x=8;
    cout<<&x<<endl;
    int* p=&x;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&*p<<endl;
    cout<<&p;
}