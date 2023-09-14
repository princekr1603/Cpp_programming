#include<iostream>
using namespace std;
int main(){
    int a=50;//divident
    int b=11;//diviser
    int q=a/b;//quotient
    int r;//remainder
    //a=b*q+r
    r =a-b*q;
    cout<<r;

}