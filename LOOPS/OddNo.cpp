#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no.:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;}
        cout<<i<<endl;
        
        
    }
}