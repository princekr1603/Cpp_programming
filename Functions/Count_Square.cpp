#include<iostream>
using namespace std;
void count(int n){
    int x=0;
    while(n>0){
        n=n/10;
        x++;
    }
    cout<<"length of digits is: "<<x<<endl;    
}
void square(int n){
    cout<<"square of no. is: "<<n*n;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    count(n);
    square(n);

}