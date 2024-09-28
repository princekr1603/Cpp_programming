#include<iostream>
using namespace std;
void area(float r){
    float a=(3.14*r*r);
    cout<<a;
}
int main(){
    float r;
    cout<<"enter radius: ";
    cin>>r;
    area(r);
}