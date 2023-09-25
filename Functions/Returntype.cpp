#include<iostream>
using namespace std;
int sum(int x,int y){
    return x+y;
}
int main(){
    // cout<<sum(29,68);
    int x,y;
    cin>>x>>y;
    cout<<min(x,y);
}