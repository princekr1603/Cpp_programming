#include<iostream>
using namespace std;
int main(){
    float p[7]={10,5,15,7,6,18,3};
    float w[7]={2,3,5,7,1,4,1};
    float r[7];
    for(int i=0;i<=6;i++){
        float r[i]={p[i]/w[i]};
        cout<<r[i]<<"\n";    
    } 
}