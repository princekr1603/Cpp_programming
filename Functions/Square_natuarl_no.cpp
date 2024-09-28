#include<iostream>
using namespace std;
void NSquare(int x){
    for(int i=1;i<=x;++i){
        cout<<(i*i)<<endl;
    }
}
int main(){
    int x;
    cout<<"enter x: ";
    cin>>x;
    NSquare(x);
    return 0;
}