#include<iostream>
using namespace std;
int prime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
void print_prime(int a,int b){
    for(int num=a; num<=b; num++){
        if(prime(num)){
            cout<< num <<" ";
        }
    }
}
int main(){
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    print_prime(a,b);
    return 0;
}