#include<iostream>
using namespace std;
void factorial(int n){
    int fact=1;
    int ans;
    for(int i=1;i<=n;i++){
        ans=(fact=fact*i);
    }
    cout<<ans<<" ";
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    factorial(n);
    return 0;
}