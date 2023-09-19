#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no.:";
    cin>>n;
    for (int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is a composite number";
            break;
        }
        else{
            cout<<n<<" is a prime number";
            break;
        }
        
    }
    if(n==1){
        cout<<"1 is neither prime nor composite";
    }
}